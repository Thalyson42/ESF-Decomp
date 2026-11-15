// MakeDamageBloodDecal__12CBaseMonsterifP11TraceResultRC6Vector @0xa7040 size=463
typedef struct st_4a7040_1 {
    char padding_0[64];
    struct st_4a7040_2 *field_40;
    char padding_44[72];
    struct st_4a7040_2 *field_8c;
} st_4a7040_1;

typedef struct st_4a7040_2 {
    unsigned int field_0;
} st_4a7040_2;

typedef struct st_4a7040_0 {
    char padding_0[432];
    float field_1b0;
    char padding_1b4[84];
    int field_208;
} st_4a7040_0;

typedef struct st_4a7040_3 {
    struct st_4a7040_0 *field_0;
    char padding_4[92];
    struct st_4a7040_1 *field_60;
} st_4a7040_3;

typedef struct st_4a7040_4 {
    float field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_4a7040_4;

extern st_4a7040_2 *g_61692c;

double MakeDamageBloodDecal__12CBaseMonsterifP11TraceResultRC6Vector(st_4a7040_3 *a0, int a1, float a2, float *a3, st_4a7040_4 *a4)
{
    st_4a7040_0 *v16;  // ecx
    double v17;  // mm7
    double v18;  // mm7
    unsigned int *v19;  // edi
    double v20;  // mm7
    double v21;  // mm7
    double v22;  // mm5
    double v23;  // mm5
    char *v0;  // [bp-0xc4]
    char *v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    int v3;  // [bp-0xb8]
    float v4;  // [bp-0xa4]
    float v5;  // [bp-0xa0]
    float v6;  // [bp-0x9c]
    float v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    uint96_t v10;  // [bp-0x64], Other Possible Types: char
    float v11;  // [bp-0x64]
    unsigned int v12;  // [bp-0x60]
    unsigned int v13;  // [bp-0x5c]
    char v14;  // [bp-0x44]
    float v15;  // [bp-0x34]

    if (!a0->field_60->field_8c(a0))
    {
        v16 = a0->field_0;
        if (0.0 >= v16->field_1b0)
            return 0.0;
        v17 = v16->field_1b0 - 1.0;
        v16->field_1b0 = (float)v17;
    }
    v3 = 0;
    if (v3 >= a1)
        return v17;
    v18 = -a2;
    v2 = (float)v18;
    v1 = &v10;
    v19 = a3 + 5;
    v0 = &v14;
    do
    {
        v11 = a4->field_0;
        v12 = a4->field_4;
        v13 = a4->field_8;
        g_61692c(v2, a2);
        v20 = v18 + v11;
        v10 = _INSERT(CONCAT(*(unsigned int *)&v11, 0), 0, (float)v20);
        g_61692c(v2, a2);
        v21 = v20 + (double)*(unsigned int *)((void*)&v10 + 4);
        *(float *)((char *)&v10 + 4) = (float)v21;
        g_61692c(v2, a2);
        *(float *)((char *)&v10 + 8) = (float)(v21 + (double)*(unsigned int *)((void*)&v10 + 8));
        v22 = 172.0 * (double)*(unsigned int *)&v10;
        v4 = (float)v22;
        v23 = 172.0 * *(float *)((char *)&v10 + 4);
        v5 = (float)v23;
        v6 = (float)(172.0 * *(float *)((char *)&v10 + 8));
        v7 = (float)(v22 + a3[5]);
        v8 = (float)(v23 + *(float *)&v19[1]);
        v9 = *(float *)&v19[2] + v6;
        sub_487b80(v19, &v7, 1, a0->field_0->field_208, v0);
        v18 = v15;
        if (v18 != 1.0)
            sub_48d7e0(v0, a0->field_60->field_40(a0));
    } while ((v3 += 1, v3 < a1));
    return v18;
}

