// CFuncTrain.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrain : public CBasePlatTrain {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CFuncTrain
    virtual void Precache();  // vtable[1] Precache__10CFuncTrain
    virtual void KeyValue();  // vtable[2] KeyValue__10CFuncTrainP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CFuncTrainR5CSave
    virtual void Restore();  // vtable[4] Restore__10CFuncTrainR8CRestore
    virtual void Activate();  // vtable[6] Activate__10CFuncTrain
    virtual void OverrideReset();  // vtable[26] OverrideReset__10CFuncTrain
    virtual void Use();  // vtable[44] Use__10CFuncTrainP11CBaseEntityT18USE_TYPEf
    virtual void Blocked();  // vtable[45] Blocked__10CFuncTrainP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    float f_084;  // +0x84 (132)
    float f_08c;  // +0x8c (140)
    int f_0dc;  // +0xdc (220)
    float f_108;  // +0x108 (264)
    int f_10c;  // +0x10c (268)
    int f_110;  // +0x110 (272)
    int f_114;  // +0x114 (276)
};
