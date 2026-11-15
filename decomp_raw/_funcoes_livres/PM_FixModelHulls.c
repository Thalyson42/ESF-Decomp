// PM_FixModelHulls @0x1944e0 size=702
typedef struct st_5944e0_0 {
    char field_0;
    char padding_1[227];
    unsigned int field_e4;
    unsigned int field_e8;
    unsigned int field_ec;
    unsigned int field_f0;
    unsigned int field_f4;
    char padding_f8[16];
    unsigned int field_108;
    unsigned int field_10c;
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    char padding_120[16];
    unsigned int field_130;
    unsigned int field_134;
    unsigned int field_138;
    unsigned int field_13c;
    unsigned int field_140;
    unsigned int field_144;
} st_5944e0_0;

typedef struct st_5944e0_1 {
    char padding_0[640];
    struct st_5944e0_0 *field_280;
} st_5944e0_1;

extern st_5944e0_1 *pmove;

unsigned int PM_FixModelHulls(void)
{
    st_5944e0_0 *v19;  // ecx
    int v20;  // esi
    unsigned int v21;  // eax
    unsigned int v0;  // [bp-0xc4]
    unsigned int v1;  // [bp-0xc0]
    unsigned int v2;  // [bp-0xbc]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x9c]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    v15 = -4.0f;
    v16 = -4.0f;
    v17 = -9.0f;
    v12 = 4.0f;
    v13 = 4.0f;
    v14 = 9.0f;
    v9 = -4.0f;
    v10 = -4.0f;
    v11 = -4.0f;
    v6 = 4.0f;
    v7 = 4.0f;
    v8 = 5.0f;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = 0;
    *(float *)&pmove->field_280->padding_1[223] = -4.0f;
    *(float *)&pmove->field_280->field_e4 = v16;
    *(float *)&pmove->field_280->field_e8 = v17;
    *(float *)&pmove->field_280->field_ec = v12;
    *(float *)&pmove->field_280->field_f0 = v13;
    *(float *)&pmove->field_280->field_f4 = v14;
    *(float *)&pmove->field_280->field_108 = v9;
    *(float *)&pmove->field_280->field_10c = v10;
    *(float *)&pmove->field_280->field_110 = v11;
    *(float *)&pmove->field_280->field_114 = v6;
    *(float *)&pmove->field_280->field_118 = v7;
    *(float *)&pmove->field_280->field_11c = v8;
    pmove->field_280->field_130 = v3;
    pmove->field_280->field_134 = v4;
    pmove->field_280->field_138 = v5;
    pmove->field_280->field_13c = v0;
    pmove->field_280->field_140 = v1;
    pmove->field_280->field_144 = v2;
    v19 = pmove->field_280;
    v20 = 0;
    do
    {
        v21 = v20 * 392;
        if ((&v19->field_0)[v21] == 42)
        {
            *(float *)&v19->padding_1[223 + v21] = v15;
            *(float *)&(&v19->field_0)[v21 + 228] = v16;
            *(float *)&(&v19->field_0)[v21 + 232] = v17;
            *(float *)&(&v19->field_0)[v21 + 236] = v12;
            *(float *)&(&v19->field_0)[v21 + 240] = v13;
            *(float *)&(&v19->field_0)[v21 + 244] = v14;
            *(float *)&(&v19->field_0)[v21 + 264] = v9;
            *(float *)&(&v19->field_0)[v21 + 268] = v10;
            *(float *)&(&v19->field_0)[v21 + 272] = v11;
            *(float *)&(&v19->field_0)[v21 + 276] = v6;
            *(float *)&(&v19->field_0)[v21 + 280] = v7;
            *(float *)&(&v19->field_0)[v21 + 284] = v8;
            *(unsigned int *)&(&v19->field_0)[v21 + 304] = v3;
            *(unsigned int *)&(&v19->field_0)[v21 + 308] = v4;
            *(unsigned int *)&(&v19->field_0)[v21 + 312] = v5;
            *(unsigned int *)&(&v19->field_0)[v21 + 316] = v0;
            *(unsigned int *)&(&v19->field_0)[v21 + 320] = v1;
            *(unsigned int *)&(&v19->field_0)[v21 + 324] = v2;
        }
    } while ((v20 += 1, v20 <= 0x3ff));
    return v21;
}

