// Spawn__13CFuncRotating @0x91c20 size=587
typedef struct st_491c20_3 {
    char padding_0[196];
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    char padding_d0[140];
    char field_15c;
} st_491c20_3;

typedef struct st_491c20_2 {
    char padding_0[68];
    char field_44;
    char padding_45[195];
    unsigned int field_108;
    unsigned int field_10c;
    unsigned int field_110;
    char padding_114[140];
    char field_1a0;
} st_491c20_2;

typedef struct st_491c20_0 {
    char padding_0[152];
    unsigned int field_98;
} st_491c20_0;

typedef struct st_491c20_1 {
    unsigned int field_0;
} st_491c20_1;

extern char HurtTouch__13CFuncRotatingP11CBaseEntity;
extern char RotatingUse__13CFuncRotatingP11CBaseEntityT18USE_TYPEf;
extern char SUB_CallUseToggle__11CBaseEntity;
extern st_491c20_1 *g_engfuncs.pfnSetModel;
extern st_491c20_0 *gpGlobals;

int Spawn__13CFuncRotating(float idx)
{
    double v4;  // mm7
    st_491c20_2 *v5;  // edx
    st_491c20_2 *v6;  // edx
    st_491c20_3 *v7;  // eax
    st_491c20_2 *v9;  // ecx
    float v0;  // [bp-0x34], Other Possible Types: unsigned int
    float v1;  // [bp-0x30], Other Possible Types: unsigned int
    float v2;  // [bp-0x2c], Other Possible Types: unsigned int

    *(float *)(*(unsigned int *)&idx + 112) = 99.0f;
    if (*(float *)(*(unsigned int *)&idx + 108) == 0.0f)
        *(unsigned int *)(*(unsigned int *)&idx + 108) = 0x3f800000;
    *(float *)(*(unsigned int *)&idx + 104) = 0.800000011920929f;
    if (*(char *)(*(int *)idx + 416) < 0)
    {
        v4 = 2.0;
    }
    else if (*(char *)(*(int *)idx + 417) & 1)
    {
        v4 = 1.25;
    }
    else
    {
        if (!(*(char *)(*(int *)idx + 417) & 2))
            goto LABEL_491c9c;
        v4 = 0.800000011920929;
    }
    *(float *)(*(unsigned int *)&idx + 104) = (float)v4;
LABEL_491c9c:
    if (*(float *)(*(unsigned int *)&idx + 100) == 0.0f)
        *(unsigned int *)(*(unsigned int *)&idx + 100) = 0x3f800000;
    v5 = *(int *)idx;
    if (*(char *)(*(int *)idx + 416) & 4)
    {
        v0 = 0;
        v1 = 0;
        v2 = 0x3f800000;
    }
    else
    {
        v5 = *(int *)idx;
        if (*(char *)(*(int *)idx + 416) & 8)
        {
            v0 = 0x3f800000;
            v1 = 0;
        }
        else
        {
            v5 = *(int *)idx;
            v0 = 0;
            v1 = 0x3f800000;
        }
        v2 = 0;
    }
    *(unsigned int *)&v5->field_44 = v0;
    *(unsigned int *)&v5->padding_45[3] = v1;
    *(unsigned int *)&v5->padding_45[7] = v2;
    v6 = *(int *)idx;
    if (v6->field_1a0 & 2)
    {
        v7 = &v6->field_44;
        v0 = (float)(-1.0 * *(float *)&v6->field_44);
        v1 = (float)(-1.0 * *(float *)&v7->padding_0[4]);
        v2 = (float)(-1.0 * *(float *)&v7->padding_0[8]);
        *(float *)&v6->field_44 = v0;
        *(float *)&v6->padding_45[3] = v1;
        *(float *)&v6->padding_45[7] = v2;
    }
    if (*(char *)(*(int *)idx + 416) & 64)
    {
        *(unsigned int *)(*(int *)idx + 268) = 0;
        *(unsigned int *)(*(int *)idx + 272) = 0xffffffff;
    }
    else
    {
        *(unsigned int *)(*(int *)idx + 268) = 4;
    }
    *(unsigned int *)(*(int *)idx + 264) = 7;
    UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 32) = &RotatingUse__13CFuncRotatingP11CBaseEntityT18USE_TYPEf;
    if (0.0 >= *(float *)(*(int *)idx + 504))
        *(float *)(*(int *)idx + 504) = 0.0f;
    v9 = *(int *)idx;
    if (v9->field_1a0 & 1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(0, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SUB_CallUseToggle__11CBaseEntity;
        *(float *)&v9->padding_45[191] = (float)(1.5 + *(float *)&v9->padding_45[0xbb]);
    }
    if (*(char *)(*(int *)idx + 416) & 32)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(*(int *)idx, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &HurtTouch__13CFuncRotatingP11CBaseEntity;
    }
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
}

