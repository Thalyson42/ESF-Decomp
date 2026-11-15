// CScriptedSentence.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CScriptedSentence : public CBaseToggle {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__17CScriptedSentence
    virtual void KeyValue();  // vtable[2] KeyValue__17CScriptedSentenceP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__17CScriptedSentenceR5CSave
    virtual void Restore();  // vtable[4] Restore__17CScriptedSentenceR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__17CScriptedSentence
    virtual void Use();  // vtable[44] Use__17CScriptedSentenceP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    string_t m_iszSentence;  // +0x104 (260) FIELD_STRING  [save-table]
    string_t m_iszEntity;  // +0x108 (264) FIELD_STRING  [save-table]
    float m_flRadius;  // +0x10c (268) FIELD_FLOAT  [save-table]
    float m_flDuration;  // +0x110 (272) FIELD_FLOAT  [save-table]
    float m_flRepeat;  // +0x114 (276) FIELD_FLOAT  [save-table]
    float m_flAttenuation;  // +0x118 (280) FIELD_FLOAT  [save-table]
    float m_flVolume;  // +0x11c (284) FIELD_FLOAT  [save-table]
    BOOL m_active;  // +0x120 (288) FIELD_BOOLEAN  [save-table]
    string_t m_iszListener;  // +0x124 (292) FIELD_STRING  [save-table]
};
