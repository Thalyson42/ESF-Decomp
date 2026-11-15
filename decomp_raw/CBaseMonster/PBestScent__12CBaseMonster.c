// PBestScent__12CBaseMonster @0xd4410 size=280
typedef struct st_4d4410_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4d4410_1;

typedef struct st_4d4410_2 {
    float field_0;
    float field_4;
    float field_8;
    char padding_c[16];
    int field_1c;
} st_4d4410_2;

typedef struct st_4d4410_0 {
    struct st_4d4410_1 *field_0;
    char padding_4[556];
    int field_230;
} st_4d4410_0;

typedef struct st_4d4410_3 {
    unsigned int field_0;
} st_4d4410_3;

extern st_4d4410_3 *g_6168b4;

unsigned int PBestScent__12CBaseMonster(st_4d4410_0 *a0)
{
    int v6;  // edi
    st_4d4410_2 *v7;  // esi
    unsigned int *v8;  // edx
    float v9;  // 112
    float v10;  // 112
    float v11;  // 112
    double v12;  // mm7
    double v13;  // mm6
    float v0;  // [bp-0x4c]
    int v1;  // [bp-0x48]
    float v2;  // [bp-0x38]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v1 = -0x1;
    v0 = 8192.0f;
    v6 = a0->field_230;
    if (a0->field_230 == -0x1)
    {
        g_6168b4(2, "ERROR! PBestScent() has empty soundlist!\n");
        return 0;
    }
    do
    {
        v7 = sub_488470(v6);
        if (sub_48da10(v7))
        {
            v8 = &a0->field_0->field_8;
            v9 = v7->field_0 - a0->field_0->field_8;
            v3 = v9;
            v10 = v7->field_4 - *(float *)&v8[1];
            v4 = v10;
            v11 = v7->field_8 - *(float *)&v8[2];
            v5 = v11;
            v12 = v9 * v9 + v10 * v10 + v11 * v11;
            v13 = sqrt(v12);
            if (isnan(v13))
                sub_487dc0(*(unsigned int *)&v12);
            else
                v12 = v13;
            v2 = (float)v12;
            if (v2 < v0)
            {
                v1 = v6;
                v0 = v2;
            }
        }
    } while ((v6 = v7->field_1c, v7->field_1c != -0x1));
    return (v1 < 0 ? 0 : sub_488470(v1));
}

