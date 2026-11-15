// CFuncTrackChange.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrackChange : public CFuncPlatRot {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__16CFuncTrackChange
    virtual void Precache();  // vtable[1] Precache__16CFuncTrackChange
    virtual void KeyValue();  // vtable[2] KeyValue__16CFuncTrackChangeP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__16CFuncTrackChangeR5CSave
    virtual void Restore();  // vtable[4] Restore__16CFuncTrackChangeR8CRestore
    virtual void OverrideReset();  // vtable[26] OverrideReset__16CFuncTrackChange
    virtual void Touch();  // vtable[43] Touch__16CFuncTrackChangeP11CBaseEntity
    virtual void Use();  // vtable[44] Use__16CFuncTrackChangeP11CBaseEntityT18USE_TYPEf
    virtual void IsTogglePlat();  // vtable[57] IsTogglePlat__16CFuncTrackChange
    virtual void GoUp();  // vtable[58] GoUp__16CFuncTrackChange
    virtual void GoDown();  // vtable[59] GoDown__16CFuncTrackChange
    virtual void HitTop();  // vtable[60] HitTop__16CFuncTrackChange
    virtual void HitBottom();  // vtable[61] HitBottom__16CFuncTrackChange
    virtual void UpdateAutoTargets();  // vtable[62] UpdateAutoTargets__16CFuncTrackChangei
    virtual void 0();  // vtable[63] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int f_080;  // +0x80 (128)
    float f_0b0;  // +0xb0 (176)
    int f_0dc;  // +0xdc (220)
    float f_10c;  // +0x10c (268)
    float f_110;  // +0x110 (272)
    float f_114;  // +0x114 (276)
    float f_118;  // +0x118 (280)
    float f_11c;  // +0x11c (284)
    float f_120;  // +0x120 (288)
    int f_124;  // +0x124 (292)
    int f_128;  // +0x128 (296)
    int f_12c;  // +0x12c (300)
    int f_130;  // +0x130 (304)
    int f_134;  // +0x134 (308)
    int f_138;  // +0x138 (312)
    int f_13c;  // +0x13c (316)
    int f_140;  // +0x140 (320)
    int f_144;  // +0x144 (324)
};
