// sdk/lights.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/lights.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"

// [SDK score 1.0] CLight::KeyValue
void CLight :: KeyValue( KeyValueData* pkvd)
{
	if (FStrEq(pkvd->szKeyName, "style"))
	{
		m_iStyle = atoi(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "pitch"))
	{
		pev->angles.x = atof(pkvd->szValue);
		pkvd->fHandled = TRUE;
	}
	else if (FStrEq(pkvd->szKeyName, "pattern"))
	{
		m_iszPattern = ALLOC_STRING( pkvd->szValue );
		pkvd->fHandled = TRUE;
	}
	else
	{
		CPointEntity::KeyValue( pkvd );
	}
}

// [SDK score 1.0] CLight::Spawn
void CLight :: Spawn( void )
{
	if (FStringNull(pev->targetname))
	{       // inert light
		REMOVE_ENTITY(ENT(pev));
		return;
	}
	
	if (m_iStyle >= 32)
	{
//		CHANGE_METHOD(ENT(pev), em_use, light_use);
		if (FBitSet(pev->spawnflags, SF_LIGHT_START_OFF))
			LIGHT_STYLE(m_iStyle, "a");
		else if (m_iszPattern)
			LIGHT_STYLE(m_iStyle, (char *)STRING( m_iszPattern ));
		else
			LIGHT_STYLE(m_iStyle, "m");
	}
}

// [SDK score 1.0] CLight::Use
void CLight :: Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value )
{
	if (m_iStyle >= 32)
	{
		if ( !ShouldToggle( useType, !FBitSet(pev->spawnflags, SF_LIGHT_START_OFF) ) )
			return;

		if (FBitSet(pev->spawnflags, SF_LIGHT_START_OFF))
		{
			if (m_iszPattern)
				LIGHT_STYLE(m_iStyle, (char *)STRING( m_iszPattern ));
			else
				LIGHT_STYLE(m_iStyle, "m");
			ClearBits(pev->spawnflags, SF_LIGHT_START_OFF);
		}
		else
		{
			LIGHT_STYLE(m_iStyle, "a");
			SetBits(pev->spawnflags, SF_LIGHT_START_OFF);
		}
	}
}

// [SDK score 0.9] CEnvLight::KeyValue
void CEnvLight::KeyValue( KeyValueData* pkvd )
{
	if (FStrEq(pkvd->szKeyName, "_light"))
	{
		int r, g, b, v, j;
		char szColor[64];
		j = sscanf( pkvd->szValue, "%d %d %d %d\n", &r, &g, &b, &v );
		if (j == 1)
		{
			g = b = r;
		}
		else if (j == 4)
		{
			r = r * (v / 255.0);
			g = g * (v / 255.0);
			b = b * (v / 255.0);
		}

		// simulate qrad direct, ambient,and gamma adjustments, as well as engine scaling
		r = pow( r / 114.0, 0.6 ) * 264;
		g = pow( g / 114.0, 0.6 ) * 264;
		b = pow( b / 114.0, 0.6 ) * 264;

		pkvd->fHandled = TRUE;
		sprintf( szColor, "%d", r );
		CVAR_SET_STRING( "sv_skycolor_r", szColor );
		sprintf( szColor, "%d", g );
		CVAR_SET_STRING( "sv_skycolor_g", szColor );
		sprintf( szColor, "%d", b );
		CVAR_SET_STRING( "sv_skycolor_b", szColor );
	}
	else
	{
		CLight::KeyValue( pkvd );
	}
}

// [SDK score 1.0] CEnvLight::Spawn
void CEnvLight :: Spawn( void )
{
	char szVector[64];
	UTIL_MakeAimVectors( pev->angles );

	sprintf( szVector, "%f", gpGlobals->v_forward.x );
	CVAR_SET_STRING( "sv_skyvec_x", szVector );
	sprintf( szVector, "%f", gpGlobals->v_forward.y );
	CVAR_SET_STRING( "sv_skyvec_y", szVector );
	sprintf( szVector, "%f", gpGlobals->v_forward.z );
	CVAR_SET_STRING( "sv_skyvec_z", szVector );

	CLight::Spawn( );
}
