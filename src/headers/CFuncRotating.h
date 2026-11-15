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
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    float m_flFanFriction;  // +0x64 (100) FIELD_FLOAT  [save-table]
    float m_flAttenuation;  // +0x68 (104) FIELD_FLOAT  [save-table]
    float m_flVolume;  // +0x6c (108) FIELD_FLOAT  [save-table]
    float m_pitch;  // +0x70 (112) FIELD_FLOAT  [save-table]
    int m_sounds;  // +0x74 (116) FIELD_INTEGER  [save-table]
};
