// playermelee.h -- CPlayerMelee: o sistema "advanced melee" do ESF (prepunch, combos, grab, toss, struggle).
// RECUPERADO À MÃO. Um CPlayerMelee fica embutido em cada CBasePlayer em +0x380 (896) [OK].
// Os nomes dos campos vêm da leitura do uso nas 201 funções; `[?]` = nome incerto. Campos sem nome: f_XXX.
// Declarações geradas por tools/gen_class_header.py a partir dos símbolos (tipos de retorno = int provisório).
#pragma once

enum ADV_MELEE_STATUS {                        // [OK] valores confirmados por SetMode/ManageMelee
    MELEE_NONE = 0,
    MELEE_PREPUNCH_ATTACK = 1, MELEE_PREPUNCH_DEFEND = 2,
    MELEE_CHARGE_ATTACK = 3,   MELEE_CHARGE_DEFEND = 4,
    MELEE_GRAB_ATTACK = 5,     MELEE_GRAB_DEFEND = 6,
    MELEE_EXE_ATTACK = 7,      MELEE_EXE_DEFEND = 8,
    MELEE_STRUGGLE_ATTACK = 9, MELEE_BURST_STRUGGLE_ATTACK = 10, MELEE_STRUGGLE_DEFEND = 11,
    MELEE_KNOCK_PRESTRUGGLE_ATTACK = 12, MELEE_KNOCK_PRESTRUGGLE_DEFEND = 13   // [?] nome do 13
};
enum MELEE_THROW_STATE {                        // [OK] m_iThrowState (+0x64), despachado por ManageToss
    THROW_NONE = 0, THROW_TOSS = 1, THROW_ROLL = 2, THROW_WALLSTICK = 3, THROW_LAY = 4, THROW_LANDRECOVER = 5, THROW_RECOVER = 6
};
enum MELEE_DIR { DIR_FORWARD = 0, DIR_FWD_LEFT, DIR_LEFT, DIR_BACK_LEFT, DIR_BACK, DIR_BACK_RIGHT, DIR_RIGHT, DIR_FWD_RIGHT,   // 0-7 = golpe, 8-15 = o mesmo com alt, 16 = só ataque, 17 = só alt
                 DIR_ATTACK_ONLY = 16, DIR_ALT_ONLY = 17 };
enum MELEE_STRENGTH { MELEE_WEAK = 0, MELEE_MEDIUM = 1, MELEE_STRONG = 2 };    // [OK] GetMeleeStrength
enum MELEE_COMBO_STATUS { COMBO_STATUS_NONE = 0 };                                         // [?] valores desconhecidos (só 0 visto)
enum ANIM_PRIORITY { ANIM_PRIORITY_MEDIUM = 1, ANIM_PRIORITY_MEDIUM_PLUS = 2, ANIM_PRIORITY_LOW = 3 };   // [?] nomes
struct melee_combo_hit_s;

struct melee_move_s {                           // nó de direção/golpe (0x24 bytes) [OK] AddDirection
    int   m_iIndex;                             // +0x00 contador crescente (m_iAttackerCount/m_iDefenderCount)
    int   m_iDirection;                         // +0x04 flags: 1 atk, 8 frente, 0x10 trás, 0x80 esq, 0x100 dir, 0x800 alt
    float m_flStart;                            // +0x08
    float m_flEnd;                              // +0x0c   (duração = end - start)
    int   m_fReleased;                          // +0x10   LetGoDirection
    int   f_14, f_18;
    melee_move_s *m_pNext;                      // +0x1c
    melee_move_s *m_pPrev;                      // +0x20 [?] (AddDirection grava +0x18, RemoveDir +0x20)
};

struct plrmelee_anim_s {                        // animação enfileirada (0x2a8 bytes), lista ligada em CPlayerMelee+0x84
    char  m_szName[16][32];                     // +0x000 até 16 nomes de sequência [OK] AddToCurAnim
    int   m_iSeqType[16];                       // +0x200 [?] 107/108/109 alternados por nome (tipo de sequência)
    char  f_240[0x40];
    int   m_iPriority;                          // +0x280 [OK] ANIM_PRIORITY (1 med, 2 med+, 3 baixa)
    int   m_iNumNames;                          // +0x284 [OK]
    int   f_288;
    float m_flEndTime;                          // +0x28c [OK] expira quando < gpGlobals->time
    int   m_iFlag;                              // +0x290 [OK] AddToCurAnim(bool,...)
    int   m_fExeAnim;                           // +0x294 [OK] animação de combo exe (GetCurrentExeAnim)
    int   m_fModelAnim;                         // +0x298 [OK] usou UTIL_Model_* (limpar ao remover)
    int   m_fExpire;                            // +0x29c [OK] remover quando não for a atual
    int   m_iGroundFlag;                        // +0x2a0 [OK] comparado com pev->flags & FL_ONGROUND (0x200)
    plrmelee_anim_s *m_pNext;                   // +0x2a4 [OK]
};

struct melee_execution_s;                       // combo ("exe"): +0x24 id, +0x4c estado, +0x358 next, +0x35c prev

class CBasePlayer;

class CPlayerMelee
{
public:
    plrmelee_anim_s * AddAnimationAFix(Vector vecDir, bool bFlag, float flEnd, const char *szName);
    plrmelee_anim_s * AddAnimationExe(float flEnd, char *szName);
    plrmelee_anim_s * AddAnimation(bool bFlag, float flEndTime, int iNames, ...);
    void AddComboMoves(void);
    melee_execution_s * AddCombo(melee_execution_s *pAfter, int iId);
    void AddDirection(int iFlags);
    int AddExeCombo(melee_execution_s*, float, float, void**);
    melee_execution_s * AddExeMove(melee_execution_s *p);
    void AddMove(int iIdx, int iType, int iCount, ...);
    void AddToCurAnim(bool bFlag, char *szName);
    void ApplyVelocity(void);
    int Block(int iAttackDir, int iDefendDir);
    int BlocksAttack(CBasePlayer *pPlayer);
    void BlowbackStruggle(Vector vecDir, float flA, float flB, CBasePlayer *pOther);
    int CanAddDirection(void);
    int CanEXECombo(melee_execution_s *p);
    int CanInflictDamage(CBasePlayer *pPlayer, int bitsDamage);
    int CanLetGo(melee_move_s *pMove);
    int CanPlayAnimation(void);
    int CanRetaliate(void);
    int CanSwitch(void);
    int CanThrow(int iDist, Vector &vecOut);
    int CanUseTrunksSword(CBasePlayer *pVictim);
    void CheckCreater(void);
    int CheckForObsticales(void);
    int CheckStruggleArrows(void);
    void CheckStunTime(void);
    int ContinueBlockStun(int &iAmt, MELEE_STRENGTH cur, MELEE_STRENGTH next);
    int CopyMoveToExe(void);
    melee_execution_s * CreateExeMove(int a, int b, float f, int c, MELEE_COMBO_STATUS status, MELEE_STRENGTH strength, char *szName);
    int DeaccelerateToss(void);
    void DelAllDirectionsAttacker(void);
    void DelAllDirectionsDefender(void);
    int DelAllDirections(void);
    int DirectionsToFlags(int iDir);
    int EmitClientSound(edict_t *pent, int a, int b);
    int EmitComboDamage(melee_combo_hit_s *pHit);
    int EmitDamage(void);
    int EmitExeSound(edict_t *pent);
    void EmitExplosionRocks(Vector vecPos, Vector vecVel, float flSize, int iRandom, int iCount);
    void EmitShockwave(void);
    void ExecuteCombo(void);
    int FlagsToDirections(int iFlags);
    void GetAnimForCombo(int iCombo, char *szOut);
    void GetAnimForMove(melee_move_s *pMove, char *szOut);
    int GetAnimForMove(int, MELEE_STRENGTH, char*);
    melee_move_s * GetAttackerMoves(void);
    CBasePlayer * GetAttackerOther(void);
    CBasePlayer * GetAttacker(void);
    float GetBlockRatio(int a, int b);
    int GetBlockStunAmt(MELEE_STRENGTH s);
    float GetCmbTime(melee_move_s *pMove);
    plrmelee_anim_s * GetCurrentAnim(void);
    melee_move_s * GetCurrentDirection(void);
    plrmelee_anim_s * GetCurrentExeAnim(void);
    float GetDamageDelay(melee_move_s *pMove);
    float GetDamage(void);
    melee_move_s * GetDefenderMoves(void);
    CBasePlayer * GetDefender(void);
    float GetDmgPerPunch(void);
    CBasePlayer * GetEnemyPrepunch(CBasePlayer *pPrefer);
    int GetMeleeStrength(float flTime);
    int GetMeleeStrength(melee_move_s *pMove);
    int GetMoveCountFinishedOnly(void);
    int GetMoveCountFinishedOnly(melee_move_s*);
    int GetMoveCount(void);
    int GetMoveCount(melee_move_s *pMove);
    int GetMoveStrength(melee_move_s *pMove);
    int GetNextExe(void);
    CBasePlayer * GetOrigDefender(void);
    float GetPowerRatio(CBasePlayer *pOther);
    int GetSkillValues(void);
    edict_t * GetSoundEdict(void);
    float GetStunPerPunch(void);
    float GetStunTime(void);
    int GetThrowActivity(void);
    void GetThrowAnimDirection(int iDir, char *szOut);
    void GetThrowAnimDirection(int iUnused, int iDir, char *szOut);
    int GetThrowDirection(int bAllowVertical);
    int HandleBurstStruggleAttack(void);
    void HandleChargeAttack(void);
    void HandleChargeDefend(void);
    int HandleDelayedBlock(melee_move_s *pA, melee_move_s *pB);
    int HandleExeAttack(void);
    void HandleExeDefend(void);
    void HandleGrabAttack(void);
    void HandleGrabDefend(void);
    void HandleKnockPreStruggleAttack(void);
    void HandleLandRecover(void);
    void HandleLay(void);
    void HandlePrepunchAttack(void);
    void HandlePrepunchDefend(void);
    int HandleRecover(void);
    void HandleRoll(void);
    int HandleStruggleAttack(void);
    int HandleStruggleDefend(void);
    void HandleToss(void);
    void HandleWallStick(void);
    int HoldDirection(melee_move_s *pMove);
    int InAdvMeleeBattle(void);
    int InThrow(void);
    int InflictWallhitDmg(int bHalf);
    int InitMelee(CBasePlayer *pDefenderPlr);
    int IsAttacker(void);
    int IsDefender(void);
    int IsDirectionless(int iFlags);
    void LandRecoverDash(void);
    int LetGoDirection(melee_move_s *pMove);
    void MakeCreater(void);
    int ManageInvulnerability(void);
    void ManageList(void);
    void ManageMelee(void);
    void ManagePriority(void);
    int ManageStruggleArrows(void);
    void ManageToss(void);
    int MeleeFrameAdvance(void);
    void MeleeHudDisable(void);
    int MeleeHudFlags(int a, int iFlags);
    int MeleeHudFlags(int, int, float);
    void MeleeHudRemove(int iCmd);
    int MeleeHudSwitchAtk(melee_move_s *pMove);
    void MeleeHud(int iCmd, int iArg);
    void MeleeText(int iText, int iArg);
    int NewExeMovePost(void);
    int NextExeMove(void);
    int PlayLowPriorityAnim(void);
    int PlayMedPriorityAnim(void);
    int Powerhit(CBasePlayer *pVictim, Vector vecDir, int iType);
    int Powerhit(CBasePlayer *pVictim, Vector vecDir, int iType, float flDmgMult, float flSpeed, float flMin, float flDecel, float flTime);
    int Powerhit(int, CBasePlayer*, Vector, int, float, float, float, float, float);
    int PredictBlockRatio(melee_move_s *pAtk, melee_move_s *pDef, float flMult);
    int PredictBlockRatio(melee_execution_s *pExe, melee_move_s *pDef, float flMult);
    void PushAfterDeath(void);
    void PushAwayOtherPlayers(void);
    void Recover(void);
    void RemoveAllAnims(void);
    plrmelee_anim_s * RemoveAnim(plrmelee_anim_s *pAnim);
    void RemoveAnim(char *szName);
    melee_move_s * RemoveDir(melee_move_s *pMove);
    void RemoveStruggleBar(void);
    void ResetComboArray(melee_execution_s *p);
    int ResetDirection(int iFlags, melee_move_s *pMove);
    int Reset(void);
    void RetryStruggleAttack(void);
    int SendBlockFlash(CBasePlayer *pBlocker, melee_move_s *pMove);
    int SendPredictVars(float flRatio);
    void SetActiveStunTime(float f);
    void SetAnimPriority(ANIM_PRIORITY p, plrmelee_anim_s *pAnim);
    int SetAtkBehindAndBlocking(void);
    int SetAttackFlags(int &iFlags);
    void SetAttackerOther(CBasePlayer *p);
    void SetAttacker(CBasePlayer *p);
    int SetBlockStun(melee_execution_s *pExe);
    int SetBlock(melee_execution_s *pExe);
    void SetBlockingDirections(void);
    int SetComboMoves(void);
    void SetDefender(CBasePlayer *p);
    int SetDelayEndBlock(melee_move_s *pA, melee_move_s *pB);
    void SetDirection(melee_move_s *pMove, int iDir);
    int SetDirections(void);
    void SetGrabbedOrigin(void);
    int SetMode(ADV_MELEE_STATUS m);
    void SetMovementFlags(int &iFlags);
    int SetPowerhitAnim(Vector vecDir, int iType);
    int SetThrowAnim(char *szAnim, Activity &act);
    void SetTotalStunTime(float f);
    melee_execution_s * SetupCombo(int iId);
    int SimpleMeleePowerhit(CBasePlayer *pVictim, Vector vecDir, int iType);
    void SimpleSwitch(CPlayerMelee *pOther);
    void SimpleSwitch(CPlayerMelee *pOther, float flStun, ADV_MELEE_STATUS iMode);
    int SpecialLaserReduction(void);
    void StartBurstStruggleAttack(void);
    void StartChargedAttackRetaliate(void);
    void StartChargedAttack(void);
    void StartExeAttack(void);
    void StartGrabbedAttack(void);
    void StartKnockPreStruggle(void);
    void StartLandRecover(void);
    void StartLay(void);
    void StartPrePunchAttack(void);
    void StartRoll(void);
    void StartStruggleAttack(void);
    void StartToss(CBasePlayer *pThrower, int iType, Vector vecDir, float flSpeed, float flMin, float flDecel, float flTime);
    void StartWallStick(Vector vecPos, Vector vecNormal);
    void StopChargedAttack(void);
    int StopExeAttack(void);
    void StopGrabbedAttack(void);
    void StopMelee(void);
    void StopMelee(int bToss);
    void StopPrepunchAttack(void);
    void StopStruggleAttack(void);
    int StopThrow();
    void StopThrow(int bQuiet);
    int Switch(void);
    void Throw(CBasePlayer *pTarget, int iSpeed, float flArg, Vector vecDir);
    float TotalCmbTimeNC(void);
    float TotalCmbTime(void);
    int UpdateBlockClient(melee_move_s *pMove);
    void UpdateStruggleBar(int iValue);
    int UseAttackerMoves(void);
    void WinStruggle(void);

    // ---- campos (offset do .so) ----
    char  f_000;                                // +0x00
    float m_flTossStartSpeed;                   // +0x04 [OK] StartToss
    float m_flTossSpeed;                        // +0x08 [OK] DeaccelerateToss
    float m_flTossMinSpeed;                     // +0x0c [OK]
    float m_flTossDecel;                        // +0x10 [OK] desaceleração por segundo
    float m_flTossEndTime;                      // +0x14 [OK] StartToss(agora + a7)
    float m_flLayTime;                          // +0x18 [OK] HandleLay (1.25 s)
    float m_flLandRecoverTime;                  // +0x1c [OK] HandleLandRecover (1 s)
    float m_flWallStickStart;                   // +0x20 [OK] hora em que grudou na parede
    float f_024;                                // +0x24 [?] hora do fim do arremesso
    int   m_fTossing;                           // +0x28 [OK] ManageToss
    int   m_iTossType;                          // +0x2c [OK] StartToss(a2)
    int   f_030;                                // +0x30 [OK] cratera já feita neste contato (CheckCreater)
    int   m_fAirRecover;                        // +0x34 [OK] 1 = recuperou no ar (HandleRecover)
    int   m_fStruggleBar;                       // +0x38 [OK] barra de struggle visível
    int   f_03c;                                // +0x3c [?]
    float m_vecTossDir[3];                      // +0x40 [OK] direção normalizada do arremesso
    float m_vecWallNormal[3];                    // +0x4c [OK] normal da parede onde grudou (StartWallStick)
    float m_vecTossAux[3];                      // +0x58 [?] zerado em StartToss
    int   m_iThrowState;                        // +0x64 [OK] InThrow = !=0; 3/4/5 = lasers (SpecialLaserReduction)
    CBasePlayer *m_pThrower;                    // +0x68 [OK] quem arremessou
    int   m_iStruggleArrows;                    // +0x6c [OK] setas já mostradas no struggle
    float m_flNextArrow;                        // +0x70 [OK]
    int   m_fStruggleEnding;                    // +0x74 [OK] última seta mostrada: esperando o fim
    int   f_078, f_07c;                         // +0x78/+0x7c [?] usados em UseAttackerMoves
    int   f_080;                                // +0x80 [?] BlowbackStruggle: golpe mais forte (1400/800/450)
    plrmelee_anim_s *m_pAnimList;               // +0x84 [OK] lista de animações enfileiradas
    float m_flStunEnd;                          // +0x88 [OK] GetStunTime/CheckStunTime
    float m_flTotalStun;                        // +0x8c [OK]
    float m_flPrepunchStart;                    // +0x90 [OK] hora em que o prepunch começou
    float m_flLastPunch;                        // +0x94 [OK] hora do último soco do prepunch
    float m_flGrabFullTime;                     // +0x98 [OK] hora em que a barra do agarrão encheu
    float f_09c;                                // +0x9c [?] 0..100 (fração mostrada na barra de struggle)
    int   f_0a0;                                // +0xa0 [?]
    float m_flBarUpdate;                        // +0xa4 [OK] limita a barra do HUD a 20 atualizações/s
    float f_0a8;
    float m_flDelayTime;                        // +0xac [OK] HandleDelayedBlock (1 s)
    float m_flGrabLastTick;                     // +0xb0 [OK] último tick do agarrão
    float f_0b4;                                // +0xb4 [?] agora+1 após um arremesso
    int   m_iPunchCount;                        // +0xb8 [OK] socos do prepunch
    int   f_0bc, f_0c0;                         // +0xbc contador de golpes copiados (CopyMoveToExe); +0xc0 [?]
    int   m_iStruggleTies;                      // +0xc4 [OK] empates no struggle (CanSwitch/CheckStruggleArrows)
    int   m_iAttackerMoveCount;                 // +0xc8 [OK] contador de AddDirection (atacante)
    int   m_iDefenderMoveCount;                 // +0xcc [OK]
    int   f_0d0;                                // +0xd0 [?] dano x2 (GetDmgPerPunch)
    int   f_0d4;                                // +0xd4 [?] dano x0.5, stun x0.65 (autopunch/retaliate)
    int   f_0d8;                                // +0xd8 [?] dano x1.2, stun x1.2
    int   m_fStunned;                           // +0xdc [OK]
    int   m_fStunActive;                        // +0xe0 [OK]
    int   m_fGrabFull;                          // +0xe4 [OK] barra do agarrão cheia
    int   m_fGrabSpinSound;                     // +0xe8 [OK] som de giro já tocado
    int   f_0ec;                                // +0xec [?]
    int   f_0f0;                                // +0xf0 [?] retaliate flags (HandleExeDefend)
    int   f_0f4;                                // +0xf4 [?] (StartChargedAttack: pula a animação de conexão)
    int   f_0f8, f_0fc;                         // +0xf8/+0xfc [?] zerados em Reset
    int   f_100;                                // +0x100 [?] 1 = prepunch em struggle (delays diferentes)
    int   f_104;                                // +0x104 [?] pula CopyMoveToExe
    int   m_fDelayEndBlock;                     // +0x108 [OK] SetDelayEndBlock
    int   f_10c;                                // +0x10c [?]
    float m_vecDir[3];                          // +0x110 [OK] direção atacante->defensor (Reset zera)
    int   m_Mode;                               // +0x11c [OK] ADV_MELEE_STATUS
    CBasePlayer *m_pIgnoreDamageFrom;           // +0x120 [?]
    CBasePlayer *m_pAttacker;                   // +0x124 [OK]
    CBasePlayer *m_pDefender;                   // +0x128 [OK]
    CBasePlayer *m_pAttackerOther;              // +0x12c [OK]
    CPlayerMelee *m_pDefenderMelee;             // +0x130 [OK] = defensor + 0x380
    CPlayerMelee *m_pAttackerOtherMelee;        // +0x134 [OK]
    int   m_fIsAttacker;                        // +0x138 [OK]
    int   m_fIsDefender;                        // +0x13c [OK]
    int   f_140;
    int   m_fInAdvMelee;                        // +0x144 [OK] InAdvMeleeBattle
    melee_move_s *m_pAttackerMoves;             // +0x148 [OK]
    melee_move_s *m_pDefenderMoves;             // +0x14c [OK]
    melee_move_s *m_pMoveList[10];              // +0x150 [OK] listas por direção (AddComboMoves usa 1..9)
    melee_execution_s *m_pExeHead;              // +0x178 [?] lista de combos "exe" (AddExeMove)
    melee_execution_s *m_pExeCur;               // +0x17c [OK]
    void *m_pSkill;                             // +0x180 [OK] objeto com vfunc (+0xc) devolvendo tabela de tempos
};
