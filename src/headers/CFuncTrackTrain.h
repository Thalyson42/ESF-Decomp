// CFuncTrackTrain.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CFuncTrackTrain : public CBaseEntity {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__15CFuncTrackTrain
    virtual void Precache();  // vtable[1] Precache__15CFuncTrackTrain
    virtual void KeyValue();  // vtable[2] KeyValue__15CFuncTrackTrainP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__15CFuncTrackTrainR5CSave
    virtual void Restore();  // vtable[4] Restore__15CFuncTrackTrainR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__15CFuncTrackTrain
    virtual void OverrideReset();  // vtable[26] OverrideReset__15CFuncTrackTrain
    virtual void OnControls();  // vtable[31] OnControls__15CFuncTrackTrainP9entvars_s
    virtual void Use();  // vtable[44] Use__15CFuncTrackTrainP11CBaseEntityT18USE_TYPEf
    virtual void Blocked();  // vtable[45] Blocked__15CFuncTrackTrainP11CBaseEntity
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    CBaseEntity* m_ppath;  // +0x64 (100) FIELD_CLASSPTR  [save-table]
    float m_length;  // +0x68 (104) FIELD_FLOAT  [save-table]
    float m_height;  // +0x6c (108) FIELD_FLOAT  [save-table]
    float m_speed;  // +0x70 (112) FIELD_FLOAT  [save-table]
    float m_dir;  // +0x74 (116) FIELD_FLOAT  [save-table]
    float m_startSpeed;  // +0x78 (120) FIELD_FLOAT  [save-table]
    Vector m_controlMins;  // +0x7c (124) FIELD_VECTOR  [save-table]
    float f_080;  // +0x80 (128)
    float f_084;  // +0x84 (132)
    Vector m_controlMaxs;  // +0x88 (136) FIELD_VECTOR  [save-table]
    float f_08c;  // +0x8c (140)
    float f_090;  // +0x90 (144)
    int f_094;  // +0x94 (148)
    int m_sounds;  // +0x98 (152) FIELD_INTEGER  [save-table]
    float m_flVolume;  // +0x9c (156) FIELD_FLOAT  [save-table]
    float m_flBank;  // +0xa0 (160) FIELD_FLOAT  [save-table]
    float m_oldSpeed;  // +0xa4 (164) FIELD_FLOAT  [save-table]
    short f_0a8;  // +0xa8 (168)
};
