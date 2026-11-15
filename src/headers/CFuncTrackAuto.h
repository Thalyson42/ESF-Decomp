// CFuncTrackAuto.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrackAuto : public CFuncTrackChange {  // base: SDK
public:
    virtual void Use();  // vtable[44] Use__14CFuncTrackAutoP11CBaseEntityT18USE_TYPEf
    virtual void UpdateAutoTargets();  // vtable[62] UpdateAutoTargets__14CFuncTrackAutoi
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    void* f_080;  // +0x80 (128)
    int f_124;  // +0x124 (292)
    int f_128;  // +0x128 (296)
    int f_12c;  // +0x12c (300)
    int f_13c;  // +0x13c (316)
    int f_140;  // +0x140 (320)
    int f_144;  // +0x144 (324)
};
