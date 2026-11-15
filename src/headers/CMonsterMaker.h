// CMonsterMaker.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMonsterMaker : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CMonsterMaker
    virtual void Precache();  // vtable[1] Precache__13CMonsterMaker
    virtual void KeyValue();  // vtable[2] KeyValue__13CMonsterMakerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CMonsterMakerR5CSave
    virtual void Restore();  // vtable[4] Restore__13CMonsterMakerR8CRestore
    virtual void DeathNotice();  // vtable[9] DeathNotice__13CMonsterMakerP9entvars_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_01c;  // +0x1c (28)
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    float f_064;  // +0x64 (100)
    int f_2a8;  // +0x2a8 (680)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    int f_2b4;  // +0x2b4 (692)
    float f_2b8;  // +0x2b8 (696)
    int f_2bc;  // +0x2bc (700)
    int f_2c0;  // +0x2c0 (704)
};
