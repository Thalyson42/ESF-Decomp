// DrainPlayer__14CDrainEntsTaskP11CBasePlayer @0x153140 size=711
typedef struct st_553140_2 {
    char padding_0[1860];
    unsigned int field_744;
} st_553140_2;

typedef struct st_553140_0 {
    struct st_553140_1 *field_0;
    char padding_4[1856];
    int field_744;
} st_553140_0;

typedef struct st_553140_1 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[308];
    float field_160;
} st_553140_1;

typedef struct st_553140_3 {
    char padding_0[8];
    struct st_553140_2 *field_8;
} st_553140_3;

int DrainPlayer__14CDrainEntsTaskP11CBasePlayer(st_553140_3 *a0, st_553140_0 *a1)
{
    unsigned int *v15;  // edx
    double v16;  // mm7
    unsigned int *v25;  // edx
    double v26;  // mm7
    double v27;  // mm6
    float v28;  // 128
    unsigned int *v29;  // edx
    double v17;  // mm6
    int v18;  // eax
    double v19;  // mm7
    float *v20;  // edi
    unsigned int *v21;  // esi
    double v22;  // mm7
    double v23;  // mm6
    double v24;  // mm7
    char v0[4];  // [bp-0x84]
    unsigned int v2;  // [bp-0x80]
    int v3;  // [bp-0x7c], Other Possible Types: unsigned int
    float v4;  // [bp-0x6c]
    float v5;  // [bp-0x58]
    float v6;  // [bp-0x54]
    float v7;  // [bp-0x50]
    int v8;  // [bp-0x38]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]
    float v12;  // [bp-0x18]
    float v13;  // [bp-0x14]
    float v14;  // [bp-0x10]

    v3 = a1->field_744;
    v2 = a0->field_8->field_744;
    v15 = &a1->field_0->field_20;
    v16 = a1->field_0->field_20 * a1->field_0->field_20 + *(float *)&v15[1] * *(float *)&v15[1] + *(float *)&v15[2] * *(float *)&v15[2];
    v17 = sqrt(v16);
    if (isnan(v17))
        sqrt(*(unsigned int *)&v16);
    else
        v16 = v17;
    v12 = (float)v16;
    if (v12 > 10.0f)
    {
        strncpy(v0, "33s?", 4);
        v18 = v2 - v3;
        if (v18 > 0)
        {
            v8 = v18;
            *(float *)&*(uint32_t *)v0 = (float)((double)v8 / 10000000.0);
        }
        if ((double)*(uint32_t *)v0 < 0.05)
        {
            v19 = 0.05000000074505806;
LABEL_553223:
            *(float *)&*(uint32_t *)v0 = (float)v19;
        }
        else
        {
            v19 = 0.949999988079071;
            if (0.949999988079071 < (double)*(uint32_t *)v0)
                goto LABEL_553223;
        }
        v20 = a1->field_0;
        v21 = v20 + 8;
        v22 = v20[8] * v20[8] + *(float *)&v21[1] * *(float *)&v21[1] + *(float *)&v21[2] * *(float *)&v21[2];
        v23 = sqrt(v22);
        if (isnan(v23))
            sqrt(*(unsigned int *)&v22);
        else
            v22 = v23;
        v4 = (float)v22;
        if (v4 == 0.0f)
        {
            v5 = 0.0f;
            v6 = 0.0f;
            v7 = 1.0;
        }
        else
        {
            v24 = 1.0 / v4;
            v5 = (float)(v24 * *(float *)v21);
            v6 = (float)(v24 * *(float *)&v21[1]);
            v7 = (float)(v24 * *(float *)&v21[2]);
        }
        v25 = &a1->field_0->field_20;
        v26 = a1->field_0->field_20 * a1->field_0->field_20 + *(float *)&v25[1] * *(float *)&v25[1] + *(float *)&v25[2] * *(float *)&v25[2];
        v27 = sqrt(v26);
        if (isnan(v27))
            sqrt(*(unsigned int *)&v26);
        else
            v26 = v27;
        v4 = (float)v26;
        v28 = v4 * *(float *)v0;
        v12 = v28 * v5;
        v13 = v28 * v6;
        v14 = v28 * v7;
        v29 = &a1->field_0->field_20;
        v9 = a1->field_0->field_20 - v12;
        v10 = *(float *)&v29[1] - v13;
        v11 = *(float *)&v29[2] - v14;
        v20[8] = v9;
        v20[9] = v10;
        v20[10] = v11;
    }
    v3 -= 950;
    v2 += 950;
    if (a1->field_744 <= 2850)
    {
        UTIL_DamagePlayer(a0->field_8, a1, "Super bot laser", (float)(1.0 + a1->field_0->field_160));
    }
    else if ((int)v2 <= 0x3b9ac9fe)
    {
        CBasePlayer::SetPowerLevel(a1, v3);
        CBasePlayer::SetPowerLevel(a0->field_8, v2);
        CBasePlayer::SetMaxPowerLevel(a0->field_8, v2);
    }
    else
    {
        CBasePlayer::UseKi(a1, 3);
        return CBasePlayer::UseKi(a0->field_8, 3);
    }
    CBasePlayer::UseKi(a1, 3);
    return CBasePlayer::UseKi(a0->field_8, 3);
}

