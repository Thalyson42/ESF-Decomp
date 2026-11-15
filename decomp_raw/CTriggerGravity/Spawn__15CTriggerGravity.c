// Spawn__15CTriggerGravity @0x12f010 size=61
typedef struct st_52f010_0 {
    char padding_0[20];
    unsigned int field_14;
    unsigned int field_18;
} st_52f010_0;

extern char GravityTouch__15CTriggerGravityP11CBaseEntity;

short Spawn__15CTriggerGravity(st_52f010_0 *a0)
{
    unsigned int v0;  // eax

    v0 = _INSERT(CBaseTrigger::InitTrigger(a0), 0, 0);
    a0->field_14 = v0 | 0xffff0000;
    a0->field_18 = &GravityTouch__15CTriggerGravityP11CBaseEntity;
    return v0;
}

