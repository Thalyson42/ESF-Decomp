// ShieldThink__7CShield @0x118df0 size=301
typedef struct st_518df0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_518df0_0;

typedef struct st_518df0_3 {
    char padding_0[400];
    unsigned int field_190;
} st_518df0_3;

typedef struct st_518df0_2 {
    char padding_0[408];
    unsigned int field_198;
} st_518df0_2;

typedef struct st_518df0_1 {
    float field_0;
} st_518df0_1;

extern st_518df0_1 *gpGlobals;

float ShieldThink__7CShield(float a0)
{
    st_518df0_0 **v6;  // eax
    unsigned int *v7;  // esi
    float v16;  // 128
    st_518df0_3 *v8;  // edx
    float v9;  // 112
    float v10;  // 112
    float v11;  // 112
    double v12;  // mm7
    double v13;  // mm6
    st_518df0_2 *v14;  // ecx
    float *v15;  // edx
    st_518df0_0 **v0;  // [bp-0x58]
    float v1;  // [bp-0x38]
    float v2;  // [bp-0x24]
    float v3;  // [bp-0x20]
    float v4;  // [bp-0x1c]

    v6 = CShield::GetOwner(a0, (!*(int *)(*(int *)a0 + 408) ? 0 : *(int *)(*(int *)a0 + 408) + 128));
    v0 = v6;
    v7 = &*v6->field_8;
    v8 = *(int *)a0 + 8;
    v9 = *v6->field_8 - *(float *)(*(int *)a0 + 8);
    v2 = v9;
    v10 = *(float *)&v7[1] - *(float *)&v8->padding_0[4];
    v3 = v10;
    v11 = *(float *)&v7[2] - *(float *)&v8->padding_0[8];
    v4 = v11;
    v12 = v9 * v9 + v10 * v10 + v11 * v11;
    v13 = sqrt(v12);
    if (isnan(v13))
        sqrt(*(unsigned int *)&v12);
    else
        v12 = v13;
    v1 = (float)v12;
    if (v1 >= 3.0f)
    {
        v14 = *(int *)a0;
        v15 = *v0;
        *(float *)&v14->padding_0[8] = v15[2];
        *(float *)&v14->padding_0[12] = v15[3];
        *(float *)&v14->padding_0[16] = v15[4];
        UTIL_SetOrigin(*(int *)a0, *(int *)a0 + 8);
    }
    if (*(float *)(*(unsigned int *)&a0 + 104) < *(float *)gpGlobals)
    {
        *(float *)(*(unsigned int *)&a0 + 104) = (float)(1.75 + *(float *)gpGlobals);
        *(float *)(*(int *)a0 + 480) = (float)(*(float *)(*(int *)a0 + 480) + 3.0);
    }
    v16 = *(float *)gpGlobals;
    *(float *)(*(int *)a0 + 260) = v16;
    return v16;
}

