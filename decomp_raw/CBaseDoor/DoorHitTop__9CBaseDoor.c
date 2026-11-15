// DoorHitTop__9CBaseDoor @0xac810 size=389
typedef struct st_4ac810_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ac810_0;

extern char DoorTouch__9CBaseDoorP11CBaseEntity;
extern char DoorGoDown__9CBaseDoor;
extern st_4ac810_0 *gpGlobals;

int DoorHitTop__9CBaseDoor(float idx)
{
    unsigned int *v6;  // eax
    unsigned int *v7;  // eax
    unsigned int *v9;  // eax
    int v11;  // eax
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
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 0;
    v7 = *(int *)idx;
    if (!((char)v7[104] & 32))
    {
        v9 = *(int *)idx;
        *(float *)&v9[65] = *(float *)&v9[64] + *(float *)(*(unsigned int *)&idx + 140);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v9, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &DoorGoDown__9CBaseDoor;
        if (*(float *)(*(unsigned int *)&idx + 140) == -1.0f)
            *(float *)(*(int *)idx + 260) = -1.0f;
    }
    else if (!(*((char *)&v7[104] + 1) & 1))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(v7, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &DoorTouch__9CBaseDoorP11CBaseEntity;
    }
    if (*(int *)(*(int *)idx + 464) && *(char *)(*(int *)idx + 416) & 1)
    {
        v2 = 0;
        v1 = 3;
        v0 = idx;
        v11 = EHANDLE::__opP11CBaseEntity(*(unsigned int *)&idx + 212);
        FireTargets(*(int *)(*(int *)idx + 464) + gpGlobals->field_98, v11);
    }
    v4 = 0;
    v3 = 3;
    return CBaseDelay::SUB_UseTargets(idx, EHANDLE::__opP11CBaseEntity(*(unsigned int *)&idx + 212));
}

