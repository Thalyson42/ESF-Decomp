// CMomentaryRotButton.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CMomentaryRotButton : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__19CMomentaryRotButton
    virtual void KeyValue();  // vtable[2] KeyValue__19CMomentaryRotButtonP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__19CMomentaryRotButtonR5CSave
    virtual void Restore();  // vtable[4] Restore__19CMomentaryRotButtonR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__19CMomentaryRotButton
    virtual void Use();  // vtable[44] Use__19CMomentaryRotButtonP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    BOOL m_fSequenceLoops;  // +0x7c (124) FIELD_BOOLEAN  [save-table]
    float m_flMoveDistance;  // +0x88 (136) FIELD_FLOAT  [save-table]
    int m_lastUsed;  // +0x104 (260) FIELD_INTEGER  [save-table]
    int m_direction;  // +0x108 (264) FIELD_INTEGER  [save-table]
    float m_returnSpeed;  // +0x10c (268) FIELD_FLOAT  [save-table]
    Vector m_start;  // +0x110 (272) FIELD_VECTOR  [save-table]
    int f_114;  // +0x114 (276)
    int f_118;  // +0x118 (280)
    Vector m_end;  // +0x11c (284) FIELD_VECTOR  [save-table]
    int f_120;  // +0x120 (288)
    int f_124;  // +0x124 (292)
    int m_sounds;  // +0x128 (296) FIELD_INTEGER  [save-table]
};
