// Spawn__9CEnvModel @0xb88b0 size=399
typedef struct st_4b88b0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4b88b0_0;

typedef struct st_4b88b0_1 {
    unsigned int field_0;
} st_4b88b0_1;

extern char EnvTouch__9CEnvModelP11CBaseEntity;
extern char AnimateThink__9CEnvModel;
extern st_4b88b0_1 *g_6167c8;
extern st_4b88b0_0 *gpGlobals;

short Spawn__9CEnvModel(double a0, float idx)
{
    unsigned int *v2;  // eax
    unsigned int *v3;  // edx
    double v4;  // mm7
    double v5;  // mm7
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    double v0;  // [bp-0x44]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    g_6167c8(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    sub_48cb80(idx);
    v2 = *(int *)idx;
    *(float *)(*(unsigned int *)&idx + 700) = (*(float *)&v2[58] - *(float *)&v2[55]) * (*(float *)&v2[59] - *(float *)&v2[56]) * (*(float *)&v2[60] - *(float *)&v2[57]);
    v0 = 0.3333333333333333;
    sub_48b270((unsigned int)(*(float *)(*(unsigned int *)&idx + 700) >> 0));
    *(float *)(*(unsigned int *)&idx + 700) = *(float *)(*(unsigned int *)&idx + 700);
    v3 = *(int *)idx;
    *(float *)(*(unsigned int *)&idx + 684) = *(float *)&v3[60];
    *(float *)(*(unsigned int *)&idx + 688) = *(float *)&v3[57];
    v4 = *(float *)&v3[55];
    if (v4 >= *(float *)&v3[56])
        v4 = *(float *)(*(int *)idx + 224);
    *(float *)(*(unsigned int *)&idx + 696) = (float)v4;
    v5 = *(float *)(*(int *)idx + 232);
    if (v5 <= *(float *)(*(int *)idx + 236))
        v5 = *(float *)(*(int *)idx + 236);
    *(float *)(*(unsigned int *)&idx + 692) = (float)v5;
    sub_48db50(*(int *)idx, *(int *)idx + 8);
    *(unsigned int *)(*(int *)idx + 264) = 5;
    *(unsigned int *)(*(int *)idx + 284) = 0;
    *(unsigned int *)(*(int *)idx + 364) = 0x3f800000;
    v7 = _INSERT(sub_489490(idx), 0, 0) | 0xffff0000;
    *(unsigned int *)(*(unsigned int *)&idx + 20) = v7;
    *(char **)(*(unsigned int *)&idx + 24) = &EnvTouch__9CEnvModelP11CBaseEntity;
    v8 = _INSERT(v7, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v8 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &AnimateThink__9CEnvModel;
    *(unsigned int *)(*(unsigned int *)&idx + 680) = 0;
    return v8;
}

