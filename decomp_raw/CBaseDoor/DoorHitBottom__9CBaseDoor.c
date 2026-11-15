// DoorHitBottom__9CBaseDoor @0xacad0 size=313
typedef struct st_4acad0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4acad0_0;

extern char DoorTouch__9CBaseDoorP11CBaseEntity;
extern st_4acad0_0 *gpGlobals;

int DoorHitBottom__9CBaseDoor(float idx)
{
    unsigned int *v6;  // eax
    unsigned int v8;  // esi
    unsigned int *v10;  // eax
    unsigned int v11;  // eax
    int v12;  // eax
    float v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]

    v6 = *(int *)idx;
    if ((int)v6[104] >= 0)
    {
        EMIT_SOUND_DYN(v6[130], 6, v6[123] + gpGlobals->field_98, 0, 0, 32, 100);
        EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 6, *(int *)(*(int *)idx + 496) + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
    }
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 1;
    if (*(char *)(*(int *)idx + 417) & 1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(*(int *)idx, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &DoorTouch__9CBaseDoorP11CBaseEntity;
    }
    v4 = 0;
    v3 = 3;
    v8 = *(unsigned int *)&idx + 212;
    CBaseDelay::SUB_UseTargets(idx, EHANDLE::__opP11CBaseEntity(v8));
    v10 = *(int *)idx;
    if (!v10[116])
        return v10;
    v11 = _INSERT(v10, 0, (char)v10[104] ^ 1);
    if (!!((char)v10[104] & 1))
        return v11;
    v2 = 0;
    v1 = 3;
    v0 = idx;
    v12 = EHANDLE::__opP11CBaseEntity(v8);
    return FireTargets(*(int *)(*(int *)idx + 464) + gpGlobals->field_98, v12);
}

