// sdk/plane.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/plane.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "plane.h"

// [SDK score 1.0] CPlane::InitializePlane
void CPlane :: InitializePlane ( const Vector &vecNormal, const Vector &vecPoint )
{
	m_vecNormal = vecNormal;
	m_flDist = DotProduct ( m_vecNormal, vecPoint );
	m_fInitialized = TRUE;
}

// [SDK score 1.0] CPlane::PointInFront
BOOL CPlane :: PointInFront ( const Vector &vecPoint )
{
	float flFace;

	if ( !m_fInitialized )
	{
		return FALSE;
	}

	flFace = DotProduct ( m_vecNormal, vecPoint ) - m_flDist;

	if ( flFace >= 0 )
	{
		return TRUE;
	}

	return FALSE;
}
