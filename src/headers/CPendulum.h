// CPendulum.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPendulum : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__9CPendulum
    virtual void KeyValue();  // vtable[2] KeyValue__9CPendulumP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__9CPendulumR5CSave
    virtual void Restore();  // vtable[4] Restore__9CPendulumR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__9CPendulum
    virtual void Touch();  // vtable[43] Touch__9CPendulumP11CBaseEntity
    virtual void Blocked();  // vtable[45] Blocked__9CPendulumP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    float m_accel;  // +0x64 (100) FIELD_FLOAT  [save-table]
    float m_distance;  // +0x68 (104) FIELD_FLOAT  [save-table]
    float m_time;  // +0x6c (108) FIELD_TIME  [save-table]
    float m_damp;  // +0x70 (112) FIELD_FLOAT  [save-table]
    float m_maxSpeed;  // +0x74 (116) FIELD_FLOAT  [save-table]
    float m_dampSpeed;  // +0x78 (120) FIELD_FLOAT  [save-table]
    Vector m_center;  // +0x7c (124) FIELD_VECTOR  [save-table]
    int f_080;  // +0x80 (128)
    int f_084;  // +0x84 (132)
    Vector m_start;  // +0x88 (136) FIELD_VECTOR  [save-table]
    int f_08c;  // +0x8c (140)
    int f_090;  // +0x90 (144)
};
