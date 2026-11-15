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
    float m_flWait;  // +0x8c (140) FIELD_FLOAT  [save-table]
    float m_flLip;  // +0x90 (144) FIELD_FLOAT  [save-table]
    float m_flHeight;  // +0xd0 (208) FIELD_FLOAT  [save-table]
    Vector m_vecFinalAngle;  // +0xf0 (240) FIELD_VECTOR  [save-table]
    char m_bMoveSnd;  // +0x104 (260) FIELD_CHARACTER  [save-table]
    char m_bStopSnd;  // +0x105 (261) FIELD_CHARACTER  [save-table]
    float m_volume;  // +0x108 (264) FIELD_FLOAT  [save-table]
};
