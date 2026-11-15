// CDeadHEV.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CDeadHEV : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__8CDeadHEV
    virtual void KeyValue();  // vtable[2] KeyValue__8CDeadHEVP14KeyValueData_s
    virtual void Classify();  // vtable[8] Classify__8CDeadHEV
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_060;  // +0x60 (96)
    int m_bloodColor;  // +0x278 (632) FIELD_INTEGER  [save-table]
    int f_2a8;  // +0x2a8 (680)
};
