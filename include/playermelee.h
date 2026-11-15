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
enum MELEE_STRENGTH { MELEE_WEAK = 0, MELEE_MEDIUM = 1, MELEE_STRONG = 2 };    // [OK] GetMeleeStrength

struct melee_move_s {                           // nó de lista ligada de um golpe
    int   f_00;
    int   m_iDirection;                         // +0x04 flags de direção
    float m_flStart;                            // +0x08
    float m_flEnd;                              // +0x0c   (duração = end - start)
    int   f_10, f_14, f_18;
    melee_move_s *m_pNext;                      // +0x1c
};

struct plrmelee_anim_s {                        // animação enfileirada (644+ bytes)
    char  m_szName[16][32];                     // +0x000 até 16 nomes de sequência [OK] AddToCurAnim
    char  f_200[0x80];
    int   m_iPriority;                          // +0x280 [OK] SetAnimPriority
    int   m_iNumNames;                          // +0x284 [OK]
    int   f_288, f_28c;
    int   m_iFlag;                              // +0x290 [OK] AddToCurAnim(bool,...)
};

struct melee_execution_s;                       // combo ("exe"): +0x24 id, +0x4c estado, +0x358 next, +0x35c prev

class CBasePlayer;

class CPlayerMelee
{
public:
    int AddAnimationAFix(Vector, bool, float, const char*);
    int AddAnimationExe(float, char*);
    int AddAnimation(bool, float, int, ...);
    int AddComboMoves();
    int AddCombo(melee_execution_s*, int);
    int AddDirection(int);
    int AddExeCombo(melee_execution_s*, float, float, void**);
    int AddExeMove(melee_execution_s*);
    int AddMove(int, int, int, ...);
    int AddToCurAnim(bool, char*);
    int ApplyVelocity();
    int Block(int, int);
    int BlocksAttack(CBasePlayer*);
    int BlowbackStruggle(Vector, float, float, CBasePlayer*);
    int CanAddDirection();
    int CanEXECombo(melee_execution_s*);
    int CanInflictDamage(CBasePlayer*, int);
    int CanLetGo(melee_move_s*);
    int CanPlayAnimation();
    int CanRetaliate();
    int CanSwitch();
    int CanThrow(int, Vector&);
    int CanUseTrunksSword(CBasePlayer*);
    int CheckCreater();
    int CheckForObsticales();
    int CheckStruggleArrows();
    int CheckStunTime();
    int ContinueBlockStun(int&, MELEE_STRENGTH, MELEE_STRENGTH);
    int CopyMoveToExe();
    int CreateExeMove(int, int, float, int, MELEE_COMBO_STATUS, MELEE_STRENGTH, char*);
    int DeaccelerateToss();
    int DelAllDirectionsAttacker();
    int DelAllDirectionsDefender();
    int DelAllDirections();
    int DirectionsToFlags(int);
    int EmitClientSound(edict_s*, int, int);
    int EmitComboDamage(melee_combo_hit_s*);
    int EmitDamage();
    int EmitExeSound(edict_s*);
    int EmitExplosionRocks(Vector, Vector, float, int, int);
    int EmitShockwave();
    int ExecuteCombo();
    int FlagsToDirections(int);
    int GetAnimForCombo(int, char*);
    int GetAnimForMove(melee_move_s*, char*);
    int GetAnimForMove(int, MELEE_STRENGTH, char*);
    int GetAttackerMoves();
    int GetAttackerOther();
    int GetAttacker();
    int GetBlockRatio(int, int);
    int GetBlockStunAmt(MELEE_STRENGTH);
    int GetCmbTime(melee_move_s*);
    int GetCurrentAnim();
    int GetCurrentDirection();
    int GetCurrentExeAnim();
    int GetDamageDelay(melee_move_s*);
    int GetDamage();
    int GetDefenderMoves();
    int GetDefender();
    int GetDmgPerPunch();
    int GetEnemyPrepunch(CBasePlayer*);
    int GetMeleeStrength(melee_move_s*);
    int GetMeleeStrength(float);
    int GetMoveCountFinishedOnly();
    int GetMoveCountFinishedOnly(melee_move_s*);
    int GetMoveCount();
    int GetMoveCount(melee_move_s*);
    int GetMoveStrength(melee_move_s*);
    int GetNextExe();
    int GetOrigDefender();
    int GetPowerRatio(CBasePlayer*);
    int GetSkillValues();
    int GetSoundEdict();
    int GetStunPerPunch();
    int GetStunTime();
    int GetThrowActivity();
    int GetThrowAnimDirection(int, char*);
    int GetThrowAnimDirection(int, int, char*);
    int GetThrowDirection(int);
    int HandleBurstStruggleAttack();
    int HandleChargeAttack();
    int HandleChargeDefend();
    int HandleDelayedBlock(melee_move_s*, melee_move_s*);
    int HandleExeAttack();
    int HandleExeDefend();
    int HandleGrabAttack();
    int HandleGrabDefend();
    int HandleKnockPreStruggleAttack();
    int HandleLandRecover();
    int HandleLay();
    int HandlePrepunchAttack();
    int HandlePrepunchDefend();
    int HandleRecover();
    int HandleRoll();
    int HandleStruggleAttack();
    int HandleStruggleDefend();
    int HandleToss();
    int HandleWallStick();
    int HoldDirection(melee_move_s*);
    int InAdvMeleeBattle();
    int InThrow();
    int InflictWallhitDmg(int);
    int InitMelee(CBasePlayer*);
    int IsAttacker();
    int IsDefender();
    int IsDirectionless(int);
    int LandRecoverDash();
    int LetGoDirection(melee_move_s*);
    int MakeCreater();
    int ManageInvulnerability();
    int ManageList();
    int ManageMelee();
    int ManagePriority();
    int ManageStruggleArrows();
    int ManageToss();
    int MeleeFrameAdvance();
    int MeleeHudDisable();
    int MeleeHudFlags(int, int);
    int MeleeHudFlags(int, int, float);
    int MeleeHudRemove(int);
    int MeleeHudSwitchAtk(melee_move_s*);
    int MeleeHud(int, int);
    int MeleeText(int, int);
    int NewExeMovePost();
    int NextExeMove();
    int PlayLowPriorityAnim();
    int PlayMedPriorityAnim();
    int Powerhit(CBasePlayer*, Vector, int);
    int Powerhit(CBasePlayer*, Vector, int, float, float, float, float, float);
    int Powerhit(int, CBasePlayer*, Vector, int, float, float, float, float, float);
    int PredictBlockRatio(melee_move_s*, melee_move_s*, float);
    int PredictBlockRatio(melee_execution_s*, melee_move_s*, float);
    int PushAfterDeath();
    int PushAwayOtherPlayers();
    int Recover();
    int RemoveAllAnims();
    int RemoveAnim(plrmelee_anim_s*);
    int RemoveAnim(char*);
    int RemoveDir(melee_move_s*);
    int RemoveStruggleBar();
    int ResetComboArray(melee_execution_s*);
    int ResetDirection(int, melee_move_s*);
    int Reset();
    int RetryStruggleAttack();
    int SendBlockFlash(CBasePlayer*, melee_move_s*);
    int SendPredictVars(float);
    int SetActiveStunTime(float);
    int SetAnimPriority(ANIM_PRIORITY, plrmelee_anim_s*);
    int SetAtkBehindAndBlocking();
    int SetAttackFlags(int&);
    int SetAttackerOther(CBasePlayer*);
    int SetAttacker(CBasePlayer*);
    int SetBlockStun(melee_execution_s*);
    int SetBlock(melee_execution_s*);
    int SetBlockingDirections();
    int SetComboMoves();
    int SetDefender(CBasePlayer*);
    int SetDelayEndBlock(melee_move_s*, melee_move_s*);
    int SetDirection(melee_move_s*, int);
    int SetDirections();
    int SetGrabbedOrigin();
    int SetMode(ADV_MELEE_STATUS);
    int SetMovementFlags(int&);
    int SetPowerhitAnim(Vector, int);
    int SetThrowAnim(char*, Activity&);
    int SetTotalStunTime(float);
    int SetupCombo(int);
    int SimpleMeleePowerhit(CBasePlayer*, Vector, int);
    int SimpleSwitch(CPlayerMelee*);
    int SimpleSwitch(CPlayerMelee*, float, ADV_MELEE_STATUS);
    int SpecialLaserReduction();
    int StartBurstStruggleAttack();
    int StartChargedAttackRetaliate();
    int StartChargedAttack();
    int StartExeAttack();
    int StartGrabbedAttack();
    int StartKnockPreStruggle();
    int StartLandRecover();
    int StartLay();
    int StartPrePunchAttack();
    int StartRoll();
    int StartStruggleAttack();
    int StartToss(CBasePlayer*, int, Vector, float, float, float, float);
    int StartWallStick(Vector, Vector);
    int StopChargedAttack();
    int StopExeAttack();
    int StopGrabbedAttack();
    int StopMelee();
    int StopMelee(int);
    int StopPrepunchAttack();
    int StopStruggleAttack();
    int StopThrow();
    int StopThrow(int);
    int Switch();
    int Throw(CBasePlayer*, int, float, Vector);
    int TotalCmbTimeNC();
    int TotalCmbTime();
    int UpdateBlockClient(melee_move_s*);
    int UpdateStruggleBar(int);
    int UseAttackerMoves();
    int WinStruggle();

    // ---- campos (offset do .so) ----
    char  f_000;                                // +0x00
    int   f_004;
    float m_flTossSpeed;                        // +0x08 [OK] DeaccelerateToss
    float m_flTossMinSpeed;                     // +0x0c [OK]
    float m_flTossDecel;                        // +0x10 [OK] desaceleração por segundo
    char  pad_014[4];
    float m_flLayTime;                          // +0x18 [OK] HandleLay (1.25 s)
    float m_flLandRecoverTime;                  // +0x1c [OK] HandleLandRecover (1 s)
    char  pad_020[8];
    int   m_fTossing;                           // +0x28 [OK] ManageToss
    char  pad_02c[0x38-0x2c];
    int   m_fStruggleBar;                       // +0x38 [OK] barra de struggle visível
    int   f_03c;                                // +0x3c [?]
    char  pad_040[0x64-0x40];
    int   m_iThrowState;                        // +0x64 [OK] InThrow = !=0; 3/4/5 = lasers (SpecialLaserReduction)
    char  pad_068[0x78-0x68];
    int   f_078, f_07c;                         // +0x78/+0x7c [?] usados em UseAttackerMoves
    char  pad_080[0x88-0x80];
    float m_flStunEnd;                          // +0x88 [OK] GetStunTime/CheckStunTime
    float m_flTotalStun;                        // +0x8c [OK]
    char  pad_090[0x9c-0x90];
    float f_09c;                                // +0x9c [?] 0..100 (fração mostrada na barra de struggle)
    char  pad_0a0[0xa8-0xa0];
    float f_0a8;
    float m_flDelayTime;                        // +0xac [OK] HandleDelayedBlock (1 s)
    char  pad_0b0[0xc4-0xb0];
    int   f_0c4;                                // +0xc4 [?] CanSwitch compara com melee_maxextanges
    char  pad_0c8[0xdc-0xc8];
    int   m_fStunned;                           // +0xdc [OK]
    int   m_fStunActive;                        // +0xe0 [OK]
    char  pad_0e4[0xec-0xe4];
    int   f_0ec;                                // +0xec [?]
    int   f_0f0;                                // +0xf0 [?] retaliate flags (HandleExeDefend)
    char  pad_0f4[0x104-0xf4];
    int   f_104;                                // +0x104 [?] pula CopyMoveToExe
    int   m_fDelayEndBlock;                     // +0x108 [OK] SetDelayEndBlock
    int   f_10c;                                // +0x10c [?]
    char  pad_110[0x11c-0x110];
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
