// TestThink__11CTestEffect @0xb4e20 size=991
typedef struct st_4b4e20_2 {
    struct st_4b4e20_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[92];
    int field_70;
    int field_74;
    char padding_78[188];
    float field_134;
} st_4b4e20_2;

typedef struct st_4b4e20_5 {
    char padding_0[332];
    float field_14c;
} st_4b4e20_5;

typedef struct st_4b4e20_3 {
    char padding_0[308];
    float field_134;
    char padding_138[12];
    unsigned int field_144;
    char padding_148[8];
    float field_150;
    float field_154;
    unsigned int field_158;
} st_4b4e20_3;

typedef struct st_4b4e20_6 {
    struct st_4b4e20_5 *field_0;
} st_4b4e20_6;

typedef struct st_4b4e20_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[240];
    float field_104;
    char padding_108[256];
    int field_208;
} st_4b4e20_1;

typedef struct st_4b4e20_0 {
    float field_0;
} st_4b4e20_0;

typedef struct st_4b4e20_4 {
    unsigned int field_0;
} st_4b4e20_4;

extern st_4b4e20_4 *g_engfuncs.pfnRandomFloat;
extern st_4b4e20_0 *gpGlobals;

double TestThink__11CTestEffect(st_4b4e20_2 *a0)
{
    st_4b4e20_2 *v26;  // edx
    unsigned int *v27;  // edx
    st_4b4e20_2 *v36;  // ecx
    unsigned int i;  // esi
    st_4b4e20_2 *v38;  // eax
    st_4b4e20_6 **v39;  // edx
    double v40;  // mm7
    unsigned int j;  // esi
    st_4b4e20_2 *v42;  // edi
    float v43;  // 128
    st_4b4e20_2 *v44;  // edx
    st_4b4e20_2 *v45;  // ecx
    float v28;  // 128
    double v29;  // mm0
    double v30;  // mm0
    double v31;  // mm7
    double v32;  // mm0
    double v33;  // mm0
    double v34;  // mm6
    double v35;  // mm6
    int v0;  // [bp-0xf4]
    unsigned int *v1;  // [bp-0xf0]
    float v2;  // [bp-0xec]
    float v3;  // [bp-0xe8]
    st_4b4e20_3 **v4;  // [bp-0xe4]
    float v5;  // [bp-0xe0]
    unsigned short v6;  // [bp-0xd8]
    unsigned short v7;  // [bp-0xd6]
    float v8;  // [bp-0xc4]
    int v9;  // [bp-0xc4]
    float v10;  // [bp-0xc0]
    float v11;  // [bp-0xbc]
    float v12;  // [bp-0xb8]
    float v13;  // [bp-0xb4]
    float v14;  // [bp-0xb0]
    float v15;  // [bp-0xa4]
    float v16;  // [bp-0xa0]
    float v17;  // [bp-0x9c]
    float v18;  // [bp-0x84]
    float v19;  // [bp-0x80]
    float v20;  // [bp-0x7c]
    unsigned int v21;  // [bp-0x64]
    unsigned int v22;  // [bp-0x60]
    float v23;  // [bp-0x5c]
    char v24;  // [bp-0x44]
    char v25;  // [bp-0x30]

    v26 = a0;
    v5 = *(float *)gpGlobals - v26->field_134;
    if (v26->field_70 <= 23)
    {
        v4 = CBeam::BeamCreate("sprites/lgtning.spr", 100);
        v27 = &a0->field_0->field_8;
        *(float *)&v21 = a0->field_0->field_8;
        *(float *)&v22 = *(float *)&v27[1];
        v28 = *(float *)&v27[2];
        v23 = v28;
        g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
        v3 = v28;
        g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
        v2 = v28;
        g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
        v18 = v3;
        v19 = v2;
        v20 = (float)v29;
        v30 = v3 * v18 + v19 * v19 + v29 * v29;
        v31 = sqrt(v30);
        if (isnan(v31))
            sqrt(*(unsigned int *)&v30);
        else
            v30 = v31;
        v12 = (float)v30;
        v32 = v12;
        if (v32 == 0.0)
        {
            v15 = 0.0f;
            v16 = 0.0f;
            v17 = 1.0;
        }
        else
        {
            v33 = 1.0 / v32;
            v15 = (float)(v33 * v18);
            v16 = (float)(v33 * v19);
            v17 = (float)(v33 * v20);
        }
        v18 = v15;
        v19 = v16;
        v20 = v17;
        v34 = 128.0 * v18;
        v12 = (float)v34;
        v35 = 128.0 * v19;
        v13 = (float)v35;
        v14 = (float)(128.0 * v20);
        v8 = (float)(v34 + *(float *)&v21);
        v10 = (float)(v35 + *(float *)&v22);
        v11 = v23 + v14;
        UTIL_TraceLine(&v21, &v8, 1, a0->field_0->field_208, &v24);
        CBeam::PointsInit(v4, &v21, &v25);
        v9 = 0xff;
        *v4->field_150 = (float)v9;
        v9 = 180;
        *v4->field_154 = (float)v9;
        *v4->field_158 = 5.53552857e-315;
        *v4->field_144 = 5.53552857e-315;
        v9 = 12;
        *v4->field_134 = (float)v9;
        v36 = a0;
        *(float *)&v36->padding_78[92 + 4 * v36->field_70] = *(float *)gpGlobals;
        (&v36->field_74)[v36->field_70] = v4;
        v36->field_70 = v36->field_70 + 1;
    }
    if (v5 < 3.0f)
    {
        i = 0;
        v38 = a0;
        if (0 < v38->field_70)
        {
            v1 = &v38->field_74;
            do
            {
                v39 = i * 4;
                v7 = __fnstcw();
                v6 = v7 | 0xc00;
                v0 = (int)((*(float *)gpGlobals - *(float *)(v39 + &v38->padding_78[92])) / (a0->field_134 + 3.0 - *(float *)(v39 + &v38->padding_78[92])) * 255.0);
                *(float *)(*(int *)*(int *)(v39 + v1) + 332) = (float)v0;
                i += 1;
            } while ((int)i < a0->field_70);
        }
        v40 = 0.1 + *(float *)gpGlobals;
        a0->field_0->field_104 = (float)v40;
        return v40;
    }
    else
    {
        j = 0;
        v42 = a0;
        if (0 < v42->field_70)
        {
            do
            {
                UTIL_Remove((&v42->field_74)[j]);
                j += 1;
            } while ((int)j < a0->field_70);
        }
        v43 = *(float *)gpGlobals;
        v44 = a0;
        v44->field_134 = v43;
        v44->field_70 = 0;
        v45 = v44;
        v45->field_c = 0;
        v45->field_10 = 0;
        return v43;
    }
}

