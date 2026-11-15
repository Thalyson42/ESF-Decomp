// FindLateralCover__12CBaseMonsterRC6VectorT1 @0xd9760 size=969
typedef struct st_4d9760_1 {
    char padding_0[288];
    struct st_4d9760_2 *field_120;
    char padding_124[112];
    struct st_4d9760_2 *field_194;
} st_4d9760_1;

typedef struct st_4d9760_2 {
    unsigned int field_0;
} st_4d9760_2;

typedef struct st_4d9760_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    char field_50;
    char padding_51[291];
    float field_174;
    float field_178;
    float field_17c;
    char padding_180[136];
    int field_208;
} st_4d9760_0;

typedef struct st_4d9760_3 {
    struct st_4d9760_0 *field_0;
    char padding_4[92];
    struct st_4d9760_1 *field_60;
} st_4d9760_3;

typedef struct st_4d9760_4 {
    char padding_0[64];
    float field_40;
    float field_44;
    float field_48;
} st_4d9760_4;

extern st_4d9760_4 *gpGlobals;

unsigned int FindLateralCover__12CBaseMonsterRC6VectorT1(st_4d9760_3 *a0, float *a1, float *a2)
{
    unsigned int *v20;  // edx
    st_4d9760_0 *v21;  // edx
    st_4d9760_0 *v22;  // edx
    st_4d9760_0 *v23;  // edx
    char *v0;  // [bp-0x120]
    char *v1;  // [bp-0x11c]
    int v2;  // [bp-0x118]
    float v3;  // [bp-0x104]
    float v4;  // [bp-0x100]
    float v5;  // [bp-0xfc]
    char v6;  // [bp-0xf8], Other Possible Types: float
    float v7;  // [bp-0xf4]
    float v8;  // [bp-0xf0]
    float v9;  // [bp-0xe4]
    float v10;  // [bp-0xe0]
    float v11;  // [bp-0xdc]
    float v12;  // [bp-0xc4]
    float v13;  // [bp-0xc0]
    float v14;  // [bp-0xbc]
    float v15;  // [bp-0xa4]
    float v16;  // [bp-0xa0]
    float v17;  // [bp-0x9c]
    char v18;  // [bp-0x44]
    float v19;  // [bp-0x34]

    UTIL_MakeVectors(&a0->field_0->field_50);
    v20 = &gpGlobals->field_40;
    v3 = (float)(48.0 * gpGlobals->field_40);
    v4 = (float)(48.0 * *(float *)&v20[1]);
    v5 = (float)(48.0 * *(float *)&v20[2]);
    v9 = v3;
    v10 = v4;
    v11 = v5;
    v11 = 0;
    v21 = a0->field_0;
    v12 = v21->field_8;
    v13 = v21->field_c;
    v14 = v21->field_10;
    v15 = v21->field_8;
    v16 = v13;
    v17 = v14;
    v2 = 0;
    v1 = &v3;
    v0 = &v6;
    while (1)
    {
        v3 = v15 - v9;
        v4 = v16 - v10;
        v5 = v17 - v11;
        v15 = v3;
        v16 = v4;
        v17 = v5;
        v3 = v12 + v9;
        v4 = v13 + v10;
        v5 = v14 + v11;
        v12 = v3;
        v13 = v4;
        v14 = v5;
        v22 = a0->field_0;
        v3 = v15 + v22->field_174;
        v4 = v16 + v22->field_178;
        v5 = v17 + v22->field_17c;
        v6 = *a1 + *a2;
        v7 = a1[1] + a2[1];
        v8 = a1[2] + a2[2];
        UTIL_TraceLine(v0, v1, 1, 1, v22->field_208, &v18);
        if (v19 != 1.0f && a0->field_60->field_194(a0, &v15) && a0->field_60->field_120(a0, &a0->field_0->field_8, &v15, 0, 0) == 2 && CBaseMonster::MoveToLocation(a0, 4, 0, &v15))
            break;
        v23 = a0->field_0;
        v3 = v12 + v23->field_174;
        v4 = v13 + v23->field_178;
        v5 = v14 + v23->field_17c;
        v6 = *a1 + *a2;
        v7 = a1[1] + a2[1];
        v8 = a1[2] + a2[2];
        UTIL_TraceLine(v0, v1, 1, 1, v23->field_208, &v18);
        if (v19 != 1.0f && a0->field_60->field_194(a0, &v12) && a0->field_60->field_120(a0, &a0->field_0->field_8, &v12, 0, 0) == 2 && CBaseMonster::MoveToLocation(a0, 4, 0, &v12))
            break;
        v2 += 1;
        if (v2 > 4)
            return 0;
    }
    return 1;
}

