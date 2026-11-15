// GetGunPosition__12CBaseMonster @0xd8b20 size=316
typedef struct st_4d8b20_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4d8b20_1;

typedef struct st_4d8b20_0 {
    struct st_4d8b20_1 *field_0;
    char padding_4[656];
    float field_294;
    float field_298;
    float field_29c;
} st_4d8b20_0;

typedef struct st_4d8b20_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_4d8b20_2;

extern st_4d8b20_2 *gpGlobals;

unsigned int * GetGunPosition__12CBaseMonster(void)
{
    st_4d8b20_0 *v11;  // esi
    float v12;  // 128
    unsigned int *v13;  // edx
    unsigned int *v14;  // edx
    float v15;  // 128
    unsigned int *v16;  // edx
    float v17;  // 128
    unsigned int *v18;  // edx
    float v19;  // 112
    float v0;  // [bp-0xbc]
    float v1;  // [bp-0x9c]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x64]
    float v4;  // [bp-0x60]
    float v5;  // [bp-0x5c]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    unsigned int *idx;  // [bp+0x4]
    st_4d8b20_0 *v10;  // [bp+0x8]

    v11 = v10;
    UTIL_MakeVectors(v11->field_0 + 4);
    v12 = v11->field_298;
    v13 = &gpGlobals->field_28;
    v2 = v12 * *(float *)&v13[2];
    v14 = &v11->field_0->field_8;
    v3 = v12 * gpGlobals->field_28 + v11->field_0->field_8;
    v4 = v12 * *(float *)&v13[1] + *(float *)&v14[1];
    v5 = *(float *)&v14[2] + v2;
    v15 = v11->field_294;
    v16 = &gpGlobals->field_40;
    v1 = v15 * *(float *)&v16[2];
    v6 = v15 * gpGlobals->field_40 + v3;
    v7 = v15 * *(float *)&v16[1] + v4;
    v8 = v5 + v1;
    v17 = v11->field_29c;
    v18 = &gpGlobals->field_34;
    v19 = v17 * *(float *)&v18[1];
    v0 = v17 * *(float *)&v18[2];
    *(float *)idx = v17 * gpGlobals->field_34 + v6;
    *(float *)&idx[1] = v19 + v7;
    *(float *)&idx[2] = v8 + v0;
    return idx;
}

