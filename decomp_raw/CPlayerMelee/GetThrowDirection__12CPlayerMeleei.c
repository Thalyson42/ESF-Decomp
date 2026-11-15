// GetThrowDirection__12CPlayerMeleei @0x100a10 size=410
typedef struct st_500a10_1 {
    char padding_0[292];
    struct st_500a10_2 *field_124;
} st_500a10_1;

typedef struct st_500a10_2 {
    struct st_500a10_0 *field_0;
} st_500a10_2;

typedef struct st_500a10_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_500a10_0;

typedef struct st_500a10_3 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_500a10_3;

extern st_500a10_3 *gpGlobals;

unsigned int GetThrowDirection__12CPlayerMeleei(st_500a10_1 *a0, unsigned int a1)
{
    unsigned int v24;  // eax
    unsigned int i;  // eax
    unsigned int *v27;  // edx
    unsigned int *v28;  // edx
    unsigned int idx;  // edx
    unsigned int *v30;  // ecx
    unsigned int v31;  // edi
    float v32;  // 128
    float v0;  // [bp-0x88]
    float v1;  // [bp-0x84]
    unsigned int v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    unsigned int v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    unsigned int v9;  // [bp-0x58]
    unsigned int v10;  // [bp-0x54]
    float v11;  // [bp-0x50]
    float v12;  // [bp-0x4c]
    float v13;  // [bp-0x48]
    float v14;  // [bp-0x44]
    float v15;  // [bp-0x40]
    float v16;  // [bp-0x3c]
    float v17;  // [bp-0x38]
    float v18;  // [bp-0x34]
    float v19;  // [bp-0x30]
    float v20;  // [bp-0x2c]
    float v21;  // [bp-0x28]
    float v22;  // [bp-0x24]
    float v23;  // [bp-0x20]

    v0 = 0;
    v24 = 5;
    do
    {
        i = v24;
        v24 = i - 1;
    } while (i >= 1);
    UTIL_MakeVectors(*(int *)a0->field_124 + 116);
    v1 = 0;
    v3 = 0;
    v5 = 1.0;
    v6 = v1;
    v7 = v3;
    v8 = v5;
    v2 = 0;
    v4 = 0;
    v5 = -1.0f;
    v9 = v2;
    v10 = v4;
    v11 = v5;
    v27 = &gpGlobals->field_40;
    v1 = -gpGlobals->field_40;
    v3 = -*(float *)&v27[1];
    v5 = -*(float *)&v27[2];
    v12 = v1;
    v13 = v3;
    v14 = v5;
    v15 = gpGlobals->field_40;
    v16 = gpGlobals->field_44;
    v17 = gpGlobals->field_48;
    v18 = gpGlobals->field_28;
    v19 = gpGlobals->field_2c;
    v20 = gpGlobals->field_30;
    v28 = &gpGlobals->field_28;
    v1 = -gpGlobals->field_28;
    v3 = -*(float *)&v28[1];
    v5 = -*(float *)&v28[2];
    v21 = v1;
    v22 = v3;
    v23 = v5;
    idx = (!a1) * 2;
    if ((int)idx > 5)
        return v31;
    v30 = *(int *)a0->field_124 + 32;
    do
    {
        v32 = (&v6)[3 * idx] * *(float *)(*(int *)a0->field_124 + 32) + (&v7)[3 * idx] * *(float *)&v30[1] + (&v8)[3 * idx] * *(float *)&v30[2];
        if (v32 > v0)
        {
            v0 = v32;
            v31 = idx;
        }
    } while ((idx += 1, (int)idx <= 5));
    return v31;
}

