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
    int f_004;  // +0x4 (4)
    int f_008;  // +0x8 (8)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
    int f_060;  // +0x60 (96)
    float f_070;  // +0x70 (112)
    int f_07c;  // +0x7c (124)
    char f_104;  // +0x104 (260)
    char f_105;  // +0x105 (261)
    char f_106;  // +0x106 (262)
    char f_107;  // +0x107 (263)
    char f_108;  // +0x108 (264)
    char f_110;  // +0x110 (272)
    float f_168;  // +0x168 (360)
    float f_170;  // +0x170 (368)
    int f_174;  // +0x174 (372)
    int f_178;  // +0x178 (376)
    int f_17c;  // +0x17c (380)
    int f_180;  // +0x180 (384)
    int f_184;  // +0x184 (388)
    int f_188;  // +0x188 (392)
    int f_18c;  // +0x18c (396)
    int f_190;  // +0x190 (400)
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
    int f_220;  // +0x220 (544)
    int f_224;  // +0x224 (548)
    int f_228;  // +0x228 (552)
    int f_22c;  // +0x22c (556)
    int f_230;  // +0x230 (560)
    int f_234;  // +0x234 (564)
    int f_244;  // +0x244 (580)
    char f_248;  // +0x248 (584)
    int f_250;  // +0x250 (592)
    int f_254;  // +0x254 (596)
    int f_258;  // +0x258 (600)
    int f_260;  // +0x260 (608)
    char f_261;  // +0x261 (609)
    int f_268;  // +0x268 (616)
    int f_278;  // +0x278 (632)
    int f_27c;  // +0x27c (636)
    float f_280;  // +0x280 (640)
    float f_284;  // +0x284 (644)
    float f_288;  // +0x288 (648)
    int f_2a4;  // +0x2a4 (676)
};
