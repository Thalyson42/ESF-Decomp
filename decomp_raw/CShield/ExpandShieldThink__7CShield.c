// ExpandShieldThink__7CShield @0x118c80 size=361
typedef struct st_518c80_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_518c80_0;

typedef struct st_518c80_3 {
    char padding_0[400];
    unsigned int field_190;
} st_518c80_3;

typedef struct st_518c80_2 {
    char padding_0[408];
    unsigned int field_198;
} st_518c80_2;

typedef struct st_518c80_1 {
    float field_0;
} st_518c80_1;

extern char ShieldThink__7CShield;
extern st_518c80_1 *gpGlobals;

double ExpandShieldThink__7CShield(float idx)
{
    st_518c80_0 **v12;  // eax
    unsigned int *v13;  // esi
    unsigned int v22;  // eax
    double v24;  // mm7
    double v25;  // mm7
    st_518c80_3 *v14;  // edx
    float v15;  // 112
    float v16;  // 112
    float v17;  // 112
    double v18;  // mm7
    double v19;  // mm6
    st_518c80_2 *v20;  // ecx
    float *v21;  // edx
    st_518c80_0 **v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x48]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    float v4;  // [bp-0x3c]
    float v5;  // [bp-0x38]
    float v6;  // [bp-0x34]
    float v7;  // [bp-0x30]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]

    v12 = CShield::GetOwner(idx, (!*(int *)(*(int *)idx + 408) ? 0 : *(int *)(*(int *)idx + 408) + 128));
    v0 = v12;
    v13 = &*v12->field_8;
    v14 = *(int *)idx + 8;
    v15 = *v12->field_8 - *(float *)(*(int *)idx + 8);
    v8 = v15;
    v16 = *(float *)&v13[1] - *(float *)&v14->padding_0[4];
    v9 = v16;
    v17 = *(float *)&v13[2] - *(float *)&v14->padding_0[8];
    v10 = v17;
    v18 = v15 * v15 + v16 * v16 + v17 * v17;
    v19 = sqrt(v18);
    if (isnan(v19))
        sqrt(*(unsigned int *)&v18);
    else
        v18 = v19;
    v5 = (float)v18;
    if (v5 >= 3.0f)
    {
        v20 = *(int *)idx;
        v21 = *v0;
        *(float *)&v20->padding_0[8] = v21[2];
        *(float *)&v20->padding_0[12] = v21[3];
        *(float *)&v20->padding_0[16] = v21[4];
        v22 = UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    }
    *(unsigned int *)(*(unsigned int *)&idx + 100) = *(int *)(*(unsigned int *)&idx + 100) + 20;
    if (*(int *)(*(unsigned int *)&idx + 100) > 109)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 100) = 110;
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v22, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &ShieldThink__7CShield;
    }
    v2 = (float)*(int *)(*(unsigned int *)&idx + 100);
    v3 = (float)*(int *)(*(unsigned int *)&idx + 100);
    v4 = (float)*(int *)(*(unsigned int *)&idx + 100);
    v1 = -*(int *)(*(unsigned int *)&idx + 100);
    v24 = (double)(int)v1;
    v5 = (float)v24;
    v6 = (float)v24;
    v7 = (float)v24;
    UTIL_SetSize(*(int *)idx, &v5, &v2);
    CShield::UpdateShieldClient(idx);
    v25 = 0.2 + *(float *)gpGlobals;
    *(float *)(*(int *)idx + 260) = (float)v25;
    return v25;
}

