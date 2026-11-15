// GetEnemyPrepunch__12CPlayerMeleeP11CBasePlayer @0x1084c0 size=625
typedef struct st_5084c0_0 {
    char padding_0[140];
    struct st_5084c0_1 *field_8c;
    char padding_90[16];
    struct st_5084c0_1 *field_a0;
} st_5084c0_0;

typedef struct st_5084c0_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_5084c0_3;

typedef struct st_5084c0_4 {
    char padding_0[292];
    struct st_5084c0_2 *field_124;
} st_5084c0_4;

typedef struct st_5084c0_1 {
    unsigned int field_0;
} st_5084c0_1;

typedef struct st_5084c0_2 {
    struct st_5084c0_3 *field_0;
    char padding_4[92];
    struct st_5084c0_0 *field_60;
    char padding_64[1120];
    unsigned int field_4c4;
} st_5084c0_2;

st_5084c0_2 * GetEnemyPrepunch__12CPlayerMeleeP11CBasePlayer(st_5084c0_4 *a0, st_5084c0_2 *a1)
{
    st_5084c0_2 *v15;  // edi
    unsigned int *v16;  // esi
    double v25;  // mm7
    double v26;  // mm6
    double v27;  // mm7
    unsigned int *v17;  // edx
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    double v22;  // mm6
    unsigned int *v23;  // esi
    unsigned int *v24;  // edx
    float v0;  // [bp-0x74]
    float v1;  // [bp-0x70]
    char v2[4];  // [bp-0x6c]
    st_5084c0_2 *v4;  // [bp-0x68]
    float v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x4c]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    v15 = NULL;
    strncpy(v2, "333?", 8);
    v0 = 96.0f;
    while (1)
    {
        v15 = UTIL_FindEntityInSphere(v15, &a0->field_124->field_0->field_8, 95.0f);
        if (!v15)
            return v4;
        v16 = &v15->field_0->field_8;
        v17 = &a0->field_124->field_0->field_8;
        v18 = v15->field_0->field_8 - a0->field_124->field_0->field_8;
        v9 = v18;
        v19 = *(float *)&v16[1] - *(float *)&v17[1];
        v10 = v19;
        v20 = *(float *)&v16[2] - *(float *)&v17[2];
        v11 = v20;
        v21 = v18 * v18 + v19 * v19 + v20 * v20;
        v22 = sqrt(v21);
        if (isnan(v22))
            sqrt(*(unsigned int *)&v21);
        else
            v21 = v22;
        v1 = (float)v21;
        if (v1 < v0 && v15 != a0->field_124 && v15->field_60->field_a0(v15) && v15->field_60->field_8c(v15) && !v15->field_4c4)
        {
            v23 = &v15->field_0->field_8;
            v24 = &a0->field_124->field_0->field_8;
            v5 = v15->field_0->field_8 - a0->field_124->field_0->field_8;
            v6 = *(float *)&v23[1] - *(float *)&v24[1];
            v7 = *(float *)&v23[2] - *(float *)&v24[2];
            v12 = v5;
            v13 = v6;
            v14 = v7;
            v25 = v12 * v12 + v13 * v13 + v14 * v14;
            v26 = sqrt(v25);
            if (isnan(v26))
                sqrt(*(unsigned int *)&v25);
            else
                v25 = v26;
            v8 = (float)v25;
            if (v8 == 0.0f)
            {
                v5 = 0.0f;
                v6 = 0.0f;
                v7 = 1.0;
            }
            else
            {
                v27 = 1.0 / v8;
                v5 = (float)(v27 * v12);
                v6 = (float)(v27 * v13);
                v7 = (float)(v27 * v14);
            }
            v12 = v5;
            v13 = v6;
            v14 = v7;
            CSwoop::GetCurrentDirection(&v5, &a0->field_124[1].padding_4[56]);
            if (__float_as_int(v12 * v5) + __float_as_int(v13 * v6) + v14 * v7 > *(float *)v2)
            {
                v4 = v15;
                v0 = v1;
                if (a1 && v15 == a1)
                    return v15;
            }
        }
    }
}

