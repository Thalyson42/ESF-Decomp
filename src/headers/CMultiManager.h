// CMultiManager.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMultiManager : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__13CMultiManager
    virtual void KeyValue();  // vtable[2] KeyValue__13CMultiManagerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__13CMultiManagerR5CSave
    virtual void Restore();  // vtable[4] Restore__13CMultiManagerR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__13CMultiManager
    virtual void HasTarget();  // vtable[36] HasTarget__13CMultiManageri
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    int f_020;  // +0x20 (32)
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    EHANDLE m_hActivator;  // +0xd4 (212) FIELD_EHANDLE  [save-table]
    int m_cTargets;  // +0x104 (260) FIELD_INTEGER  [save-table]
    int m_index;  // +0x108 (264) FIELD_INTEGER  [save-table]
    float m_startTime;  // +0x10c (268) FIELD_TIME  [save-table]
    string_t m_iTargetName[16];  // +0x110 (272) FIELD_STRING  [save-table]
    char f_114;  // +0x114 (276)
    float m_flTargetDelay[16];  // +0x150 (336) FIELD_FLOAT  [save-table]
};
