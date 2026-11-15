// CEnvModel.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvModel : public CBaseMonster {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__9CEnvModel
    virtual void Precache();  // vtable[1] Precache__9CEnvModel
    virtual void KeyValue();  // vtable[2] KeyValue__9CEnvModelP14KeyValueData_s
    virtual void TakeDamage();  // vtable[11] TakeDamage__9CEnvModelP9entvars_sT1fi
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    int f_2a8;  // +0x2a8 (680)
    int f_2bc;  // +0x2bc (700)
    short f_2c0;  // +0x2c0 (704)
};
