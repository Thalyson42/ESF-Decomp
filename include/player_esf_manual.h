// Membros de CBasePlayer usados pelo código recuperado, escritos à mão (tipos [?] deduzidos do uso).
#pragma once
#include "swoop.h"
#define ESF_PLAYER_EXTRA \
    float f_370; int f_6cc; int f_768; int f_580; int f_6c4; float f_798; float f_3cc, f_3d0, f_3d4, f_3a0; \
    void GetWallJumpAnim(char *szPrefix, Vector vecDir, char *szOut); void GetWallJumpAnim(char *szGrab, char *szOut); void ResetWallJumpVars(void); void ChangeClass(const char *szClass); void StopSpectator(void); void StartSpectator(Vector vecPos, Vector vecAng); void Spectator_FindNextPlayer(bool bReverse); void StopObserving(void); int GetUpperBodyAnimation(int &iFrame); int GetLowerBodyAnimation(void); int PlayFullBodyAnimation(void); void RemoveAnimationTriggers(void); BOOL CanPlayForwardWalk(void); int GetAuraDirection(void); void EnableWallJump(Vector vecWall); void DisableWallJump(void); /* [?] +0x370 mult de PL, +0x6cc estado, +0x768 proxima forma */ \
    int f_76c;                                  /* [?] +0x76c (aura/carregando) */ \
    CSwoop m_Swoop;                             /* [OK] +0x504 */ \
    void  RemoveSpecialModes(void); void OnDeathAnim(void); void StopAniTrigger(int iTrigger); \
    void Teleport(void);        /* [?] declaracao so para o bot (decomp_raw/CBasePlayer/Teleport) */ \
    void StartPowerUp(void);    /* [?] idem */ \
    void StartBlock(void); void StopAscending(void); void TransformFX(float f); void SetBodyPart(float flTime, int iBody); void AddClientAfterFX(void); \
    void  StopPowerUp(void); void RemoveWallJump(void); BOOL CanMelee(CBasePlayer *pOther); \
    void  Spectator_SetMode(int iMode); void StartObserving(void); int GetPotentialPL(void); \
    BOOL CanFly(void); void Swoop(void); void CheckWallJump(void); void CheckSubModelStatus(void); void ReleaseCandy(void); \
    void  RemoveAllWeapons(int iFlag); void Descend(int iFlag); void Ascend(void); \
    void  StopTurbo(void); void StartTurbo(void); int MakeCandy(const char *szName); void StartAscend(void); void StopBlock(void); void UpdateOldPositions(void); void Spectator_HandleButtons(void); \
    virtual void UpdateClientData_Hook(void);   /* [?] vtable +0x204 (slot 127) */ \
    void  PlayAnimation(void);                  /* [OK] ESF: no lugar de SetAnimation(PLAYER_WALK) */ \
    void  CheckPowerups(entvars_t *pevVictim);  /* [?] assinatura */ \
    void  ForceCorrectModels(void);             /* [OK] */ \
    void  WaitToBecomeCandy(CBasePlayer *pAttacker); /* [OK] Buu */ \
    float m_iRespawnFrames;                     /* [OK] +0x988 (float) */ \
    Vector m_vecSavedAngles;                    /* [?] +0x7a0 */ \
    int   m_iSensuBeans;                        /* [OK] +0x75c feijoes Sensu (max 5) */ \
    CBasePlayer *m_pCandyTarget;                /* [OK] +0x728 vitima que o Buu vai transformar */ \
    float m_flCandyTime;                        /* [OK] +0x72c */ \
    int   m_fStrangled;                         /* [OK] +0x360 estrangulado pelo CBodyPartAttack */ \
    int   m_fWaitingCandy;                      /* [OK] +0x364 esperando virar doce */ \
    BOOL  GiveBean(int iAmount); BOOL TakeBean(void); int BecomeCandy(const char *szName, CBaseEntity *pBuu); \
    EHANDLE m_hTrain;                           /* [?] +0x108 */ \
    struct esf_botinfo_s *m_pBotInfo;           /* [?] +0xa04 -> +0x1a = m_iTauntChance */ \
    CBasePlayer *m_pLastKiller;                 /* [?] +0xd50 */
// globais ESF usados por player.cpp
#ifndef ESF_GLOBALS_H
#define ESF_GLOBALS_H
#define DRC_CMD_EVENT 3                 // [?]
struct esf_botinfo_s { char pad[0x1a]; short m_iTauntChance; };   // [?]
extern cvar_t simplemelee, forcerespawn;
#ifndef ESF_BODYSLICE_FULL
class CBodySlice { public: static void SpawnBodySlices(entvars_t *pev, bool bFlyOff); };   // [OK] assinatura (bodyslice.h tem a classe completa)
#endif
#include "CChatClass.h"
extern CChatClass ChatClass;                   // [OK] objeto global do chat dos bots
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
class CFog : public CBaseEntity    // env_fog do ESF
{
public:
    int   m_iR, m_iG, m_iB;   // +0x64/68/6c [OK] KeyValue m_iColorR/G/B
    float m_flFar;            // +0x70 [OK] KeyValue m_flFar
    float m_flNear;           // +0x74 [OK] KeyValue m_flNear
    void Spawn(void);
    void KeyValue(KeyValueData *pkvd);
};
#endif
