// CPathTrack.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CPathTrack : public CPointEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__10CPathTrack
    virtual void KeyValue();  // vtable[2] KeyValue__10CPathTrackP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__10CPathTrackR5CSave
    virtual void Restore();  // vtable[4] Restore__10CPathTrackR8CRestore
    virtual void Activate();  // vtable[6] Activate__10CPathTrack
    virtual void Use();  // vtable[44] Use__10CPathTrackP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
    int f_070;  // +0x70 (112)
    int f_074;  // +0x74 (116)
};
