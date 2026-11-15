// CGameTeamMaster.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CGameTeamMaster : public CRulePointEntity {  // base: SDK
public:
    virtual void KeyValue();  // vtable[2] KeyValue__15CGameTeamMasterP14KeyValueData_s
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__15CGameTeamMaster
    virtual void IsTriggered();  // vtable[16] IsTriggered__15CGameTeamMasterP11CBaseEntity
    virtual void TeamID();  // vtable[40] TeamID__15CGameTeamMaster
    virtual void Use();  // vtable[44] Use__15CGameTeamMasterP11CBaseEntityT18USE_TYPEf
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    void* f_060;  // +0x60 (96)
    int f_068;  // +0x68 (104)
    int f_06c;  // +0x6c (108)
};
