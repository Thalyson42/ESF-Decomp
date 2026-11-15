// Use__6CBloodP11CBaseEntityT18USE_TYPEf @0xb5720 size=468
typedef struct st_4b5720_0 {
    char padding_0[388];
    int field_184;
    char padding_188[24];
    char field_1a0;
    char padding_1a1[63];
    float field_1e0;
} st_4b5720_0;

unsigned int Use__6CBloodP11CBaseEntityT18USE_TYPEf(st_4b5720_0 **a0, int a1)
{
    st_4b5720_0 *v24;  // edx
    int v25;  // eax
    float v26;  // 128
    unsigned int v27;  // eax
    int v0;  // [bp-0xc8]
    char v1;  // [bp-0x8c]
    float v2;  // [bp-0x7c]
    int v3;  // [bp-0x4c]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    float v6;  // [bp-0x44]
    char v7;  // [bp-0x44]
    float v8;  // [bp-0x40]
    float v9;  // [bp-0x3c]
    float v10;  // [bp-0x38]
    char v11;  // [bp-0x38]
    float v12;  // [bp-0x34]
    float v13;  // [bp-0x30]
    float v14;  // [bp-0x2c]
    float v15;  // [bp-0x28]
    char v16;  // [bp-0x24]
    float v17;  // [bp-0x24]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]
    float v20;  // [bp-0x18]
    float v21;  // [bp-0x14]
    float v22;  // [bp-0x10]
    float v23;  // [bp-0xc]

    if (*a0->field_1a0 & 2)
    {
        CBlood::Direction(&v16, a0);
        CBlood::BloodPosition(&v7, a0, a1);
        v24 = *a0;
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)v24->field_1e0;
        v0 = v3;
        v25 = v24->field_184;
        if (v24->field_184 == 247)
            v25 = 70;
        UTIL_BloodStream(&v7, &v16, v25);
    }
    else
    {
        CBlood::Direction(&v7, a0);
        CBlood::BloodPosition(&v11, a0, a1);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)*a0->field_1e0;
        UTIL_BloodDrips(&v11, &v7, *a0->field_184, v3);
    }
    if (!(*a0->field_1a0 & 8))
        return v27;
    CBlood::Direction(&v7, a0);
    CBlood::BloodPosition(&v11, a0, a1);
    v26 = *a0->field_1e0;
    v21 = v26 * v6;
    v22 = v26 * v8;
    v23 = v26 * v9;
    v18 = v21 + v21;
    v19 = v22 + v22;
    v20 = v23 + v23;
    v14 = v10 + v18;
    v15 = v12 + v19;
    v17 = v13 + v20;
    UTIL_TraceLine(&v11, &v14, 1, 0, &v1);
    if (v2 == 1.0f)
        return v27;
    v27 = UTIL_BloodDecalTrace(&v1, *a0->field_184);
    return v27;
}

