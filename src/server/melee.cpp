// melee.cpp -- CMelee 10/10 e CSword 6/6. [OK] = conferido no decomp. SecondaryAttack usa campos do player por offset cru.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "gamerules.h"
#include "weapons.h"
#include "player.h"
#include "player_esf_manual.h"
#include "playermelee.h"
#include "swoop.h"
#include "melee.h"

extern float meleeallowed;                       // [OK] cvar/flag global: CanDeploy testa meleeallowed.value != 0
#define MP(p,type,off) (*(type *)((char *)(p) + (off)))

void CMelee::Spawn(void)
{
    Precache();                                   // [OK] vtable slot 1
    m_iId = 1;
    m_iDefaultAmmo = 0;                           // [OK] +0xc0
    m_iClip = -1;                                 // [OK] +0xb0
    FallInit();
}

void CMelee::Precache(void)
{
    PRECACHE_SOUND("weapons/swoophit.wav");   PRECACHE_SOUND("weapons/meleeflash.wav");
    PRECACHE_SOUND("weapons/prepunch1.wav");  PRECACHE_SOUND("weapons/weakpunch.wav");
    PRECACHE_SOUND("weapons/mediumpunch.wav"); PRECACHE_SOUND("weapons/strongpunch.wav");
    PRECACHE_SOUND("weapons/weakkick.wav");   PRECACHE_SOUND("weapons/mediumkick.wav");
    PRECACHE_SOUND("weapons/strongkick.wav"); PRECACHE_SOUND("weapons/meleemiss1.wav");
    PRECACHE_SOUND("weapons/meleemiss2.wav"); PRECACHE_SOUND("weapons/meleemiss3.wav");
    PRECACHE_SOUND("weapons/chainswoop.wav"); PRECACHE_SOUND("weapons/throw.wav");
    PRECACHE_SOUND("weapons/spin.wav");       PRECACHE_SOUND("weapons/meleestruggleinit.wav");
    PRECACHE_SOUND("weapons/meleestruggletie.wav"); PRECACHE_SOUND("weapons/swordkill.wav");
    PRECACHE_SOUND("weapons/recoverjump.wav");
}

int CMelee::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 0; p->iPosition = 1;
    m_iId = p->iId = 1;
    p->iFlags = 0; p->iWeight = 25;               // [OK] a1[10] = 25
    return 1;
}

BOOL CMelee::CanDeploy(void) { return meleeallowed != 0.0f; }   // [OK]
BOOL CMelee::Deploy(void)    { return DefaultDeploy("melee", "", 0, ""); }

void CMelee::PrimaryAttack(void)
{
    m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + 0.1;   // [OK] +0x9c
}

void CMelee::SecondaryAttack(void)
{
    float flDelay;
    CBasePlayer *pMe = m_pPlayer;
    CPlayerMelee *pMelee = (CPlayerMelee *)((char *)pMe + 0x380);
    if (MP(pMe, int, 0x400))                      // [?] modo do melee (campo +0x80 do CPlayerMelee)
    {
        CBasePlayer *pEnemy = pMelee->GetEnemyPrepunch(NULL);
        if (pEnemy && pMe->CanMelee(pEnemy) && pMe->UseKi(35))
        {
            Vector vecDir = ((CSwoop *)((char *)pMe + 0x504))->GetCurrentDirection();   // [?]
            pMelee->SimpleMeleePowerhit(pEnemy, vecDir, MP(pMe, int, 0x504));
            flDelay = 0.9f;                       // [OK]
        }
        else
            flDelay = 0.1f;
    }
    else
    {
        int bHit = 0;
        CBasePlayer *pEnemy = pMelee->GetEnemyPrepunch(NULL);
        if (pEnemy && pMe->CanMelee(pEnemy))
        {
            CPlayerMelee *pEM = (CPlayerMelee *)((char *)pEnemy + 0x380);
            CBasePlayerItem *pActive = MP(pEnemy, CBasePlayerItem *, 0x968);   // [?] arma ativa do inimigo
            if (MP(pEnemy, int, 0x508) && pEM->GetEnemyPrepunch(NULL) == pMe && pActive &&
                (unsigned)(pActive->m_iId - 1) <= 1)                           // [OK] inimigo com melee/espada na mao
            {
                if (pEM->GetEnemyPrepunch(pMe)) { pEnemy->Swoop(); return; }
            }
            else if (MP(pEnemy, int, 0x380) <= 1 && pMe->UseKi(35))            // [?] modo <= 1
            {
                Vector vecDir = ((CSwoop *)((char *)pMe + 0x504))->GetCurrentDirection();   // [?]
                bHit = pMelee->Powerhit(pEnemy, vecDir, MP(pMe, int, 0x504));
            }
            flDelay = bHit ? 0.9f : 0.65f;        // [OK]
        }
        else
            flDelay = 0.1f;
    }
    m_flNextSecondaryAttack = m_flNextPrimaryAttack = UTIL_WeaponTimeBase() + flDelay;   // [OK] +0xa0 e +0x9c
}

// ---------- CSword ----------
void CSword::Spawn(void)
{
    CMelee::Spawn();
    m_iId = 2;
    FallInit();
}
void CSword::Precache(void)
{
    CMelee::Precache();
    PRECACHE_SOUND("weapons/swordhit.wav");
}
int CSword::GetItemInfo(ItemInfo *p)
{
    p->pszName = STRING(pev->classname);
    p->pszAmmo1 = "ki"; p->iMaxAmmo1 = -1; p->pszAmmo2 = NULL; p->iMaxAmmo2 = -1; p->iMaxClip = -1;
    p->iSlot = 0; p->iPosition = 1;
    m_iId = p->iId = 2;
    p->iFlags = 0; p->iWeight = 25;
    return 1;
}
BOOL CSword::Deploy(void)          { return DefaultDeploy("sword", "", 0, ""); }
void CSword::Holster(int skiplocal) { CMelee::Holster(0); }
