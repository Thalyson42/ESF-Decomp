// CChangeLevel.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CChangeLevel : public CBaseTrigger {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__12CChangeLevel
    virtual void KeyValue();  // vtable[2] KeyValue__12CChangeLevelP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__12CChangeLevelR5CSave
    virtual void Restore();  // vtable[4] Restore__12CChangeLevelR8CRestore
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_014;  // +0x14 (20)
    int f_018;  // +0x18 (24)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    void* f_060;  // +0x60 (96)
    char f_0d4;  // +0xd4 (212)
    char f_104;  // +0x104 (260)
    char f_124;  // +0x124 (292)
    int f_144;  // +0x144 (324)
    float f_148;  // +0x148 (328)
};
