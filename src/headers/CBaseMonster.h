// CBaseMonster.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseMonster : public CBaseToggle {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__12CBaseMonsterP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CBaseMonsterR5CSave
    virtual void Restore();  // vtable[4] Restore__12CBaseMonsterR8CRestore
    virtual void TraceAttack();  // vtable[10] TraceAttack__12CBaseMonsterP9entvars_sfG6VectorP11TraceResulti
    virtual void TakeDamage();  // vtable[11] TakeDamage__12CBaseMonsterP9entvars_sT1fi
    virtual void TakeHealth();  // vtable[12] TakeHealth__12CBaseMonsterfi
    virtual void Killed();  // vtable[13] Killed__12CBaseMonsterP9entvars_si
    virtual void BloodColor();  // vtable[14] BloodColor__12CBaseMonster
    virtual void MyMonsterPointer();  // vtable[17] MyMonsterPointer__12CBaseMonster
    virtual void IsMoving();  // vtable[25] IsMoving__12CBaseMonster
    virtual void IsAlive();  // vtable[33] IsAlive__12CBaseMonster
    virtual void FBecomeProne();  // vtable[48] FBecomeProne__12CBaseMonster
    virtual void BodyTarget();  // vtable[52] BodyTarget__12CBaseMonsterRC6Vector
    virtual void HandleAnimEvent();  // vtable[56] HandleAnimEvent__12CBaseMonsterP14MonsterEvent_t
    virtual void Look();  // vtable[57] Look__12CBaseMonsteri
    virtual void RunAI();  // vtable[58] RunAI__12CBaseMonster
    virtual void ShouldFadeOnDeath();  // vtable[59] ShouldFadeOnDeath__12CBaseMonster
    virtual void ChangeYaw();  // vtable[60] ChangeYaw__12CBaseMonsteri
    virtual void MonsterThink();  // vtable[61] MonsterThink__12CBaseMonster
    virtual void IRelationship();  // vtable[62] IRelationship__12CBaseMonsterP11CBaseEntity
    virtual void MonsterInit();  // vtable[63] MonsterInit__12CBaseMonster
    virtual void MonsterInitDead();  // vtable[64] MonsterInitDead__12CBaseMonster
    virtual void BecomeDead();  // vtable[65] BecomeDead__12CBaseMonster
    virtual void StartMonster();  // vtable[66] StartMonster__12CBaseMonster
    virtual void BestVisibleEnemy();  // vtable[67] BestVisibleEnemy__12CBaseMonster
    virtual void FInViewCone();  // vtable[68] FInViewCone__12CBaseMonsterP11CBaseEntity
    virtual void FInViewCone();  // vtable[69] FInViewCone__12CBaseMonsterP6Vector
    virtual void CheckLocalMove();  // vtable[70] CheckLocalMove__12CBaseMonsterRC6VectorT1P11CBaseEntityPf
    virtual void Move();  // vtable[71] Move__12CBaseMonsterf
    virtual void MoveExecute();  // vtable[72] MoveExecute__12CBaseMonsterP11CBaseEntityRC6Vectorf
    virtual void ShouldAdvanceRoute();  // vtable[73] ShouldAdvanceRoute__12CBaseMonsterf
    virtual void GetStoppedActivity();  // vtable[74] GetStoppedActivity__12CBaseMonster
    virtual void Stop();  // vtable[75] Stop__12CBaseMonster
    virtual void CheckRangeAttack1();  // vtable[76] CheckRangeAttack1__12CBaseMonsterff
    virtual void CheckRangeAttack2();  // vtable[77] CheckRangeAttack2__12CBaseMonsterff
    virtual void CheckMeleeAttack1();  // vtable[78] CheckMeleeAttack1__12CBaseMonsterff
    virtual void CheckMeleeAttack2();  // vtable[79] CheckMeleeAttack2__12CBaseMonsterff
    virtual void ScheduleFromName();  // vtable[80] ScheduleFromName__12CBaseMonsterPCc
    virtual void StartTask();  // vtable[81] StartTask__12CBaseMonsterP6Task_t
    virtual void RunTask();  // vtable[82] RunTask__12CBaseMonsterP6Task_t
    virtual void GetScheduleOfType();  // vtable[83] GetScheduleOfType__12CBaseMonsteri
    virtual void GetSchedule();  // vtable[84] GetSchedule__12CBaseMonster
    virtual void ScheduleChange();  // vtable[85] ScheduleChange__12CBaseMonster
    virtual void CanPlaySequence();  // vtable[86] CanPlaySequence__12CBaseMonsterii
    virtual void CanPlaySentence();  // vtable[87] CanPlaySentence__12CBaseMonsteri
    virtual void PlaySentence();  // vtable[88] PlaySentence__12CBaseMonsterPCcfff
    virtual void PlayScriptedSentence();  // vtable[89] PlayScriptedSentence__12CBaseMonsterPCcfffiP11CBaseEntity
    virtual void SentenceStop();  // vtable[90] SentenceStop__12CBaseMonster
    virtual void GetIdealState();  // vtable[91] GetIdealState__12CBaseMonster
    virtual void SetActivity();  // vtable[92] SetActivity__12CBaseMonster8Activity
    virtual void ReportAIState();  // vtable[93] ReportAIState__12CBaseMonster
    virtual void CheckEnemy();  // vtable[94] CheckEnemy__12CBaseMonsterP11CBaseEntity
    virtual void FTriangulate();  // vtable[95] FTriangulate__12CBaseMonsterRC6VectorT1fP11CBaseEntityP6Vector
    virtual void SetYawSpeed();  // vtable[96] SetYawSpeed__12CBaseMonster
    virtual void BuildNearestRoute();  // vtable[97] BuildNearestRoute__12CBaseMonsterG6VectorT1ff
    virtual void FindCover();  // vtable[98] FindCover__12CBaseMonsterG6VectorT1ff
    virtual void FValidateCover();  // vtable[99] FValidateCover__12CBaseMonsterRC6Vector
    virtual void CoverRadius();  // vtable[100] CoverRadius__12CBaseMonster
    virtual void FCanCheckAttacks();  // vtable[101] FCanCheckAttacks__12CBaseMonster
    virtual void CheckAmmo();  // vtable[102] CheckAmmo__12CBaseMonster
    virtual void IgnoreConditions();  // vtable[103] IgnoreConditions__12CBaseMonster
    virtual void FValidateHintType();  // vtable[104] FValidateHintType__12CBaseMonsters
    virtual void FCanActiveIdle();  // vtable[105] FCanActiveIdle__12CBaseMonster
    virtual void ISoundMask();  // vtable[106] ISoundMask__12CBaseMonster
    virtual void PBestSound();  // vtable[107] PBestSound__12CBaseMonster
    virtual void PBestScent();  // vtable[108] PBestScent__12CBaseMonster
    virtual void HearingSensitivity();  // vtable[109] HearingSensitivity__12CBaseMonster
    virtual void BarnacleVictimBitten();  // vtable[110] BarnacleVictimBitten__12CBaseMonsterP9entvars_s
    virtual void BarnacleVictimReleased();  // vtable[111] BarnacleVictimReleased__12CBaseMonster
    virtual void PrescheduleThink();  // vtable[112] PrescheduleThink__12CBaseMonster
    virtual void GetDeathActivity();  // vtable[113] GetDeathActivity__12CBaseMonster
    virtual void GibMonster();  // vtable[114] GibMonster__12CBaseMonster
    virtual void HasHumanGibs();  // vtable[115] HasHumanGibs__12CBaseMonster
    virtual void HasAlienGibs();  // vtable[116] HasAlienGibs__12CBaseMonster
    virtual void FadeMonster();  // vtable[117] FadeMonster__12CBaseMonster
    virtual void GetGunPosition();  // vtable[118] GetGunPosition__12CBaseMonster
    virtual void DeathSound();  // vtable[119] DeathSound__12CBaseMonster
    virtual void AlertSound();  // vtable[120] AlertSound__12CBaseMonster
    virtual void IdleSound();  // vtable[121] IdleSound__12CBaseMonster
    virtual void PainSound();  // vtable[122] PainSound__12CBaseMonster
    virtual void StopFollowing();  // vtable[123] StopFollowing__12CBaseMonsteri
    virtual void 0();  // vtable[124] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    char f_001;  // +0x1 (1)
    CBaseEntity* m_pGoalEnt;  // +0x4 (4) FIELD_CLASSPTR  [save-table]
    int f_008;  // +0x8 (8)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    float m_flGroundSpeed;  // +0x70 (112) FIELD_FLOAT  [save-table]
    BOOL m_fSequenceLoops;  // +0x7c (124) FIELD_BOOLEAN  [save-table]
    int m_afConditions;  // +0x104 (260) FIELD_INTEGER  [save-table]
    char f_105;  // +0x105 (261)
    char f_106;  // +0x106 (262)
    char f_107;  // +0x107 (263)
    EHANDLE m_hEnemy;  // +0x108 (264) FIELD_EHANDLE  [save-table]
    EHANDLE m_hTargetEnt;  // +0x110 (272) FIELD_EHANDLE  [save-table]
    EHANDLE m_hOldEnemy[4];  // +0x118 (280) FIELD_EHANDLE  [save-table]
    Vector m_vecOldEnemy[4];  // +0x138 (312) FIELD_POSITION_VECTOR  [save-table]
    float m_flFieldOfView;  // +0x168 (360) FIELD_FLOAT  [save-table]
    float m_flWaitFinished;  // +0x16c (364) FIELD_TIME  [save-table]
    float m_flMoveWaitFinished;  // +0x170 (368) FIELD_TIME  [save-table]
    int m_Activity;  // +0x174 (372) FIELD_INTEGER  [save-table]
    int m_IdealActivity;  // +0x178 (376) FIELD_INTEGER  [save-table]
    int m_LastHitGroup;  // +0x17c (380) FIELD_INTEGER  [save-table]
    int m_MonsterState;  // +0x180 (384) FIELD_INTEGER  [save-table]
    int m_IdealMonsterState;  // +0x184 (388) FIELD_INTEGER  [save-table]
    int m_iTaskStatus;  // +0x188 (392) FIELD_INTEGER  [save-table]
    int f_18c;  // +0x18c (396)
    int m_iScheduleIndex;  // +0x190 (400) FIELD_INTEGER  [save-table]
    int f_194;  // +0x194 (404)
    int f_198;  // +0x198 (408)
    int f_19c;  // +0x19c (412)
    char f_1a0;  // +0x1a0 (416)
    int f_1a4;  // +0x1a4 (420)
    int f_1a8;  // +0x1a8 (424)
    int f_1ac;  // +0x1ac (428)
    int f_1b0;  // +0x1b0 (432)
    int f_214;  // +0x214 (532)
    int f_218;  // +0x218 (536)
    float f_21c;  // +0x21c (540)
    Vector m_vecMoveGoal;  // +0x220 (544) FIELD_POSITION_VECTOR  [save-table]
    int f_224;  // +0x224 (548)
    int f_228;  // +0x228 (552)
    int m_movementActivity;  // +0x22c (556) FIELD_INTEGER  [save-table]
    int f_230;  // +0x230 (560)
    int f_234;  // +0x234 (564)
    Vector m_vecLastPosition;  // +0x238 (568) FIELD_POSITION_VECTOR  [save-table]
    int m_iHintNode;  // +0x244 (580) FIELD_INTEGER  [save-table]
    int m_afMemory;  // +0x248 (584) FIELD_INTEGER  [save-table]
    int m_iMaxHealth;  // +0x24c (588) FIELD_INTEGER  [save-table]
    Vector m_vecEnemyLKP;  // +0x250 (592) FIELD_POSITION_VECTOR  [save-table]
    int f_254;  // +0x254 (596)
    int f_258;  // +0x258 (600)
    int m_cAmmoLoaded;  // +0x25c (604) FIELD_INTEGER  [save-table]
    int m_afCapability;  // +0x260 (608) FIELD_INTEGER  [save-table]
    char f_261;  // +0x261 (609)
    float m_flNextAttack;  // +0x264 (612) FIELD_TIME  [save-table]
    int m_bitsDamageType;  // +0x268 (616) FIELD_INTEGER  [save-table]
    char m_rgbTimeBasedDamage[8];  // +0x26c (620) FIELD_CHARACTER  [save-table]
    int m_bloodColor;  // +0x278 (632) FIELD_INTEGER  [save-table]
    int m_failSchedule;  // +0x27c (636) FIELD_INTEGER  [save-table]
    float m_flHungryTime;  // +0x280 (640) FIELD_TIME  [save-table]
    float m_flDistTooFar;  // +0x284 (644) FIELD_FLOAT  [save-table]
    float m_flDistLook;  // +0x288 (648) FIELD_FLOAT  [save-table]
    int m_iTriggerCondition;  // +0x28c (652) FIELD_INTEGER  [save-table]
    string_t m_iszTriggerTarget;  // +0x290 (656) FIELD_STRING  [save-table]
    Vector m_HackedGunPos;  // +0x294 (660) FIELD_VECTOR  [save-table]
    int m_scriptState;  // +0x2a0 (672) FIELD_INTEGER  [save-table]
    CBaseEntity* m_pCine;  // +0x2a4 (676) FIELD_CLASSPTR  [save-table]
};
