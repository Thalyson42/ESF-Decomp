// Membros de CBasePlayer usados pelo código recuperado, escritos à mão (tipos [?] deduzidos do uso).
#pragma once
#include "swoop.h"
#define ESF_PLAYER_EXTRA \
    CSwoop m_Swoop;                             /* [OK] +0x504 */ \
    void  RemoveSpecialModes(void); void OnDeathAnim(void); \
    void  StopPowerUp(void); void RemoveWallJump(void); BOOL CanMelee(CBasePlayer *pOther); \
    void  Spectator_SetMode(int iMode); void StartObserving(void); int GetPotentialPL(void); \
    void  Swoop(void); void CheckWallJump(void); void CheckSubModelStatus(void); void ReleaseCandy(void); \
    void  RemoveAllWeapons(int iFlag); void Descend(int iFlag); void Ascend(void); \
    void  StopTurbo(void); void StopBlock(void); void UpdateOldPositions(void); void Spectator_HandleButtons(void); \
    virtual void UpdateClientData_Hook(void);   /* [?] vtable +0x204 (slot 127) */ \
    void  PlayAnimation(void);                  /* [OK] ESF: no lugar de SetAnimation(PLAYER_WALK) */ \
    void  CheckPowerups(entvars_t *pevVictim);  /* [?] assinatura */ \
    void  ForceCorrectModels(void);             /* [OK] */ \
    void  WaitToBecomeCandy(CBasePlayer *pAttacker); /* [OK] Buu */ \
    float m_iRespawnFrames;                     /* [OK] +0x988 (float) */ \
    Vector m_vecSavedAngles;                    /* [?] +0x7a0 */ \
    int   m_iPowerLevelDrop;                    /* [?] +0x75c */ \
    EHANDLE m_hTrain;                           /* [?] +0x108 */ \
    struct esf_botinfo_s *m_pBotInfo;           /* [?] +0xa04 -> +0x1a = m_iTauntChance */ \
    CBasePlayer *m_pLastKiller;                 /* [?] +0xd50 */
// globais ESF usados por player.cpp
#ifndef ESF_GLOBALS_H
#define ESF_GLOBALS_H
#define DRC_CMD_EVENT 3                 // [?]
struct esf_botinfo_s { char pad[0x1a]; short m_iTauntChance; };   // [?]
extern cvar_t simplemelee, forcerespawn;
class CBodySlice { public: static void SpawnBodySlices(entvars_t *pev, int iFlag); };   // [?] assinatura
class CBotChat { public: void LetBotTaunt(CBasePlayer *pKiller, CBasePlayer *pVictim); };
extern CBotChat ChatClass;
#endif
// usados por playermelee.cpp (assinaturas [?], só para compilar a sintaxe)
#ifndef ESF_MELEE_GLOBALS_H
#define ESF_MELEE_GLOBALS_H
void UTIL_Model_RemoveAll(int iPlayer);
void UTIL_Model_Grab(...);
void UTIL_Model_MeleeStruggle(...);
void UTIL_Model_MotionBlur(...);
#define ANIM_LOW 3   // [?]
void GetSequenceInfo(void *pmodel, entvars_t *pev, float *pflFrameRate, float *pflGroundSpeed);
void UTIL_Model_Connect(...);
void UTIL_Model_FixAngles(...);
void UTIL_Model_MeleeStruggle_Anglefix(...);
extern unsigned short m_usMeleeSounds;

#endif
#ifndef DMG_PREVENT_PHYSICS_FORCE
#define DMG_PREVENT_PHYSICS_FORCE (1<<31)   // [?]
#endif
// usados por gamerules_esf.cpp
#ifndef ESF_GAMERULES_GLOBALS_H
#define ESF_GAMERULES_GLOBALS_H
extern int g_teamplay;                         // [?] ESF mantém "teamplay" em variável própria
extern entvars_t *g_pevLastInflictor;          // [?] último causador de dano
extern cvar_t allowspectator, characterlimit, plcatchup;
extern int gmsgSpectator, gmsgAllowSpec, gmsgVGUIMenu, gmsgScoreInfo, gmsgFog, gmsgTeamInfo, gmsgTeamNames, gmsgPowerLevel;
class CFog : public CBaseEntity { public: int m_iR, m_iG, m_iB; float m_flStart, m_flEnd; };   // [?] env_fog do ESF
#endif
