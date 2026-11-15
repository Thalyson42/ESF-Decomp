// CBasePlatTrain.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBasePlatTrain : public CBaseToggle {  // base: SDK
public:
    virtual void Precache();  // vtable[1] Precache__14CBasePlatTrain
    virtual void KeyValue();  // vtable[2] KeyValue__14CBasePlatTrainP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__14CBasePlatTrainR5CSave
    virtual void Restore();  // vtable[4] Restore__14CBasePlatTrainR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__14CBasePlatTrain
    virtual void IsTogglePlat();  // vtable[57] IsTogglePlat__14CBasePlatTrain
    virtual void 0();  // vtable[58] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    float f_08c;  // +0x8c (140)
    float f_090;  // +0x90 (144)
    float f_0d0;  // +0xd0 (208)
    float f_0f0;  // +0xf0 (240)
    char f_104;  // +0x104 (260)
    char f_105;  // +0x105 (261)
    float f_108;  // +0x108 (264)
};
