// Spawn__16CTriggerTeleport @0x12ebc0 size=61
typedef struct st_52ebc0_0 {
    char padding_0[20];
    unsigned int field_14;
    unsigned int field_18;
} st_52ebc0_0;

extern char TeleportTouch__12CBaseTriggerP11CBaseEntity;

short Spawn__16CTriggerTeleport(st_52ebc0_0 *a0)
{
    unsigned int v0;  // eax

    v0 = _INSERT(sub_489e50(a0), 0, 0);
    a0->field_14 = v0 | 0xffff0000;
    a0->field_18 = &TeleportTouch__12CBaseTriggerP11CBaseEntity;
    return v0;
}

