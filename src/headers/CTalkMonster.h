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
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    char f_106;  // +0x106 (262)
    char f_107;  // +0x107 (263)
    char f_108;  // +0x108 (264)
    char f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
    int f_180;  // +0x180 (384)
    int f_184;  // +0x184 (388)
    int f_214;  // +0x214 (532)
    char f_248;  // +0x248 (584)
    char f_261;  // +0x261 (609)
    int f_2a4;  // +0x2a4 (676)
    char f_2a8;  // +0x2a8 (680)
    int f_2ac;  // +0x2ac (684)
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
    float f_2fc;  // +0x2fc (764)
    float f_308;  // +0x308 (776)
    float f_30c;  // +0x30c (780)
    int f_310;  // +0x310 (784)
    int f_314;  // +0x314 (788)
};
