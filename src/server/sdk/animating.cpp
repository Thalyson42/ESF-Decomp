// sdk/animating.cpp -- funções do HL SDK que o hl_i386.so do ESF reproduz (score de similaridade >= 0.86 em docs/sdk_match.csv).
// Gerado por tools/assemble_sdk.py a partir de <hlsdk>/dlls/animating.cpp. Conferir contra decomp_raw ao compilar.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "animation.h"
#include "saverestore.h"

// [SDK score 1.0] CBaseAnimating::LookupActivity
int CBaseAnimating :: LookupActivity ( int activity )
{
	ASSERT( activity != 0 );
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	return ::LookupActivity( pmodel, pev, activity );
}

// [SDK score 1.0] CBaseAnimating::LookupActivityHeaviest
int CBaseAnimating :: LookupActivityHeaviest ( int activity )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	return ::LookupActivityHeaviest( pmodel, pev, activity );
}

// [SDK score 1.0] CBaseAnimating::LookupSequence
int CBaseAnimating :: LookupSequence ( const char *label )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	return ::LookupSequence( pmodel, label );
}

// [SDK score 1.0] CBaseAnimating::ResetSequenceInfo
void CBaseAnimating :: ResetSequenceInfo ( )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	GetSequenceInfo( pmodel, pev, &m_flFrameRate, &m_flGroundSpeed );
	m_fSequenceLoops = ((GetSequenceFlags() & STUDIO_LOOPING) != 0);
	pev->animtime = gpGlobals->time;
	pev->framerate = 1.0;
	m_fSequenceFinished = FALSE;
	m_flLastEventCheck = gpGlobals->time;
}

// [SDK score 1.0] CBaseAnimating::GetSequenceFlags
BOOL CBaseAnimating :: GetSequenceFlags( )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	return ::GetSequenceFlags( pmodel, pev );
}

// [SDK score 1.0] CBaseAnimating::SetBoneController
float CBaseAnimating :: SetBoneController ( int iController, float flValue )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	return SetController( pmodel, pev, iController, flValue );
}

// [SDK score 1.0] CBaseAnimating::InitBoneControllers
void CBaseAnimating :: InitBoneControllers ( void )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	SetController( pmodel, pev, 0, 0.0 );
	SetController( pmodel, pev, 1, 0.0 );
	SetController( pmodel, pev, 2, 0.0 );
	SetController( pmodel, pev, 3, 0.0 );
}

// [SDK score 1.0] CBaseAnimating::SetBlending
float CBaseAnimating :: SetBlending ( int iBlender, float flValue )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );

	return ::SetBlending( pmodel, pev, iBlender, flValue );
}

// [SDK score 1.0] CBaseAnimating::GetBonePosition
void CBaseAnimating :: GetBonePosition ( int iBone, Vector &origin, Vector &angles )
{
	GET_BONE_POSITION( ENT(pev), iBone, origin, angles );
}

// [SDK score 1.0] CBaseAnimating::GetAttachment
void CBaseAnimating :: GetAttachment ( int iAttachment, Vector &origin, Vector &angles )
{
	GET_ATTACHMENT( ENT(pev), iAttachment, origin, angles );
}

// [SDK score 1.0] CBaseAnimating::FindTransition
int CBaseAnimating :: FindTransition( int iEndingSequence, int iGoalSequence, int *piDir )
{
	void *pmodel = GET_MODEL_PTR( ENT(pev) );
	
	if (piDir == NULL)
	{
		int iDir;
		int sequence = ::FindTransition( pmodel, iEndingSequence, iGoalSequence, &iDir );
		if (iDir != 1)
			return -1;
		else
			return sequence;
	}

	return ::FindTransition( pmodel, iEndingSequence, iGoalSequence, piDir );
}

// [SDK score 1.0] CBaseAnimating::GetAutomovement
void CBaseAnimating :: GetAutomovement( Vector &origin, Vector &angles, float flInterval )
{

}

// [SDK score 1.0] CBaseAnimating::SetBodygroup
void CBaseAnimating :: SetBodygroup( int iGroup, int iValue )
{
	::SetBodygroup( GET_MODEL_PTR( ENT(pev) ), pev, iGroup, iValue );
}

// [SDK score 1.0] CBaseAnimating::GetBodygroup
int CBaseAnimating :: GetBodygroup( int iGroup )
{
	return ::GetBodygroup( GET_MODEL_PTR( ENT(pev) ), pev, iGroup );
}

// [SDK score 1.0] CBaseAnimating::ExtractBbox
int CBaseAnimating :: ExtractBbox( int sequence, float *mins, float *maxs )
{
	return ::ExtractBbox( GET_MODEL_PTR( ENT(pev) ), sequence, mins, maxs );
}
