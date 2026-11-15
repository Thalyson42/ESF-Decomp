// DrawExplosionFX__9CKiAttackiG6Vector @0xcb770 size=895
typedef struct st_4cb770_0 {
    char padding_0[124];
    struct st_4cb770_1 *field_7c;
} st_4cb770_0;

typedef struct st_4cb770_6 {
    char padding_0[160];
    struct st_4cb770_5 *field_a0;
} st_4cb770_6;

typedef struct st_4cb770_1 {
    char padding_0[1424];
    unsigned int field_590;
    char padding_594[272];
    unsigned int field_6a4;
    unsigned int field_6a8;
    unsigned int field_6ac;
    unsigned int field_6b0;
    unsigned int field_6b4;
    unsigned int field_6b8;
} st_4cb770_1;

typedef struct st_4cb770_3 {
    unsigned int field_0;
    char padding_4[404];
    struct st_4cb770_2 *field_198;
} st_4cb770_3;

typedef struct st_4cb770_5 {
    unsigned int field_0;
} st_4cb770_5;

typedef struct st_4cb770_8 {
    char padding_0[520];
    struct st_4cb770_0 *field_208;
} st_4cb770_8;

typedef struct st_4cb770_2 {
    char padding_0[648];
    struct st_4cb770_0 *field_288;
} st_4cb770_2;

typedef struct st_4cb770_7 {
    char padding_0[96];
    struct st_4cb770_6 *field_60;
    char padding_64[1120];
    unsigned int field_4c4;
} st_4cb770_7;

typedef struct st_4cb770_4 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4cb770_4;

extern unsigned int gmsgExplosion;
extern st_4cb770_5 *g_616878;
extern st_4cb770_5 *g_61687c;
extern st_4cb770_5 *g_616880;
extern st_4cb770_5 *g_61688c;
extern st_4cb770_5 *g_616894;
extern st_4cb770_5 *g_6168d4;
extern st_4cb770_4 *gpGlobals;

float DrawExplosionFX__9CKiAttackiG6Vector(st_4cb770_3 **a0, int a1, float *a2)
{
    float v14;  // 128
    st_4cb770_7 *v15;  // esi
    double v24;  // mm5
    double v25;  // mm4
    double v26;  // mm4
    int idx;  // edx
    st_4cb770_0 *v16;  // eax
    unsigned int *v17;  // eax
    unsigned int *v18;  // esi
    float v19;  // 104
    float v20;  // 104
    float v21;  // 104
    double v22;  // mm6
    double v23;  // mm5
    unsigned int v0;  // [bp-0x7c]
    unsigned int v1;  // [bp-0x6c]
    unsigned int v2;  // [bp-0x68]
    unsigned int v3;  // [bp-0x64]
    st_4cb770_8 *v4;  // [bp-0x4c]
    float v5;  // [bp-0x48]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]
    float v10;  // [bp-0x34]
    float v11;  // [bp-0x28]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]

    g_616878(2, gmsgExplosion, 0, 0, v1, v2, v3);
    g_616894(*a2);
    g_616894(a2[1]);
    v14 = a2[2];
    g_616894(v14);
    g_61688c(a1);
    v0 = 4;
    g_616880(v0);
    g_61687c(v0);
    if (sub_488af0(*a0->field_0 + gpGlobals->field_98, "kiblast"))
    {
        return v14;
    }
    else if (*a0->field_198)
    {
        v4 = &*a0->field_198->padding_0[128];
        if (!*a0->field_198)
            v4 = NULL;
        v15 = NULL;
        while (1)
        {
            v15 = sub_48bba0(v15, a2, (float)a1);
            if (!v15)
                break;
            if (v15->field_60->field_a0(v15) && v15->field_4c4)
                return v14;
        }
        v16 = v4->field_208;
        if (v4->field_208 || (v16 = g_6168d4(0), v16))
            v17 = v16->field_7c;
        else
            v17 = NULL;
        v18 = v17;
        if (*(float *)&v18[356] == -1.0f)
        {
            *(float *)&v18[356] = gpGlobals->field_0;
            *(float *)&v18[425] = *a2;
            *(float *)&v18[426] = a2[1];
            *(float *)&v18[427] = a2[2];
        }
        else if (*(float *)&v18[357] == -1.0f)
        {
            *(float *)&v18[357] = gpGlobals->field_0;
            *(float *)&v18[428] = *a2;
            *(float *)&v18[429] = a2[1];
            *(float *)&v18[430] = a2[2];
        }
        else
        {
            *(float *)&v18[356] = gpGlobals->field_0;
            *(float *)&v18[425] = *a2;
            *(float *)&v18[426] = a2[1];
            *(float *)&v18[427] = a2[2];
            *(float *)&v18[357] = -1.0f;
        }
        if (*(float *)&v18[356] == -1.0f || *(float *)&v18[357] == -1.0f)
            return v14;
        if (1.0 > *(float *)&v18[357] - *(float *)&v18[356])
        {
            v19 = *(float *)&v18[425] - *(float *)&v18[428];
            v11 = v19;
            v20 = *(float *)&v18[426] - *(float *)&v18[429];
            v12 = v20;
            v21 = *(float *)&v18[427] - *(float *)&v18[430];
            v13 = v21;
            v22 = v19 * v19 + v20 * v20 + v21 * v21;
            v23 = sqrt(v22);
            if (isnan(v23))
                sub_487dc0(*(unsigned int *)&v22);
            else
                v22 = v23;
            v8 = (float)v22;
            if (v8 >= 150.0f)
                return v14;
            v24 = (*(float *)&v18[425] + *(float *)&v18[428]) * 0.5;
            v5 = (float)v24;
            v25 = (*(float *)&v18[426] + *(float *)&v18[429]) * 0.5;
            v6 = (float)v25;
            v26 = 0.5 * (*(float *)&v18[427] + *(float *)&v18[430]);
            v7 = (float)v26;
            v8 = (float)v24;
            v9 = (float)v25;
            v10 = (float)v26;
            sub_488990(v18, &v8);
            idx = 0;
            do
            {
                *(float *)&v18[356 + idx] = -1.0f;
                idx += 1;
            } while (idx <= 1);
            return v14;
        }
        else
        {
            return v14;
        }
        return v14;
    }
    else
    {
        return v14;
    }
}

