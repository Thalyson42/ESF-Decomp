// CGunTarget.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGunTarget : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CGunTarget
    virtual void Save();  // vtable[3] Save__10CGunTargetR5CSave
    virtual void Restore();  // vtable[4] Restore__10CGunTargetR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__10CGunTarget
    virtual void Activate();  // vtable[6] Activate__10CGunTarget
    virtual void Classify();  // vtable[8] Classify__10CGunTarget
    virtual void TakeDamage();  // vtable[11] TakeDamage__10CGunTargetP9entvars_sT1fi
    virtual void BloodColor();  // vtable[14] BloodColor__10CGunTarget
    virtual void Use();  // vtable[44] Use__10CGunTargetP11CBaseEntityT18USE_TYPEf
    virtual void BodyTarget();  // vtable[52] BodyTarget__10CGunTargetRC6Vector
    virtual void Stop();  // vtable[75] Stop__10CGunTarget
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    void* m_pfnCallWhenMoveDone;  // +0xdc (220) FIELD_FUNCTION  [save-table]
    EHANDLE m_hTargetEnt;  // +0x110 (272) FIELD_EHANDLE  [save-table]
    BOOL m_on;  // +0x2a8 (680) FIELD_BOOLEAN  [save-table]
};
