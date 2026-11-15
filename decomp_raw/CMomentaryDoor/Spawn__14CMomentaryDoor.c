// Spawn__14CMomentaryDoor @0xad390 size=519
typedef struct st_4ad390_2 {
    char padding_0[68];
    char field_44;
    char padding_45[195];
    unsigned int field_108;
    unsigned int field_10c;
} st_4ad390_2;

typedef struct st_4ad390_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ad390_0;

typedef struct st_4ad390_1 {
    unsigned int field_0;
} st_4ad390_1;

extern st_4ad390_1 *g_engfuncs.pfnSetModel;
extern st_4ad390_0 *gpGlobals;

int Spawn__14CMomentaryDoor(float idx)
{
    st_4ad390_2 *v8;  // edx
    float v9;  // 128
    st_4ad390_2 *v10;  // edx
    unsigned int *v11;  // eax
    unsigned int index;  // eax
    st_4ad390_2 *v13;  // edx
    float v0;  // [bp-0x48]
    float v1;  // [bp-0x44]
    float v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    SetMovedir(*(int *)idx);
    *(unsigned int *)(*(int *)idx + 268) = 4;
    *(unsigned int *)(*(int *)idx + 264) = 7;
    UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    if (*(float *)(*(int *)idx + 504) == 0.0f)
        *(float *)(*(int *)idx + 504) = 100.0f;
    if (*(float *)(*(int *)idx + 480) == 0.0f)
        *(float *)(*(int *)idx + 480) = 2.0f;
    v8 = *(int *)idx;
    *(int *)(*(unsigned int *)&idx + 156) = *(int *)&v8->padding_0[8];
    *(int *)(*(unsigned int *)&idx + 160) = *(int *)&v8->padding_0[12];
    *(int *)(*(unsigned int *)&idx + 164) = *(int *)&v8->padding_0[16];
    v0 = (float)(fabs((*(float *)&v8->padding_45[183] - 2.0) * *(float *)&v8->padding_45[7]) + fabs((*(float *)&v8->padding_45[179] - 2.0) * *(float *)&v8->padding_45[3]) + fabs((*(float *)&v8->padding_45[175] - 2.0) * *(float *)&v8->field_44) - *(float *)(*(unsigned int *)&idx + 144));
    v9 = v0;
    v10 = *(int *)idx;
    v11 = &v10->field_44;
    v1 = v9 * *(float *)&v10->field_44;
    v2 = v9 * *(float *)&v11[1];
    v3 = v9 * *(float *)&v11[2];
    index = *(unsigned int *)&idx + 156;
    v4 = v1 + *(float *)(*(unsigned int *)&idx + 156);
    v5 = v2 + *(float *)(index + 4);
    v6 = *(float *)(index + 8) + v3;
    *(float *)(*(unsigned int *)&idx + 168) = v4;
    *(float *)(*(unsigned int *)&idx + 172) = v5;
    *(float *)(*(unsigned int *)&idx + 176) = v6;
    if (v10[1].padding_45[75] & 1)
    {
        UTIL_SetOrigin(v10, *(unsigned int *)&idx + 168);
        *(int *)(*(unsigned int *)&idx + 168) = *(int *)(*(unsigned int *)&idx + 156);
        *(int *)(*(unsigned int *)&idx + 172) = *(int *)(*(unsigned int *)&idx + 160);
        *(int *)(*(unsigned int *)&idx + 176) = *(int *)(*(unsigned int *)&idx + 164);
        v13 = *(int *)idx;
        *(int *)(*(unsigned int *)&idx + 156) = *(int *)&v13->padding_0[8];
        *(int *)(*(unsigned int *)&idx + 160) = *(int *)&v13->padding_0[12];
        *(int *)(*(unsigned int *)&idx + 164) = *(int *)&v13->padding_0[16];
    }
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
}

