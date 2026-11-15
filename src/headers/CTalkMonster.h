// CTalkMonster.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CTalkMonster : public CBaseMonster {  // base: SDK
public:
    virtual void Precache();  // vtable[1] Precache__12CTalkMonster
    virtual void KeyValue();  // vtable[2] KeyValue__12CTalkMonsterP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CTalkMonsterR5CSave
    virtual void Restore();  // vtable[4] Restore__12CTalkMonsterR8CRestore
    virtual void TakeDamage();  // vtable[11] TakeDamage__12CTalkMonsterP9entvars_sT1fi
    virtual void Killed();  // vtable[13] Killed__12CTalkMonsterP9entvars_si
    virtual void Touch();  // vtable[43] Touch__12CTalkMonsterP11CBaseEntity
    virtual void HandleAnimEvent();  // vtable[56] HandleAnimEvent__12CTalkMonsterP14MonsterEvent_t
    virtual void IRelationship();  // vtable[62] IRelationship__12CTalkMonsterP11CBaseEntity
    virtual void ScheduleFromName();  // vtable[80] ScheduleFromName__12CTalkMonsterPCc
    virtual void StartTask();  // vtable[81] StartTask__12CTalkMonsterP6Task_t
    virtual void RunTask();  // vtable[82] RunTask__12CTalkMonsterP6Task_t
    virtual void GetScheduleOfType();  // vtable[83] GetScheduleOfType__12CTalkMonsteri
    virtual void CanPlaySentence();  // vtable[87] CanPlaySentence__12CTalkMonsteri
    virtual void PlaySentence();  // vtable[88] PlaySentence__12CTalkMonsterPCcfff
    virtual void PlayScriptedSentence();  // vtable[89] PlayScriptedSentence__12CTalkMonsterPCcfffiP11CBaseEntity
    virtual void SetActivity();  // vtable[92] SetActivity__12CTalkMonster8Activity
    virtual void PrescheduleThink();  // vtable[112] PrescheduleThink__12CTalkMonster
    virtual void StopFollowing();  // vtable[123] StopFollowing__12CTalkMonsteri
    virtual void DeclineFollowing();  // vtable[124] DeclineFollowing__12CTalkMonster
    virtual void SetAnswerQuestion();  // vtable[125] SetAnswerQuestion__12CTalkMonsterP12CTalkMonster
    virtual void FriendNumber();  // vtable[126] FriendNumber__12CTalkMonsteri
    virtual void 0();  // vtable[127] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    char f_106;  // +0x106 (262)
    char f_107;  // +0x107 (263)
    EHANDLE m_hEnemy;  // +0x108 (264) FIELD_EHANDLE  [save-table]
    EHANDLE m_hTargetEnt;  // +0x110 (272) FIELD_EHANDLE  [save-table]
    int f_114;  // +0x114 (276)
    int m_MonsterState;  // +0x180 (384) FIELD_INTEGER  [save-table]
    int m_IdealMonsterState;  // +0x184 (388) FIELD_INTEGER  [save-table]
    int f_214;  // +0x214 (532)
    int m_afMemory;  // +0x248 (584) FIELD_INTEGER  [save-table]
    char f_261;  // +0x261 (609)
    CBaseEntity* m_pCine;  // +0x2a4 (676) FIELD_CLASSPTR  [save-table]
    int m_bitsSaid;  // +0x2a8 (680) FIELD_INTEGER  [save-table]
    int m_nSpeak;  // +0x2ac (684) FIELD_INTEGER  [save-table]
    int f_2b0;  // +0x2b0 (688)
    int f_2b8;  // +0x2b8 (696)
    int f_2bc;  // +0x2bc (700)
    int f_2c0;  // +0x2c0 (704)
    int f_2c8;  // +0x2c8 (712)
    int f_2d4;  // +0x2d4 (724)
    int f_2d8;  // +0x2d8 (728)
    int f_2e4;  // +0x2e4 (740)
    int f_2e8;  // +0x2e8 (744)
    int f_2ec;  // +0x2ec (748)
    int f_2f0;  // +0x2f0 (752)
    float m_useTime;  // +0x2fc (764) FIELD_TIME  [save-table]
    string_t m_iszUse;  // +0x300 (768) FIELD_STRING  [save-table]
    string_t m_iszUnUse;  // +0x304 (772) FIELD_STRING  [save-table]
    float m_flLastSaidSmelled;  // +0x308 (776) FIELD_TIME  [save-table]
    float m_flStopTalkTime;  // +0x30c (780) FIELD_TIME  [save-table]
    EHANDLE m_hTalkTarget;  // +0x310 (784) FIELD_EHANDLE  [save-table]
    int f_314;  // +0x314 (788)
};
