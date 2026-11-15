// CFog.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFog : public CPointEntity {  // base: heuristica
public:
    virtual void Spawn();  // vtable[0] Spawn__4CFog
    virtual void KeyValue();  // vtable[2] KeyValue__4CFogP14KeyValueData_s
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_064;  // +0x64 (100)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    float f_070;  // +0x70 (112)
    float f_074;  // +0x74 (116)
};
