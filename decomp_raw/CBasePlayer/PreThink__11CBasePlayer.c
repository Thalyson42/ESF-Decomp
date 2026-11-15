// PreThink__11CBasePlayer @0xf8f00 size=2448
typedef struct st_4f8f00_5 {
    char padding_0[40];
    struct st_4f8f00_1 *field_28;
    char padding_2c[136];
    struct st_4f8f00_1 *field_b4;
} st_4f8f00_5;

typedef struct st_4f8f00_4 {
    char padding_0[268];
    unsigned int field_10c;
} st_4f8f00_4;

typedef struct st_4f8f00_1 {
    unsigned int field_0;
} st_4f8f00_1;

typedef struct st_4f8f00_10 {
    char padding_0[8];
    char field_8;
    char padding_9[319];
    unsigned int field_148;
    char padding_14c[16];
    unsigned int field_15c;
    char padding_160[16];
    unsigned int field_170;
    char padding_174[16];
    unsigned int field_184;
    char padding_188[188];
    unsigned int field_244;
    char padding_248[8];
    unsigned int field_250;
    char padding_254[52];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_4f8f00_10;

typedef struct st_4f8f00_7 {
    struct st_4f8f00_8 *field_0;
    char padding_4[688];
    unsigned int field_2b4;
} st_4f8f00_7;

typedef struct st_4f8f00_8 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4f8f00_8;

typedef struct st_4f8f00_6 {
    struct st_4f8f00_4 *field_0;
    char padding_4[92];
    struct st_4f8f00_5 *field_60;
} st_4f8f00_6;

typedef struct st_4f8f00_9 {
    char padding_0[128];
    unsigned int field_80;
    char padding_84[192];
    unsigned int field_144;
    char padding_148[64];
    unsigned int field_188;
    char padding_18c[432];
    unsigned int field_33c;
    char padding_340[100];
    unsigned int field_3a4;
    unsigned int field_3a8;
    char padding_3ac[68];
    unsigned int field_3f0;
    char padding_3f4[12];
    struct st_4f8f00_7 *field_400;
} st_4f8f00_9;

typedef struct st_4f8f00_0 {
    char padding_0[76];
    struct st_4f8f00_1 *field_4c;
} st_4f8f00_0;

typedef struct st_4f8f00_3 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4f8f00_3;

typedef struct st_4f8f00_2 {
    int field_0;
    char padding_4[64];
    struct st_4f8f00_0 *field_44;
} st_4f8f00_2;

extern float g_5bd1a8;
extern st_4f8f00_2 *g_pGameRules;
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern st_4f8f00_1 *g_616794;
extern unsigned int g_fGameOver;
extern st_4f8f00_1 *g_6168e0;
extern st_4f8f00_3 *gpGlobals;

unsigned int * PreThink__11CBasePlayer(float idx)
{
    st_4f8f00_10 *v21;  // eax
    unsigned int v22;  // edx
    unsigned int *v31;  // edx
    double v32;  // mm5
    double v33;  // mm5
    unsigned int *v34;  // edx
    unsigned int *v35;  // edx
    st_4f8f00_10 *v36;  // edx
    st_4f8f00_6 *v37;  // esi
    unsigned int *v38;  // eax
    st_4f8f00_10 *v39;  // ecx
    st_4f8f00_10 *v23;  // eax
    st_4f8f00_9 *v24;  // esi
    st_4f8f00_9 *v25;  // esi
    st_4f8f00_10 *v26;  // edx
    st_4f8f00_10 *v27;  // edx
    unsigned int v28;  // eax
    unsigned int v29;  // edx
    unsigned int *v30;  // edx
    st_4f8f00_6 *v0;  // [bp-0x10c]
    unsigned int *v1;  // [bp-0x108], Other Possible Types: float, int
    float v2;  // [bp-0x104]
    float v3;  // [bp-0xdc], Other Possible Types: unsigned int
    float v4;  // [bp-0xd8], Other Possible Types: unsigned int
    float v5;  // [bp-0xd4], Other Possible Types: unsigned int
    float v6;  // [bp-0xbc]
    float v7;  // [bp-0xb8]
    float v8;  // [bp-0xb4]
    char v9;  // [bp-0x9c]
    float v10;  // [bp-0x8c]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x58]
    float v13;  // [bp-0x54]
    unsigned int v14;  // [bp-0x3c]
    unsigned int v15;  // [bp-0x38]
    unsigned int v16;  // [bp-0x34]
    unsigned short v17;  // [bp-0x1c]
    unsigned short v18;  // [bp-0x1a]
    int v19;  // [bp-0x18]

    v21 = *(int *)idx;
    v22 = *(int *)(*(unsigned int *)&idx + 708) ^ *(int *)&v21->padding_174[12];
    *(unsigned int *)(*(unsigned int *)&idx + 712) = *(int *)&v21->padding_174[12] & v22;
    *(unsigned int *)(*(unsigned int *)&idx + 716) = v22 & ~*(int *)&v21->padding_174[12];
    v1 = idx;
    g_pGameRules->field_44->field_4c(g_pGameRules, v1);
    if (g_fGameOver)
        return &g_fGameOver;
    sub_48a800(*(int *)idx + 116);
    sub_4886f0(idx);
    sub_48d5f0(idx);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 516))(idx);
    sub_487c80(idx);
    if (*(int *)(*(int *)idx + 580))
    {
        sub_489650(idx);
        v23 = *(int *)idx;
        v23->field_184 = 0;
        return v23;
    }
    if (g_5bd1a8 == 1.0f && !*(int *)(*(unsigned int *)&idx + 0x400) || g_5bd1a8 == 0.0f && *(int *)(*(unsigned int *)&idx + 0x400))
    {
        if (*(int *)(*(unsigned int *)&idx + 892))
            goto LABEL_4f9059;
        *(unsigned int *)(*(unsigned int *)&idx + 0x400) = !*(int *)(*(unsigned int *)&idx + 0x400);
        v24 = *(unsigned int *)&idx + 896;
        sub_48b000(v24);
        sub_487b50(v24, idx);
    }
    if (!*(int *)(*(unsigned int *)&idx + 892))
        goto LABEL_4f9074;
LABEL_4f9059:
    v25 = *(unsigned int *)&idx + 896;
    sub_48cf90(v25);
    sub_48dff0(v25);
LABEL_4f9074:
    sub_48d1e0(idx);
    if (!(*(char *)(*(int *)idx + 423) & 4))
        sub_48d4b0(*(unsigned int *)&idx + 1284);
    sub_489540(idx);
    if (*(int *)(*(unsigned int *)&idx + 844) && gpGlobals->field_0 > *(float *)(*(unsigned int *)&idx + 1852))
    {
        if (*(int *)(*(unsigned int *)&idx + 848))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 848) = 0;
            *(unsigned int *)(*(int *)idx + 348) = 0;
            if (!*(int *)(*(unsigned int *)&idx + 804) && !*(int *)(*(unsigned int *)&idx + 1288))
                *(unsigned int *)(*(int *)idx + 328) = 0;
            (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 48))(*(int *)(*(unsigned int *)&idx + 1892));
        }
        *(unsigned int *)(*(unsigned int *)&idx + 844) = 0;
    }
    if (*(int *)(*(unsigned int *)&idx + 1832) && gpGlobals->field_0 - *(float *)(*(unsigned int *)&idx + 1836) > 10.0f)
    {
        sub_48deb0(*(int *)(*(unsigned int *)&idx + 1832));
        *(unsigned int *)(*(unsigned int *)&idx + 1832) = 0;
    }
    if (*(int *)(*(unsigned int *)&idx + 888) && !*(int *)(*(unsigned int *)&idx + 828))
    {
        v1 = 0;
        sub_48cfe0(idx, v1);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 48))(*(int *)(*(unsigned int *)&idx + 1892));
        *(unsigned int *)(*(unsigned int *)&idx + 888) = 0;
    }
    if (gpGlobals->field_0 - *(float *)(*(unsigned int *)&idx + 792) > 0.2)
    {
        v19 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 24))(*(int *)(*(unsigned int *)&idx + 1892));
        if ((double)v19 < *(float *)(*(int *)idx + 608))
        {
            v19 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 24))(*(int *)(*(unsigned int *)&idx + 1892));
            *(float *)(*(int *)idx + 608) = (float)(*(float *)(*(int *)idx + 608) - (double)v19);
        }
        else
        {
            if (*(int *)(*(unsigned int *)&idx + 828))
                goto LABEL_4f9238;
            *(unsigned short *)&v1 = 1;
            sub_4886c0(idx, v1);
        }
LABEL_4f9238:
        if (!*(int *)(*(unsigned int *)&idx + 800) && !*(int *)(*(unsigned int *)&idx + 804))
        {
            if (*(int *)(*(unsigned int *)&idx + 816))
                goto LABEL_4f92b4;
            if (!*(int *)(*(unsigned int *)&idx + 864) && !*(int *)(*(unsigned int *)&idx + 1220))
            {
                v26 = *(int *)idx;
                if (1000.0 > *(float *)&v26->padding_254[12] && !(*(float *)&v26->padding_254[12] = (float)(3.5 + *(float *)&v26->padding_254[12]), 1000.0 >= *(float *)(*(int *)idx + 608)))
                    *(float *)(*(int *)idx + 608) = 1000.0f;
            }
        }
        if (!*(int *)(*(unsigned int *)&idx + 816))
            goto LABEL_4f92f7;
LABEL_4f92b4:
        v27 = *(int *)idx;
        if (1000.0 > *(float *)&v27->padding_254[12] && !(*(float *)&v27->padding_254[12] = (float)(*(float *)&v27->padding_254[12] + 70.0), 1000.0 >= *(float *)(*(int *)idx + 608)))
            *(float *)(*(int *)idx + 608) = 1000.0f;
LABEL_4f92f7:
        if (*(int *)(*(unsigned int *)&idx + 804) && !sub_48c980(idx, 2))
            sub_48dbc0(idx);
        if (*(int *)(*(unsigned int *)&idx + 800) && !sub_48c980(idx, 1))
            sub_48c5a0(idx);
        if (*(int *)(*(unsigned int *)&idx + 892) && *(int *)(*(unsigned int *)&idx + 1288) && !sub_48c980(idx, 16))
            sub_48a7a0(idx);
        *(float *)(*(unsigned int *)&idx + 792) = gpGlobals->field_0;
    }
    if (*(float *)(*(unsigned int *)&idx + 1828) < gpGlobals->field_0)
        sub_48a900(idx);
    if (20.0f >= *(float *)(*(int *)idx + 608))
    {
        *(unsigned int *)(*(int *)idx + 592) = 1;
    }
    else if (*(float *)(*(unsigned int *)&idx + 1876) != 0.0)
    {
        *(unsigned int *)(*(int *)idx + 592) = 0;
    }
    if (*(int *)(*(unsigned int *)&idx + 836) && gpGlobals->field_0 > *(float *)(*(unsigned int *)&idx + 796))
        *(unsigned int *)(*(unsigned int *)&idx + 836) = 0;
    if (5.0f > *(float *)(*(int *)idx + 352))
    {
        v18 = __fnstcw();
        v17 = v18 | 0xc00;
        v19 = (int)((double)*(int *)(*(unsigned int *)&idx + 1860) - (double)*(int *)(*(unsigned int *)&idx + 1864) * 0.0001);
        if (v19 > 0)
        {
            sub_487b40(idx, v19);
        }
        else if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx))
        {
            v28 = g_6168e0(0);
            v29 = (!v28 ? 0 : v28 + 128);
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 52))(idx, v29, v29, 900.0f, 0x1000);
        }
    }
    if (*(int *)(*(unsigned int *)&idx + 1904) && 0.0 < gpGlobals->field_0 - *(float *)(*(unsigned int *)&idx + 1908))
        sub_48bf90(idx);
    if (*(int *)(*(unsigned int *)&idx + 856))
    {
        v30 = *(int *)*(int *)(*(unsigned int *)&idx + 1920) + 80;
        *(float *)&v14 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 1920) + 80);
        *(float *)&v15 = *(float *)&v30[1];
        *(float *)&v16 = *(float *)&v30[2];
        sub_48a800(&v14);
        v31 = &gpGlobals->field_28;
        v11 = gpGlobals->field_28;
        v12 = *(float *)&v31[1];
        v13 = *(float *)&v31[2];
        if (*(char *)(*(int *)idx + 421) & 2)
        {
            v13 = 0;
            *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 1920) + 80) = 0;
        }
        v32 = 32.0 * v11;
        v3 = (float)v32;
        v33 = 32.0 * v12;
        v4 = (float)v33;
        v5 = (float)(32.0 * v13);
        v34 = *(int *)idx + 8;
        v6 = (float)(v32 + *(float *)(*(int *)idx + 8));
        v7 = (float)(v33 + *(float *)&v34[1]);
        v8 = *(float *)&v34[2] + v5;
        sub_488460(v34, &v6, 0, 1, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 1920) + 520), &v9);
        if (1.0 > v10)
        {
            v35 = *(int *)*(int *)(*(unsigned int *)&idx + 1920);
            v3 = 0;
            v4 = 0;
            v5 = 0;
            v35[8] = v3;
            v35[9] = v4;
            v35[10] = v5;
            v36 = *(int *)idx;
            v3 = 0;
            v4 = 0;
            v5 = 0;
            v36->field_288 = v3;
            v36->field_28c = v4;
            v36->field_290 = v5;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 1920) + 692) = 1;
        }
        if (gpGlobals->field_0 > *(float *)(*(unsigned int *)&idx + 1844))
        {
            if (!sub_48c980(idx, 5))
            {
                sub_4895a0(idx);
            }
            else
            {
                if (g_pGameRules->field_0)
                {
                    v19 = sub_48bb90(idx);
                    v18 = __fnstcw();
                    v17 = v18 | 0xc00;
                    v19 = (int)((double)*(int *)(*(unsigned int *)&idx + 1840) + (double)v19 / (double)g_pGameRules->field_0 * 4.0);
                    *(int *)(*(unsigned int *)&idx + 1840) = v19;
                }
                *(float *)(*(unsigned int *)&idx + 1844) = (float)(0.2 + gpGlobals->field_0);
            }
        }
    }
    if (!*(int *)(*(unsigned int *)&idx + 1724))
    {
        v2 = 30.0f;
        v1 = *(int *)idx + 8;
        v0 = NULL;
        while (1)
        {
            v37 = sub_48bba0(v0, v1, v2);
            if (!v37)
                break;
            if (v37->field_60->field_28(v37) == 1 && v37->field_0->field_10c)
                v37->field_60->field_b4(v37, idx);
            v2 = 30.0f;
            v1 = *(int *)idx + 8;
            v0 = v37;
        }
    }
    sub_487eb0(idx);
    if (*(int *)(*(int *)idx + 368) > 0)
        return sub_48b0a0(idx);
    if (*(char *)(*(unsigned int *)&idx + 784) & 2)
        *(char *)(*(int *)idx + 423) = *(char *)(*(int *)idx + 423) | 1;
    else
        *(char *)(*(int *)idx + 423) = *(char *)(*(int *)idx + 423) & 254;
    if (*(char *)(*(int *)idx + 384) & 2)
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 504))(idx);
    if (!(*(char *)(*(int *)idx + 421) & 2))
        *(float *)(*(unsigned int *)&idx + 732) = -*(float *)(*(int *)idx + 40);
    v38 = sub_48d960(*(unsigned int *)&idx + 264, 0);
    if (!(*(char *)(*(unsigned int *)&idx + 784) & 4))
        return v38;
    v39 = *(int *)idx;
    *(unsigned int *)&v39->padding_9[23] = g_vecZero;
    *(unsigned int *)&v39->padding_9[27] = g_616790;
    *(st_4f8f00_1 **)&v39->padding_9[31] = g_616794;
    return g_616794;
}

