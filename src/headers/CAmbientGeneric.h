// CAmbientGeneric.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CAmbientGeneric : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CAmbientGeneric
    virtual void Precache();  // vtable[1] Precache__15CAmbientGeneric
    virtual void KeyValue();  // vtable[2] KeyValue__15CAmbientGenericP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__15CAmbientGenericR5CSave
    virtual void Restore();  // vtable[4] Restore__15CAmbientGenericR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__15CAmbientGeneric
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    float m_flAttenuation;  // +0x64 (100) FIELD_FLOAT  [save-table]
    char m_dpv[100];  // +0x68 (104) FIELD_CHARACTER  [save-table]
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
    int f_078;  // +0x78 (120)
    int f_07c;  // +0x7c (124)
    int f_080;  // +0x80 (128)
    int f_084;  // +0x84 (132)
    int f_088;  // +0x88 (136)
    int f_08c;  // +0x8c (140)
    int f_090;  // +0x90 (144)
    int f_094;  // +0x94 (148)
    int f_098;  // +0x98 (152)
    int f_09c;  // +0x9c (156)
    int f_0a0;  // +0xa0 (160)
    int f_0a4;  // +0xa4 (164)
    int f_0a8;  // +0xa8 (168)
    int f_0ac;  // +0xac (172)
    int f_0b0;  // +0xb0 (176)
    int f_0b4;  // +0xb4 (180)
    int f_0b8;  // +0xb8 (184)
    int f_0bc;  // +0xbc (188)
    int f_0c0;  // +0xc0 (192)
    int f_0c4;  // +0xc4 (196)
    int f_0c8;  // +0xc8 (200)
    BOOL m_fActive;  // +0xcc (204) FIELD_BOOLEAN  [save-table]
    BOOL m_fLooping;  // +0xd0 (208) FIELD_BOOLEAN  [save-table]
};
