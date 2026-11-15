// ShieldTouch__7CShieldP11CBaseEntity @0x119120 size=860
typedef struct st_519120_4 {
    char padding_0[40];
    struct st_519120_5 *field_28;
    char padding_2c[116];
    struct st_519120_5 *field_a0;
} st_519120_4;

typedef struct st_519120_5 {
    unsigned int field_0;
} st_519120_5;

typedef struct st_519120_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[388];
    unsigned int field_198;
    char padding_19c[68];
    float field_1e0;
} st_519120_0;

typedef struct st_519120_3 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[384];
    unsigned int field_1ac;
    char padding_1b0[48];
    float field_1e0;
    char padding_1e4[36];
    unsigned int field_208;
} st_519120_3;

typedef struct st_519120_2 {
    char padding_0[428];
    unsigned int field_1ac;
    char padding_1b0[88];
    unsigned int field_208;
} st_519120_2;

typedef struct st_519120_9 {
    char padding_0[608];
    unsigned int field_260;
} st_519120_9;

typedef struct st_519120_1 {
    struct st_519120_0 *field_0;
    char padding_4[104];
    char field_6c;
} st_519120_1;

typedef struct st_519120_6 {
    struct st_519120_3 *field_0;
    char padding_4[92];
    struct st_519120_4 *field_60;
    char padding_64[584];
    unsigned int field_2ac;
    unsigned int field_2b0;
    char padding_2b4[24];
    unsigned int field_2cc;
    char padding_2d0[132];
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[356];
    unsigned int field_4c4;
} st_519120_6;

typedef struct st_519120_7 {
    char padding_0[32];
    struct st_519120_5 *field_20;
} st_519120_7;

typedef struct st_519120_10 {
    char padding_0[152];
    unsigned int field_98;
} st_519120_10;

typedef struct st_519120_8 {
    char padding_0[68];
    struct st_519120_7 *field_44;
} st_519120_8;

extern st_519120_8 *g_pGameRules;
extern st_519120_5 *g_6168dc;
extern st_519120_10 *gpGlobals;

float ShieldTouch__7CShieldP11CBaseEntity(st_519120_1 *a0, st_519120_6 *a1)
{
    st_519120_2 **v13;  // edi
    unsigned int v14;  // eax
    double v23;  // mm6
    double v24;  // mm5
    double v25;  // mm6
    unsigned long long v26;  // mm7
    unsigned long long v27;  // mm7
    unsigned long long v28;  // mm7
    unsigned long long v29;  // mm7
    unsigned long long v30;  // mm7
    unsigned long long v31;  // mm7
    st_519120_9 **v32;  // esi
    st_519120_6 *v15;  // ecx
    st_519120_6 *v33;  // edi
    unsigned long long v34;  // mm7
    unsigned long long v35;  // mm7
    unsigned long long v36;  // mm7
    unsigned long long v37;  // mm7
    unsigned long long v38;  // mm7
    unsigned long long v39;  // mm7
    unsigned long long v16;  // mm7
    unsigned int *v17;  // ecx
    unsigned int *v18;  // esi
    unsigned int *v19;  // eax
    double v20;  // mm4
    double v21;  // mm4
    double v22;  // mm4
    int v0;  // [bp-0x7c]
    unsigned short v1;  // [bp-0x78]
    unsigned short v2;  // [bp-0x76]
    float v3;  // [bp-0x58]
    float v4;  // [bp-0x44]
    float v5;  // [bp-0x40]
    float v6;  // [bp-0x3c]
    float v7;  // [bp-0x38]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    float v10;  // [bp-0x24]
    float v11;  // [bp-0x20]
    float v12;  // [bp-0x1c]

    if (a1->field_60->field_a0(a1))
    {
        v13 = sub_489e40(a0, (!a0->field_0->field_198 ? 0 : a0->field_0->field_198 + 128));
        v14 = g_6168dc(*v13->field_208);
        if (v14 == g_6168dc(a1->field_0->field_208))
            return v31;
        v15 = a1;
        if (v15->field_354)
            return v30;
        if (!v15->field_358)
        {
            if (!v15->field_35c)
            {
                if (!v15->field_4c4)
                {
                    if (g_pGameRules->field_44->field_20(g_pGameRules) && *v13->field_1ac == a1->field_0->field_1ac)
                        return v16;
                    v17 = &a0->field_0->field_8;
                    v18 = &a1->field_0->field_0;
                    v19 = v18 + 2;
                    v4 = a0->field_0->field_8 - *(float *)&v18[2];
                    v5 = *(float *)&v17[1] - *(float *)&v19[1];
                    v6 = *(float *)&v17[2] - *(float *)&v19[2];
                    v20 = -1.0 * v4;
                    v10 = (float)v20;
                    v21 = -1.0 * v5;
                    v11 = (float)v21;
                    v22 = -1.0 * v6;
                    v12 = (float)v22;
                    v23 = v20 * v20 + v21 * v21 + v22 * v22;
                    v24 = sqrt(v23);
                    if (isnan(v24))
                        sub_487dc0(*(unsigned int *)&v23);
                    else
                        v23 = v24;
                    v3 = (float)v23;
                    if (v3 == 0.0f)
                    {
                        v7 = 0.0f;
                        v8 = 0.0f;
                        v9 = 1.0;
                    }
                    else
                    {
                        v25 = 1.0 / v3;
                        v7 = (float)(v25 * v10);
                        v8 = (float)(v25 * v11);
                        v9 = (float)(v25 * v12);
                    }
                    v4 = (float)(300.0 * v7);
                    v5 = (float)(300.0 * v8);
                    v6 = (float)(300.0 * v9);
                    *(float *)&v18[8] = v4;
                    *(float *)&v18[9] = v5;
                    *(float *)&v18[10] = v6;
                    return v26;
                }
                else
                {
                    return v27;
                }
            }
            else
            {
                return v28;
            }
        }
        else
        {
            return v29;
        }
    }
    else if (a1->field_60->field_28(a1) == 1)
    {
        v32 = sub_489e40(a0, (!a0->field_0->field_198 ? 0 : a0->field_0->field_198 + 128));
        v33 = a1;
        if (v33->field_2b0)
        {
            return v38;
        }
        else if (v33->field_2ac)
        {
            return v37;
        }
        else if (!v33->field_2cc)
        {
            v2 = __fnstcw();
            v1 = v2 | 0xc00;
            v0 = (int)(3.5 * v33->field_0->field_1e0);
            if (!sub_48c980(v32, v0))
            {
                *v32->field_260 = 0;
                a0->field_6c = 1;
                return v34;
            }
            if (!sub_488af0(v33->field_0->field_0 + gpGlobals->field_98, "kiblast"))
                a0->field_0->field_1e0 = a0->field_0->field_1e0 + v33->field_0->field_1e0;
            else
                a0->field_0->field_1e0 = (float)(a1->field_0->field_1e0 * 0.25 + a0->field_0->field_1e0);
            sub_488520(v33);
            return v35;
        }
        else
        {
            return v36;
        }
    }
    else
    {
        return v39;
    }
}

