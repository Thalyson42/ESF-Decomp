// CBreakable.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBreakable : public CBaseDelay {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CBreakable
    virtual void Precache();  // vtable[1] Precache__10CBreakable
    virtual void KeyValue();  // vtable[2] KeyValue__10CBreakableP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CBreakableR5CSave
    virtual void Restore();  // vtable[4] Restore__10CBreakableR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__10CBreakable
    virtual void TraceAttack();  // vtable[10] TraceAttack__10CBreakableP9entvars_sfG6VectorP11TraceResulti
    virtual void TakeDamage();  // vtable[11] TakeDamage__10CBreakableP9entvars_sT1fi
    virtual void DamageDecal();  // vtable[27] DamageDecal__10CBreakablei
    virtual void Use();  // vtable[44] Use__10CBreakableP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_060;  // +0x60 (96)
    int f_064;  // +0x64 (100)
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
    float f_078;  // +0x78 (120)
    int f_07c;  // +0x7c (124)
    int f_080;  // +0x80 (128)
};
