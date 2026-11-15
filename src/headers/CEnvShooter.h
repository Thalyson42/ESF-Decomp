// CEnvShooter.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CEnvShooter : public CGibShooter {  // base: SDK
public:
    virtual void Precache();  // vtable[1] Precache__11CEnvShooter
    virtual void KeyValue();  // vtable[2] KeyValue__11CEnvShooterP14KeyValueData_s
    virtual void CreateGib();  // vtable[56] CreateGib__11CEnvShooter
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int m_iGibMaterial;  // +0x74 (116) FIELD_INTEGER  [save-table]
    int m_iGibModelIndex;  // +0x78 (120) FIELD_INTEGER  [save-table]
};
