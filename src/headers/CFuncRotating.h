// CFuncRotating.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncRotating : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CFuncRotating
    virtual void Precache();  // vtable[1] Precache__13CFuncRotating
    virtual void KeyValue();  // vtable[2] KeyValue__13CFuncRotatingP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CFuncRotatingR5CSave
    virtual void Restore();  // vtable[4] Restore__13CFuncRotatingR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__13CFuncRotating
    virtual void Blocked();  // vtable[45] Blocked__13CFuncRotatingP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_014;  // +0x14 (20)
    int f_01c;  // +0x1c (28)
    int f_060;  // +0x60 (96)
    float f_064;  // +0x64 (100)
    float f_068;  // +0x68 (104)
    float f_06c;  // +0x6c (108)
    float f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
};
