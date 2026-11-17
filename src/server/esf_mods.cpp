// esf_mods.cpp -- funções de classes do SDK (não-CBasePlayer) que o ESF alterou. RECUPERADO À MÃO.
// Fonte: decomp_raw/<Classe>/*.c. As que são iguais ao SDK estão em src/server/sdk/ (docs/sdk_reviewed.txt).
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"


#define ESF_ITEM_RESPAWN_TIME 120      // [OK] SDK: 30

float CHalfLifeMultiplay::FlItemRespawnTime(CItem *pItem)
{
    return gpGlobals->time + ESF_ITEM_RESPAWN_TIME;           // [OK]
}

float CHalfLifeMultiplay::FlPlayerFallDamage(CBasePlayer *pPlayer)
{
    return 10;                                                // [OK] ESF: dano fixo (sem cvar falldamage)
}

void CWorld::Spawn(void)
{
    g_fGameOver = FALSE;
    Precache();
    g_flWeaponCheat = CVAR_GET_FLOAT("sv_cheats");            // [OK] impulse 101 só com sv_cheats
}

void CGib::WaitTillLand(void)
{
    if (!IsInWorld())
    {
        UTIL_Remove(this);
        return;
    }
    if (pev->velocity == g_vecZero)
    {
        SetThink(&CGib::SUB_StartFadeOut);
        pev->movetype = MOVETYPE_NONE;                        // [OK] ESF: o pedaço fica parado...
        pev->origin.z += 10.0f;                               // [OK] ...e sobe 10 unidades
        pev->nextthink = gpGlobals->time + m_lifeTime;
        if (m_bloodColor != DONT_BLEED)
            CSoundEnt::InsertSound(bits_SOUND_MEAT, pev->origin, 384, 25);
    }
    else
        pev->nextthink = gpGlobals->time + 0.5f;
}

void CBaseEntity::TraceAttack(entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType)
{
    Vector vecOrigin = ptr->vecEndPos - vecDir * 4;
    if (pev->takedamage)
    {
        AddMultiDamage(pevAttacker, this, flDamage, bitsDamageType);
        int blood = BloodColor();
        if (blood != DONT_BLEED || (bitsDamageType & DMG_BULLET))   // [OK] ESF: sangra também sem cor de sangue se for bala (bits & 2)
        {
            SpawnBlood(vecOrigin, blood, flDamage);
            TraceBleed(flDamage, vecDir, ptr, bitsDamageType);      // [OK] virtual (slot +0x44) no ESF
        }
    }
}

// CGib::BounceGibTouch [OK] vs decomp 0xa5200: ESF ignora toque do dono, e SEMPRE freia a velocidade (x0.8) no fim.
void CGib::BounceGibTouch(CBaseEntity *pOther)
{
    Vector vecSpot;
    TraceResult tr;

    if (pev->owner)                                           // [?] decomp ambíguo: dono ou "irmãos" do mesmo dono não colidem
    {
        if (pev->owner == pOther->edict())
            return;
        if (pOther->pev->owner == pev->owner)
            return;
    }
    if (pev->flags & FL_ONGROUND)
    {
        pev->angles.x = 0;                                    // (sem o x0.9 do SDK)
        pev->angles.z = 0;
        pev->avelocity.x = 0;
        pev->avelocity.z = 0;
    }
    else
    {
        if (g_Language != LANGUAGE_GERMAN && m_cBloodDecals > 0 && m_bloodColor != DONT_BLEED)
        {
            vecSpot = pev->origin + Vector(0, 0, 8);
            UTIL_TraceLine(vecSpot, vecSpot + Vector(0, 0, -24), ignore_monsters, ENT(pev), &tr);
            UTIL_BloodDecalTrace(&tr, m_bloodColor);
            m_cBloodDecals--;
        }
        if (m_material != matNone && RANDOM_LONG(0, 2) == 0)
        {
            float zvel = fabs(pev->velocity.z);
            float volume = 0.8 * min(1.0, ((float)zvel) / 450.0);
            CBreakable::MaterialSoundRandom(edict(), (Materials)m_material, volume);
        }
    }
    pev->velocity = pev->velocity * 0.8;                      // [OK] ESF
}

// CBaseMonster::TakeDamage = SDK + flag de dano 0x4000000 (sem empurrão). [OK] vs decomp 0xa5810
int CBaseMonster :: TakeDamage( entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType )
{
	float	flTake;
	Vector	vecDir;

	if (!pev->takedamage)
		return 0;

	if ( !IsAlive() )
	{
		return DeadTakeDamage( pevInflictor, pevAttacker, flDamage, bitsDamageType );
	}

	if ( pev->deadflag == DEAD_NO )
	{
		// no pain sound during death animation.
		PainSound();// "Ouch!"
	}

	//!!!LATER - make armor consideration here!
	flTake = flDamage;

	// set damage type sustained
	m_bitsDamageType |= bitsDamageType;

	// grab the vector of the incoming attack. ( pretend that the inflictor is a little lower than it really is, so the body will tend to fly upward a bit).
	vecDir = Vector( 0, 0, 0 );
	if (!FNullEnt( pevInflictor ))
	{
		CBaseEntity *pInflictor = CBaseEntity :: Instance( pevInflictor );
		if (pInflictor)
		{
			vecDir = ( pInflictor->Center() - Vector ( 0, 0, 10 ) - Center() ).Normalize();
			vecDir = g_vecAttackDir = vecDir.Normalize();
		}
	}

	// add to the damage total for clients, which will be sent as a single
	// message at the end of the frame
	// todo: remove after combining shotgun blasts?
	if ( IsPlayer() )
	{
		if ( pevInflictor )
			pev->dmg_inflictor = ENT(pevInflictor);

		pev->dmg_take += flTake;

		// check for godmode or invincibility
		if ( pev->flags & FL_GODMODE )
		{
			return 0;
		}
	}

	// if this is a player, move him around!
	if ( ( !FNullEnt( pevInflictor ) ) && (pev->movetype == MOVETYPE_WALK) && (!pevAttacker || pevAttacker->solid != SOLID_TRIGGER) && !(bitsDamageType & 0x4000000) )   // [OK] ESF: bit 0x4000000 = dano sem empurrão
	{
		pev->velocity = pev->velocity + vecDir * -DamageForce( flDamage );
	}

	// do the damage
	pev->health -= flTake;

	
	// HACKHACK Don't kill monsters in a script.  Let them break their scripts first
	if ( m_MonsterState == MONSTERSTATE_SCRIPT )
	{
		SetConditions( bits_COND_LIGHT_DAMAGE );
		return 0;
	}

	if ( pev->health <= 0 )
	{
		g_pevLastInflictor = pevInflictor;

		if ( bitsDamageType & DMG_ALWAYSGIB )
		{
			Killed( pevAttacker, GIB_ALWAYS );
		}
		else if ( bitsDamageType & DMG_NEVERGIB )
		{
			Killed( pevAttacker, GIB_NEVER );
		}
		else
		{
			Killed( pevAttacker, GIB_NORMAL );
		}

		g_pevLastInflictor = NULL;

		return 0;
	}

	// react to the damage (get mad)
	if ( (pev->flags & FL_MONSTER) && !FNullEnt(pevAttacker) )
	{
		if ( pevAttacker->flags & (FL_MONSTER | FL_CLIENT) )
		{// only if the attack was a monster or client!
			
			// enemy's last known position is somewhere down the vector that the attack came from.
			if (pevInflictor)
			{
				if (m_hEnemy == NULL || pevInflictor == m_hEnemy->pev || !HasConditions(bits_COND_SEE_ENEMY))
				{
					m_vecEnemyLKP = pevInflictor->origin;
				}
			}
			else
			{
				m_vecEnemyLKP = pev->origin + ( g_vecAttackDir * 64 ); 
			}

			MakeIdealYaw( m_vecEnemyLKP );

			// add pain to the conditions 
			// !!!HACKHACK - fudged for now. Do we want to have a virtual function to determine what is light and 
			// heavy damage per monster class?
			if ( flDamage > 0 )
			{
				SetConditions(bits_COND_LIGHT_DAMAGE);
			}

			if ( flDamage >= 20 )
			{
				SetConditions(bits_COND_HEAVY_DAMAGE);
			}
		}
	}

	return 1;
}

// CWorld::Precache = SDK com stepsize 8, sem sons extras, + modelos bodyparts. [OK] vs decomp 0x13a2e0
void CWorld :: Precache( void )
{
	g_pLastSpawn = NULL;
	
	CVAR_SET_STRING("sv_gravity", "800"); // 67ft/sec
	CVAR_SET_STRING("sv_stepsize", "8"  /* [OK] ESF: SDK usa 18 */);

	CVAR_SET_STRING("room_type", "0");// clear DSP

	// Set up game rules
	if (g_pGameRules)
	{
		delete g_pGameRules;
	}

	g_pGameRules = InstallGameRules( );

	//!!!UNDONE why is there so much Spawn code in the Precache function? I'll just keep it here 

	///!!!LATER - do we want a sound ent in deathmatch? (sjb)
	//pSoundEnt = CBaseEntity::Create( "soundent", g_vecZero, g_vecZero, edict() );
	pSoundEnt = GetClassPtr( ( CSoundEnt *)NULL );
	pSoundEnt->Spawn();

	if ( !pSoundEnt )
	{
		ALERT ( at_console, "**COULD NOT CREATE SOUNDENT**\n" );
	}

	InitBodyQue();
	
// init sentence group playback stuff from sentences.txt.
// ok to call this multiple times, calls after first are ignored.

	SENTENCEG_Init();

// init texture type array from materials.txt

	TEXTURETYPE_Init();


// the area based ambient sounds MUST be the first precache_sounds

// player precaches     
	W_Precache ();									// get weapon precaches

	ClientPrecache();

// sounds used from C physics code
	PRECACHE_SOUND("common/null.wav");				// clears sound channels


	
	g_Language = (int)CVAR_GET_FLOAT( "sv_language" );
	if ( g_Language == LANGUAGE_GERMAN )
	{
		PRECACHE_MODEL( "models/germangibs.mdl" );
	}
	else
	{
		PRECACHE_MODEL( "models/hgibs.mdl" );
		PRECACHE_MODEL( "models/agibs.mdl" );
	}

//
// Setup light animation tables. 'a' is total darkness, 'z' is maxbright.
//

	// 0 normal
	// [OK] ESF: cortes dos personagens (bodyparts)
	PRECACHE_MODEL( "models/bodyparts/cell/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/cell2/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/evilbuu/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/fatbuu/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/frieza/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/frieza2/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/gohan/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/goku/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/krillin/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/krillin2/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/piccolo/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/piccolo2/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/ssjgohan/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/ssjgoku/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/ssjtrunks/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/ssjvegeta/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/trunks/slice.mdl" );
	PRECACHE_MODEL( "models/bodyparts/vegeta/slice.mdl" );

	LIGHT_STYLE(0, "m");
	
	// 1 FLICKER (first variety)
	LIGHT_STYLE(1, "mmnmmommommnonmmonqnmmo");
	
	// 2 SLOW STRONG PULSE
	LIGHT_STYLE(2, "abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba");
	
	// 3 CANDLE (first variety)
	LIGHT_STYLE(3, "mmmmmaaaaammmmmaaaaaabcdefgabcdefg");
	
	// 4 FAST STROBE
	LIGHT_STYLE(4, "mamamamamama");
	
	// 5 GENTLE PULSE 1
	LIGHT_STYLE(5,"jklmnopqrstuvwxyzyxwvutsrqponmlkj");
	
	// 6 FLICKER (second variety)
	LIGHT_STYLE(6, "nmonqnmomnmomomno");
	
	// 7 CANDLE (second variety)
	LIGHT_STYLE(7, "mmmaaaabcdefgmmmmaaaammmaamm");
	
	// 8 CANDLE (third variety)
	LIGHT_STYLE(8, "mmmaaammmaaammmabcdefaaaammmmabcdefmmmaaaa");
	
	// 9 SLOW STROBE (fourth variety)
	LIGHT_STYLE(9, "aaaaaaaazzzzzzzz");
	
	// 10 FLUORESCENT FLICKER
	LIGHT_STYLE(10, "mmamammmmammamamaaamammma");

	// 11 SLOW PULSE NOT FADE TO BLACK
	LIGHT_STYLE(11, "abcdefghijklmnopqrrqponmlkjihgfedcba");
	
	// 12 UNDERWATER LIGHT MUTATION
	// this light only distorts the lightmap - no contribution
	// is made to the brightness of affected surfaces
	LIGHT_STYLE(12, "mmnnmmnnnmmnn");
	
	// styles 32-62 are assigned by the light program for switchable lights

	// 63 testing
	LIGHT_STYLE(63, "a");

	for ( int i = 0; i < ARRAYSIZE(gDecals); i++ )
		gDecals[i].index = DECAL_INDEX( gDecals[i].name );

// init the WorldGraph.
	WorldGraph.InitGraph();

// make sure the .NOD file is newer than the .BSP file.
	if ( !WorldGraph.CheckNODFile ( ( char * )STRING( gpGlobals->mapname ) ) )
	{// NOD file is not present, or is older than the BSP file.
		WorldGraph.AllocNodes ();
	}
	else
	{// Load the node graph for this level
		if ( !WorldGraph.FLoadGraph ( (char *)STRING( gpGlobals->mapname ) ) )
		{// couldn't load, so alloc and prepare to build a graph.
			ALERT ( at_console, "*Error opening .NOD file\n" );
			WorldGraph.AllocNodes ();
		}
		else
		{
			ALERT ( at_console, "\n*Graph Loaded!\n" );
		}
	}

	if ( pev->speed > 0 )
		CVAR_SET_FLOAT( "sv_zmax", pev->speed );
	else
		CVAR_SET_FLOAT( "sv_zmax", 4096 );

	if ( pev->netname )
	{
		ALERT( at_aiconsole, "Chapter title: %s\n", STRING(pev->netname) );
		CBaseEntity *pEntity = CBaseEntity::Create( "env_message", g_vecZero, g_vecZero, NULL );
		if ( pEntity )
		{
			pEntity->SetThink( &CBaseEntity::SUB_CallUseToggle );
			pEntity->pev->message = pev->netname;
			pev->netname = 0;
			pEntity->pev->nextthink = gpGlobals->time + 0.3;
			pEntity->pev->spawnflags = SF_MESSAGE_ONCE;
		}
	}

	if ( pev->spawnflags & SF_WORLD_DARK )
		CVAR_SET_FLOAT( "v_dark", 1.0 );
	else
		CVAR_SET_FLOAT( "v_dark", 0.0 );

	if ( pev->spawnflags & SF_WORLD_TITLE )
		gDisplayTitle = TRUE;		// display the game title if this key is set
	else
		gDisplayTitle = FALSE;

	if ( pev->spawnflags & SF_WORLD_FORCETEAM )
	{
		CVAR_SET_FLOAT( "mp_defaultteam", 1 );
	}
	else
	{
		CVAR_SET_FLOAT( "mp_defaultteam", 0 );
	}
}

// CBasePlayerAmmo::DefaultTouch = SDK sem o teste IsPlayerBusting (modo Busters removido). [OK] vs decomp 0x138f20
void CBasePlayerAmmo::DefaultTouch(CBaseEntity *pOther)
{
    if (!pOther->IsPlayer())
        return;

    if (AddAmmo(pOther))
    {
        if (g_pGameRules->AmmoShouldRespawn(this) == GR_AMMO_RESPAWN_YES)
        {
            Respawn();
        }
        else
        {
            SetTouch(NULL);
            SetThink(&CBasePlayerAmmo::SUB_Remove);
            pev->nextthink = gpGlobals->time + .1;
        }
    }
    else if (gEvilImpulse101)
    {
        SetTouch(NULL);
        SetThink(&CBasePlayerAmmo::SUB_Remove);
        pev->nextthink = gpGlobals->time + .1;
    }
}

// CBaseEntity::TraceBleed = SDK com máscara de dano 0x800045. [OK] vs decomp 0xa6dd0
void CBaseEntity :: TraceBleed( float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType )
{
	if (BloodColor() == DONT_BLEED)
		return;
	
	if (flDamage == 0)
		return;

	if (! (bitsDamageType & (DMG_CRUSH | DMG_SLASH | DMG_BLAST | DMG_MORTAR)   // [OK] ESF: máscara 0x800045 (sem BULLET/CLUB)))
		return;
	
	// make blood decal on the wall! 
	TraceResult Bloodtr;
	Vector vecTraceDir; 
	float flNoise;
	int cCount;
	int i;

/*
	if ( !IsAlive() )
	{
		// dealing with a dead monster. 
		if ( pev->max_health <= 0 )
		{
			// no blood decal for a monster that has already decalled its limit.
			return; 
		}
		else
		{
			pev->max_health--;
		}
	}
*/

	if (flDamage < 10)
	{
		flNoise = 0.1;
		cCount = 1;
	}
	else if (flDamage < 25)
	{
		flNoise = 0.2;
		cCount = 2;
	}
	else
	{
		flNoise = 0.3;
		cCount = 4;
	}

	for ( i = 0 ; i < cCount ; i++ )
	{
		vecTraceDir = vecDir * -1;// trace in the opposite direction the shot came from (the direction the shot is going)

		vecTraceDir.x += RANDOM_FLOAT( -flNoise, flNoise );
		vecTraceDir.y += RANDOM_FLOAT( -flNoise, flNoise );
		vecTraceDir.z += RANDOM_FLOAT( -flNoise, flNoise );

		UTIL_TraceLine( ptr->vecEndPos, ptr->vecEndPos + vecTraceDir * -172, ignore_monsters, ENT(pev), &Bloodtr);

		if ( Bloodtr.flFraction != 1.0 )
		{
			UTIL_BloodDecalTrace( &Bloodtr, BloodColor() );
		}
	}
}
