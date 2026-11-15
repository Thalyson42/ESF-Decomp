// CPathCorner.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPathCorner : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CPathCorner
    virtual void KeyValue();  // vtable[2] KeyValue__11CPathCornerP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CPathCornerR5CSave
    virtual void Restore();  // vtable[4] Restore__11CPathCornerR8CRestore
    virtual void GetDelay();  // vtable[24] GetDelay__11CPathCorner
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float f_064;  // +0x64 (100)
};
