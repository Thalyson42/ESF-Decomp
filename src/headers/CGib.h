// CGib.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGib : public CBaseEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__12CBaseMonsterP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CBaseMonsterR5CSave
    virtual void Restore();  // vtable[4] Restore__12CBaseMonsterR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__4CGib
    virtual void TraceAttack();  // vtable[10] TraceAttack__12CBaseMonsterP9entvars_sfG6VectorP11TraceResulti
    virtual void TakeDamage();  // vtable[11] TakeDamage__12CBaseMonsterP9entvars_sT1fi
    virtual void TakeHealth();  // vtable[12] TakeHealth__12CBaseMonsterfi
    virtual void Killed();  // vtable[13] Killed__12CBaseMonsterP9entvars_si
    virtual void BloodColor();  // vtable[14] BloodColor__12CBaseMonster
    virtual void MyMonsterPointer();  // vtable[17] MyMonsterPointer__12CBaseMonster
    virtual void GetToggleState();  // vtable[19] GetToggleState__11CBaseToggle
    virtual void GetDelay();  // vtable[24] GetDelay__11CBaseToggle
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
    float f_008;  // +0x8 (8)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    float f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    float f_0c4;  // +0xc4 (196)
    float f_0c8;  // +0xc8 (200)
    float f_0cc;  // +0xcc (204)
    float f_0f4;  // +0xf4 (244)
    float f_0f8;  // +0xf8 (248)
    float f_0fc;  // +0xfc (252)
    float f_160;  // +0x160 (352)
    float f_174;  // +0x174 (372)
    float f_178;  // +0x178 (376)
    float f_17c;  // +0x17c (380)
    void* f_208;  // +0x208 (520)
    int f_2a8;  // +0x2a8 (680)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    float f_2b4;  // +0x2b4 (692)
};
