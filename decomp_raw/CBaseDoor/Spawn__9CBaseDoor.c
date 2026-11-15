// Spawn__9CBaseDoor @0xabad0 size=580
typedef struct st_4abad0_2 {
    char padding_0[68];
    char field_44;
    char padding_45[195];
    unsigned int field_108;
    unsigned int field_10c;
    unsigned int field_110;
} st_4abad0_2;

typedef struct st_4abad0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4abad0_0;

typedef struct st_4abad0_1 {
    unsigned int field_0;
} st_4abad0_1;

extern char DoorTouch__9CBaseDoorP11CBaseEntity;
extern st_4abad0_1 *g_engfuncs.pfnSetModel;
extern st_4abad0_0 *gpGlobals;

int Spawn__9CBaseDoor(float idx)
{
    st_4abad0_2 *v8;  // eax
    st_4abad0_2 *v9;  // edx
    float v10;  // 128
    st_4abad0_2 *v11;  // edx
    unsigned int *v12;  // eax
    unsigned int index;  // eax
    st_4abad0_2 *v14;  // edx
    st_4abad0_2 *v15;  // eax
    unsigned int v16;  // eax
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    SetMovedir(*(int *)idx);
    v8 = *(int *)idx;
    if (v8->field_110)
    {
        *(unsigned int *)(*(int *)idx + 268) = 0;
        *(char *)(*(int *)idx + 419) = *(char *)(*(int *)idx + 419) | 128;
    }
    else if (v8[1].padding_45[71] & 8)
    {
        v8->field_10c = 0;
    }
    else
    {
        *(unsigned int *)(*(int *)idx + 268) = 4;
    }
    *(unsigned int *)(*(int *)idx + 264) = 7;
    UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    if (*(float *)(*(int *)idx + 504) == 0.0f)
        *(float *)(*(int *)idx + 504) = 100.0f;
    v9 = *(int *)idx;
    *(int *)(*(unsigned int *)&idx + 156) = *(int *)&v9->padding_0[8];
    *(int *)(*(unsigned int *)&idx + 160) = *(int *)&v9->padding_0[12];
    *(int *)(*(unsigned int *)&idx + 164) = *(int *)&v9->padding_0[16];
    v0 = (float)(fabs((*(float *)&v9->padding_45[183] - 2.0) * *(float *)&v9->padding_45[7]) + fabs((*(float *)&v9->padding_45[179] - 2.0) * *(float *)&v9->padding_45[3]) + fabs((*(float *)&v9->padding_45[175] - 2.0) * *(float *)&v9->field_44) - *(float *)(*(unsigned int *)&idx + 144));
    v10 = v0;
    v11 = *(int *)idx;
    v12 = &v11->field_44;
    v1 = v10 * *(float *)&v11->field_44;
    v2 = v10 * *(float *)&v12[1];
    v3 = v10 * *(float *)&v12[2];
    index = *(unsigned int *)&idx + 156;
    v4 = v1 + *(float *)(*(unsigned int *)&idx + 156);
    v5 = v2 + *(float *)(index + 4);
    v6 = *(float *)(index + 8) + v3;
    *(float *)(*(unsigned int *)&idx + 168) = v4;
    *(float *)(*(unsigned int *)&idx + 172) = v5;
    *(float *)(*(unsigned int *)&idx + 176) = v6;
    if (v11[1].padding_45[71] & 1)
    {
        UTIL_SetOrigin(v11, *(unsigned int *)&idx + 168);
        *(int *)(*(unsigned int *)&idx + 168) = *(int *)(*(unsigned int *)&idx + 156);
        *(int *)(*(unsigned int *)&idx + 172) = *(int *)(*(unsigned int *)&idx + 160);
        *(int *)(*(unsigned int *)&idx + 176) = *(int *)(*(unsigned int *)&idx + 164);
        v14 = *(int *)idx;
        *(int *)(*(unsigned int *)&idx + 156) = *(int *)&v14->padding_0[8];
        *(int *)(*(unsigned int *)&idx + 160) = *(int *)&v14->padding_0[12];
        *(int *)(*(unsigned int *)&idx + 164) = *(int *)&v14->padding_0[16];
    }
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 1;
    v15 = *(int *)idx;
    if (!(v15[1].padding_45[72] & 1))
    {
        v16 = _INSERT(v15, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 20) = v16 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &DoorTouch__9CBaseDoorP11CBaseEntity;
        return v16 | 0xffff0000;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    return v15;
}

