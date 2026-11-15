// TaskThink__15CLookAroundTask @0x183fe0 size=934
typedef struct st_583fe0_3 {
    char padding_0[136];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_583fe0_3;

typedef struct st_583fe0_1 {
    char padding_0[3088];
    float field_c10;
    float field_c14;
    struct st_583fe0_1 *field_c18;
} st_583fe0_1;

typedef struct st_583fe0_4 {
    char padding_0[3088];
    unsigned int field_c10;
    unsigned int field_c14;
    struct st_583fe0_4 *field_c18;
} st_583fe0_4;

typedef struct st_583fe0_7 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[36];
    unsigned short field_30;
    char padding_32[2];
    unsigned int field_34;
} st_583fe0_7;

typedef struct st_583fe0_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_583fe0_1 *field_8;
    struct st_583fe0_3 *field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[36];
    short field_48;
    char padding_4a[2];
    float field_4c;
} st_583fe0_2;

typedef struct st_583fe0_6 {
    struct st_583fe0_3 *field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_583fe0_6;

typedef struct st_583fe0_0 {
    unsigned int field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_583fe0_0;

typedef struct st_583fe0_5 {
    unsigned int field_0;
} st_583fe0_5;

extern st_583fe0_5 *g_engfuncs.pfnRandomLong;
extern st_583fe0_5 *g_engfuncs.pfnRandomFloat;
extern st_583fe0_0 *gpGlobals;

st_583fe0_4 * TaskThink__15CLookAroundTask(st_583fe0_2 *a0)
{
    int i;  // esi
    unsigned int *v35;  // edx
    st_583fe0_4 *v44;  // esi
    double v45;  // mm7
    unsigned int *v46;  // edx
    double v47;  // mm5
    double v48;  // mm5
    unsigned int *v49;  // edx
    unsigned int *v50;  // ecx
    st_583fe0_2 *v51;  // eax
    st_583fe0_6 *v52;  // ecx
    double v53;  // mm7
    unsigned int *v36;  // eax
    st_583fe0_4 *v54;  // eax
    double v55;  // mm7
    st_583fe0_4 *v56;  // eax
    float v37;  // 112
    float v38;  // 112
    float v39;  // 112
    double v40;  // mm7
    double v41;  // mm6
    st_583fe0_2 *v42;  // eax
    st_583fe0_7 *v43;  // edx
    float v0;  // [bp-0xac]
    int v1;  // [bp-0xa8]
    unsigned int v2;  // [bp-0xa4]
    float v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    float v5;  // [bp-0xa0]
    unsigned int v6;  // [bp-0x9c]
    float v7;  // [bp-0x9c]
    float v8;  // [bp-0x98]
    unsigned int v9;  // [bp-0x98]
    unsigned int v10;  // [bp-0x94]
    float v11;  // [bp-0x94]
    unsigned int v12;  // [bp-0x90]
    float v13;  // [bp-0x90]
    float v14;  // [bp-0x88]
    float v15;  // [bp-0x84]
    unsigned int *v16;  // [bp-0x84]
    float v17;  // [bp-0x80]
    unsigned int v18;  // [bp-0x80]
    float v19;  // [bp-0x7c]
    unsigned int v20;  // [bp-0x7c]
    char v21;  // [bp-0x78]
    float v22;  // [bp-0x78]
    float v23;  // [bp-0x74]
    st_583fe0_4 *v24;  // [bp-0x70]
    unsigned int v25;  // [bp-0x64]
    unsigned int v26;  // [bp-0x60]
    unsigned int v27;  // [bp-0x5c]
    unsigned int v28;  // [bp-0x44]
    unsigned int v29;  // [bp-0x40]
    unsigned int v30;  // [bp-0x3c]
    unsigned int v31;  // [bp-0x24]
    unsigned int v32;  // [bp-0x20]
    unsigned int v33;  // [bp-0x1c]

    if (a0->field_4c < *(float *)&gpGlobals->field_0)
    {
        a0->field_48 = a0->field_48 + 1;
        if (a0->field_48 > 4)
        {
            v0 = 0;
            i = 0;
            do
            {
                v35 = &a0->field_c->field_88;
                *(float *)&v28 = *(float *)&a0->field_c->field_88;
                *(float *)&v29 = *(float *)&v35[1];
                *(float *)&v30 = *(float *)&v35[2];
                v36 = &(&a0->field_18)[3 * i];
                *(float *)&v25 = *(float *)v36;
                *(float *)&v26 = *(float *)&v36[1];
                *(float *)&v27 = *(float *)&v36[2];
                v37 = *(float *)&v25 - *(float *)&v28;
                v15 = v37;
                v38 = *(float *)&v26 - *(float *)&v29;
                v17 = v38;
                v39 = *(float *)&v27 - *(float *)&v30;
                v19 = v39;
                v40 = v37 * v37 + v38 * v38 + v39 * v39;
                v41 = sqrt(v40);
                if (isnan(v41))
                    sqrt(*(unsigned int *)&v40);
                else
                    v40 = v41;
                v8 = (float)v40;
                if (v8 > v0)
                {
                    v0 = v8;
                    v42 = &(a0->padding_0)[3 * i];
                    v43 = &v42->field_18;
                    v31 = v42->field_18;
                    v32 = v43->field_4;
                    v33 = v43->field_8;
                }
                i += 1;
            } while (i <= 3);
            v2 = v31;
            v4 = v32;
            v6 = v33;
            v44 = a0->field_8;
            v9 = v2;
            v10 = v4;
            v12 = v6;
            CBot::GetAimAngles(&v21, v44, &v9);
            *(float *)&v44->field_c10 = v22;
            *(float *)&v44->field_c14 = v23;
            v44->field_c18 = v24;
            a0->field_4 = 2;
            return v24;
        }
        v1 = g_engfuncs.pfnRandomLong(80, 100);
        v45 = (double)v1 + a0->field_8->field_c14;
        UTIL_WrapAngle((float)v45);
        a0->field_8->field_c14 = (float)v45;
        UTIL_MakeVectors(&a0->field_c[1].padding_0[96]);
        v46 = &gpGlobals->field_28;
        v47 = 10000.0 * gpGlobals->field_28;
        v8 = (float)v47;
        v48 = 10000.0 * *(float *)&v46[1];
        v11 = (float)v48;
        v13 = (float)(10000.0 * *(float *)&v46[2]);
        v49 = a0->field_c;
        v50 = v49 + 0x22;
        v3 = (float)(v47 + *(float *)&v49[0x22]);
        v5 = (float)(v48 + *(float *)&v50[1]);
        v7 = *(float *)&v50[2] + v13;
        UTIL_TraceHull(v50, &v3, 1, 1, v49, &v8);
        v51 = &(a0->padding_0)[3 * a0->field_48];
        v52 = &v51->field_c;
        v51->field_c = v16;
        v52->field_4 = v18;
        v52->field_8 = v20;
        g_engfuncs.pfnRandomFloat(0.4000000059604645f, 0.800000011920929f);
        a0->field_4c = (float)(0.4000000059604645 + *(float *)&gpGlobals->field_0);
        a0->field_4c = v14 + v14 + a0->field_4c;
    }
    CBot::ResetMoveSpeed(a0->field_8);
    if ((int)g_engfuncs.pfnRandomLong(0, 5) > 0x4)
    {
        v1 = g_engfuncs.pfnRandomLong(0xfffffff6, 10);
        v53 = (double)v1 + a0->field_8->field_c10;
        UTIL_WrapAngle((float)v53);
        a0->field_8->field_c10 = (float)v53;
    }
    v54 = g_engfuncs.pfnRandomLong(0, 5);
    if (v54 <= 0x4)
        return v54;
    v1 = g_engfuncs.pfnRandomLong(0xfffffff6, 10);
    v55 = (double)v1 + a0->field_8->field_c14;
    UTIL_WrapAngle((float)v55);
    v56 = a0->field_8;
    *(float *)&v56->field_c14 = (float)v55;
    return v56;
}

