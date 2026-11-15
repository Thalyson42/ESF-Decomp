// FindEntityForward__FP11CBaseEntity @0xfc290 size=371
typedef struct st_4fc290_3 {
    char padding_0[124];
    unsigned int field_7c;
} st_4fc290_3;

typedef struct st_4fc290_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[96];
    char field_74;
    char padding_75[255];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    int field_208;
} st_4fc290_0;

typedef struct st_4fc290_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4fc290_1;

typedef struct st_4fc290_2 {
    unsigned int field_0;
} st_4fc290_2;

extern st_4fc290_2 *g_6168d4;
extern st_4fc290_2 *g_6168d8;
extern st_4fc290_1 *gpGlobals;

unsigned int FindEntityForward__FP11CBaseEntity(st_4fc290_0 **a0)
{
    st_4fc290_0 *v15;  // edx
    unsigned int *v16;  // esi
    unsigned int *v17;  // ecx
    double v18;  // mm5
    double v19;  // mm5
    unsigned int v20;  // esi
    st_4fc290_3 *v21;  // eax
    float v0;  // [bp-0xc4]
    float v1;  // [bp-0xc0]
    float v2;  // [bp-0xbc]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    char v12;  // [bp-0x44]
    float v13;  // [bp-0x34]
    st_4fc290_3 *v14;  // [bp-0x14]

    sub_48a800(&*a0->field_74);
    v15 = *a0;
    v16 = &v15->field_8;
    v6 = v15->field_8 + v15->field_174;
    v7 = *(float *)&v16[1] + v15->field_178;
    v8 = *(float *)&v16[2] + v15->field_17c;
    v17 = &gpGlobals->field_28;
    v18 = 8192.0 * gpGlobals->field_28;
    v3 = (float)v18;
    v19 = 8192.0 * *(float *)&v17[1];
    v4 = (float)v19;
    v5 = (float)(8192.0 * *(float *)&v17[2]);
    v9 = (float)(v18 + v6);
    v10 = (float)(v19 + v7);
    v11 = v8 + v5;
    v0 = v15->field_8 + v15->field_174;
    v1 = *(float *)&v16[1] + v15->field_178;
    v2 = *(float *)&v16[2] + v15->field_17c;
    sub_487b80(&v0, &v9, 0, v15->field_208, &v12);
    if (v13 != 1.0f)
    {
        v20 = 0;
        if (!v14 || !g_6168d8(v14))
            v20 = 1;
        if (!v20)
        {
            v21 = v14;
            if (!v21)
            {
                v21 = g_6168d4(0);
                if (!v21)
                    return 0;
            }
            return v21->field_7c;
        }
    }
    return 0;
}

