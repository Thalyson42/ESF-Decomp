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
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_104;  // +0x104 (260)
    int f_108;  // +0x108 (264)
    float f_10c;  // +0x10c (268)
    float f_110;  // +0x110 (272)
    float f_114;  // +0x114 (276)
    float f_118;  // +0x118 (280)
    float f_11c;  // +0x11c (284)
    int f_120;  // +0x120 (288)
    int f_124;  // +0x124 (292)
};
