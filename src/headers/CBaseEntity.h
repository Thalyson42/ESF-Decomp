// CBaseEntity.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBaseEntity {
public:
    virtual void Spawn();  // vtable[0] Spawn__11CBaseEntity
    virtual void Precache();  // vtable[1] Precache__11CBaseEntity
    virtual void KeyValue();  // vtable[2] KeyValue__11CBaseEntityP14KeyValueData_s
    virtual void Save();  // vtable[3] Save__11CBaseEntityR5CSave
    virtual void Restore();  // vtable[4] Restore__11CBaseEntityR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__11CBaseEntity
    virtual void Activate();  // vtable[6] Activate__11CBaseEntity
    virtual void SetObjectCollisionBox();  // vtable[7] SetObjectCollisionBox__11CBaseEntity
    virtual void Classify();  // vtable[8] Classify__11CBaseEntity
    virtual void DeathNotice();  // vtable[9] DeathNotice__11CBaseEntityP9entvars_s
    virtual void TraceAttack();  // vtable[10] TraceAttack__11CBaseEntityP9entvars_sfG6VectorP11TraceResulti
    virtual void TakeDamage();  // vtable[11] TakeDamage__11CBaseEntityP9entvars_sT1fi
    virtual void TakeHealth();  // vtable[12] TakeHealth__11CBaseEntityfi
    virtual void Killed();  // vtable[13] Killed__11CBaseEntityP9entvars_si
    virtual void BloodColor();  // vtable[14] BloodColor__11CBaseEntity
    virtual void TraceBleed();  // vtable[15] TraceBleed__11CBaseEntityfG6VectorP11TraceResulti
    virtual void IsTriggered();  // vtable[16] IsTriggered__11CBaseEntityP11CBaseEntity
    virtual void MyMonsterPointer();  // vtable[17] MyMonsterPointer__11CBaseEntity
    virtual void MySquadMonsterPointer();  // vtable[18] MySquadMonsterPointer__11CBaseEntity
    virtual void GetToggleState();  // vtable[19] GetToggleState__11CBaseEntity
    virtual void AddPoints();  // vtable[20] AddPoints__11CBaseEntityii
    virtual void AddPointsToTeam();  // vtable[21] AddPointsToTeam__11CBaseEntityii
    virtual void AddPlayerItem();  // vtable[22] AddPlayerItem__11CBaseEntityP15CBasePlayerItem
    virtual void RemovePlayerItem();  // vtable[23] RemovePlayerItem__11CBaseEntityP15CBasePlayerItem
    virtual void GetDelay();  // vtable[24] GetDelay__11CBaseEntity
    virtual void IsMoving();  // vtable[25] IsMoving__11CBaseEntity
    virtual void OverrideReset();  // vtable[26] OverrideReset__11CBaseEntity
    virtual void DamageDecal();  // vtable[27] DamageDecal__11CBaseEntityi
    virtual void SetToggleState();  // vtable[28] SetToggleState__11CBaseEntityi
    virtual void StartSneaking();  // vtable[29] StartSneaking__11CBaseEntity
    virtual void StopSneaking();  // vtable[30] StopSneaking__11CBaseEntity
    virtual void OnControls();  // vtable[31] OnControls__11CBaseEntityP9entvars_s
    virtual void IsSneaking();  // vtable[32] IsSneaking__11CBaseEntity
    virtual void IsAlive();  // vtable[33] IsAlive__11CBaseEntity
    virtual void IsBSPModel();  // vtable[34] IsBSPModel__11CBaseEntity
    virtual void ReflectGauss();  // vtable[35] ReflectGauss__11CBaseEntity
    virtual void HasTarget();  // vtable[36] HasTarget__11CBaseEntityi
    virtual void IsInWorld();  // vtable[37] IsInWorld__11CBaseEntity
    virtual void IsPlayer();  // vtable[38] IsPlayer__11CBaseEntity
    virtual void IsNetClient();  // vtable[39] IsNetClient__11CBaseEntity
    virtual void TeamID();  // vtable[40] TeamID__11CBaseEntity
    virtual void GetNextTarget();  // vtable[41] GetNextTarget__11CBaseEntity
    virtual void Think();  // vtable[42] Think__11CBaseEntity
    virtual void Touch();  // vtable[43] Touch__11CBaseEntityP11CBaseEntity
    virtual void Use();  // vtable[44] Use__11CBaseEntityP11CBaseEntityT18USE_TYPEf
    virtual void Blocked();  // vtable[45] Blocked__11CBaseEntityP11CBaseEntity
    virtual void Respawn();  // vtable[46] Respawn__11CBaseEntity
    virtual void UpdateOwner();  // vtable[47] UpdateOwner__11CBaseEntity
    virtual void FBecomeProne();  // vtable[48] FBecomeProne__11CBaseEntity
    virtual void Center();  // vtable[49] Center__11CBaseEntity
    virtual void EyePosition();  // vtable[50] EyePosition__11CBaseEntity
    virtual void EarPosition();  // vtable[51] EarPosition__11CBaseEntity
    virtual void BodyTarget();  // vtable[52] BodyTarget__11CBaseEntityRC6Vector
    virtual void Illumination();  // vtable[53] Illumination__11CBaseEntity
    virtual void FVisible();  // vtable[54] FVisible__11CBaseEntityP11CBaseEntity
    virtual void FVisible();  // vtable[55] FVisible__11CBaseEntityRC6Vector
    virtual void 0();  // vtable[56] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    CBaseEntity* m_pGoalEnt;  // +0x4 (4) FIELD_CLASSPTR  [save-table]
    void* m_pfnThink;  // +0xc (12) FIELD_FUNCTION  [save-table]
    int f_010;  // +0x10 (16)
    void* m_pfnTouch;  // +0x14 (20) FIELD_FUNCTION  [save-table]
    void* m_pfnUse;  // +0x1c (28) FIELD_FUNCTION  [save-table]
    void* m_pfnBlocked;  // +0x24 (36) FIELD_FUNCTION  [save-table]
    int f_060;  // +0x60 (96)
    int f_07c;  // +0x7c (124)
    void* f_208;  // +0x208 (520)
};
