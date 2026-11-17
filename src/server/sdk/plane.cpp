// sdk/plane.cpp -- arquivo do HL SDK com SÓ as funções que o hl_i386.so do ESF reproduz (score >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/plane.cpp. As demais funções do arquivo foram removidas.
/***
*
*	Copyright (c) 1996-2001, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/
#include "extdll.h"
#include "plane.h"

// [fora desta etapa: diferente do SDK ou definida em outro arquivo] //========================================================= // Plane //===================

// [SDK score 1.0] CPlane::InitializePlane
//=========================================================
// InitializePlane - Takes a normal for the plane and a
// point on the plane and 
//=========================================================
void CPlane :: InitializePlane ( const Vector &vecNormal, const Vector &vecPoint )
{
	m_vecNormal = vecNormal;
	m_flDist = DotProduct ( m_vecNormal, vecPoint );
	m_fInitialized = TRUE;
}


// [SDK score 1.0] CPlane::PointInFront
//=========================================================
// PointInFront - determines whether the given vector is 
// in front of the plane. 
//=========================================================
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

