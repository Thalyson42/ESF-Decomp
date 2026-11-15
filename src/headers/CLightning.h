// CLightning.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CLightning : public CBeam {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CLightning
    virtual void Precache();  // vtable[1] Precache__10CLightning
    virtual void KeyValue();  // vtable[2] KeyValue__10CLightningP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CLightningR5CSave
    virtual void Restore();  // vtable[4] Restore__10CLightningR8CRestore
    virtual void Activate();  // vtable[6] Activate__10CLightning
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    int f_060;  // +0x60 (96)
    int m_active;  // +0x64 (100) FIELD_INTEGER  [save-table]
    string_t m_iszStartEntity;  // +0x68 (104) FIELD_STRING  [save-table]
    string_t m_iszEndEntity;  // +0x6c (108) FIELD_STRING  [save-table]
    float m_life;  // +0x70 (112) FIELD_FLOAT  [save-table]
    int m_boltWidth;  // +0x74 (116) FIELD_INTEGER  [save-table]
    int m_noiseAmplitude;  // +0x78 (120) FIELD_INTEGER  [save-table]
    int m_brightness;  // +0x7c (124) FIELD_INTEGER  [save-table]
    int m_speed;  // +0x80 (128) FIELD_INTEGER  [save-table]
    float m_restrike;  // +0x84 (132) FIELD_FLOAT  [save-table]
    int m_spriteTexture;  // +0x88 (136) FIELD_INTEGER  [save-table]
    string_t m_iszSpriteName;  // +0x8c (140) FIELD_STRING  [save-table]
    int m_frameStart;  // +0x90 (144) FIELD_INTEGER  [save-table]
    float m_radius;  // +0x94 (148) FIELD_FLOAT  [save-table]
};
