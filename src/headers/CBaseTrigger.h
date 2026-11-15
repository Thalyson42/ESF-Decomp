// CBaseTrigger.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseTrigger : public CBaseToggle {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__12CBaseTriggerP14KeyValueData_s
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__12CBaseTrigger
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    int f_018;  // +0x18 (24)
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    int m_cTriggersLeft;  // +0xcc (204) FIELD_INTEGER  [save-table]
    EHANDLE m_hActivator;  // +0xd4 (212) FIELD_EHANDLE  [save-table]
    int m_bitsDamageInflict;  // +0xfc (252) FIELD_INTEGER  [save-table]
    string_t m_sMaster;  // +0x100 (256) FIELD_STRING  [save-table]
};
