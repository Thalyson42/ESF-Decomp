// SenseSurroundingAttacks__4CBotR13danger_info_s @0x1750f0 size=3461
typedef struct st_5750f0_6 {
    char padding_0[1860];
    unsigned int field_744;
} st_5750f0_6;

typedef struct st_5750f0_0 {
    char padding_0[228];
    struct st_5750f0_1 *field_e4;
} st_5750f0_0;

typedef struct st_5750f0_3 {
    struct st_5750f0_4 *field_0;
    char padding_4[92];
    struct st_5750f0_0 *field_60;
    char padding_64[1760];
    unsigned int field_744;
    char padding_748[700];
    struct st_5750f0_2 *field_a04;
    char padding_a08[224];
    float field_ae8;
} st_5750f0_3;

typedef struct st_5750f0_10 {
    float field_0;
    float field_4;
    float field_8;
    float field_c;
    float field_10;
    struct st_5750f0_11 *field_14;
    short field_18;
    char field_1a;
    char field_1b;
    char field_1c;
} st_5750f0_10;

typedef struct st_5750f0_11 {
    struct st_5750f0_9 *field_0;
} st_5750f0_11;

typedef struct st_5750f0_1 {
    unsigned int field_0;
} st_5750f0_1;

typedef struct st_5750f0_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_5750f0_4;

typedef struct st_5750f0_12 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[364];
    struct st_5750f0_7 *field_178;
    char padding_17c[68];
    unsigned int field_1c0;
} st_5750f0_12;

typedef struct st_5750f0_9 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    struct st_5750f0_7 *field_198;
    char padding_19c[68];
    unsigned int field_1e0;
} st_5750f0_9;

typedef struct st_5750f0_8 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[364];
    struct st_5750f0_7 *field_198;
    char padding_19c[68];
    float field_1e0;
} st_5750f0_8;

typedef struct st_5750f0_7 {
    char padding_0[124];
    struct st_5750f0_6 *field_7c;
    char padding_80[428];
    unsigned int field_22c;
} st_5750f0_7;

typedef struct st_5750f0_2 {
    char padding_0[38];
    short field_26;
    short field_28;
    char padding_2a[4];
    short field_2e;
    short field_30;
    short field_32;
    unsigned int field_34;
} st_5750f0_2;

typedef struct st_5750f0_5 {
    unsigned int field_0;
    char padding_4[148];
    unsigned int field_98;
} st_5750f0_5;

extern int g_4c4b40;
extern unsigned int g_teamplay;
extern st_5750f0_1 *g_6168d4;
extern st_5750f0_5 *gpGlobals;

double SenseSurroundingAttacks__4CBotR13danger_info_s(st_5750f0_3 *a0, st_5750f0_10 *a1)
{
    double v23;  // mm7
    st_5750f0_12 *v24;  // edx
    double v33;  // mm6
    int iter;  // esi
    st_5750f0_2 *v35;  // eax
    double v36;  // mm7
    double v37;  // mm6
    st_5750f0_7 *v38;  // eax
    st_5750f0_6 *v39;  // edx
    int v40;  // eax
    double v41;  // mm7
    double v42;  // mm7
    double v25;  // mm7
    unsigned int v43;  // eax
    double v44;  // mm7
    double v45;  // mm7
    double v26;  // mm6
    st_5750f0_8 *v27;  // edx
    unsigned int *v28;  // edx
    float v29;  // 112
    float v30;  // 112
    float v31;  // 112
    double v32;  // mm7
    char v0;  // [bp-0xad]
    float v1;  // [bp-0xac]
    float v2;  // [bp-0xa8]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    short v6;  // [bp-0x98]
    short v7;  // [bp-0x96]
    float v8;  // [bp-0x94]
    st_5750f0_8 **v9;  // [bp-0x90]
    float v10;  // [bp-0x6c]
    float v11;  // [bp-0x68]
    float v12;  // [bp-0x64]
    float v13;  // [bp-0x4c]
    float v14;  // [bp-0x48]
    float v15;  // [bp-0x44]
    float v16;  // [bp-0x40]
    unsigned short v17;  // [bp-0x2c]
    short v18;  // [bp-0x2a], Other Possible Types: unsigned short
    unsigned int v19;  // [bp-0x28], Other Possible Types: int
    float v20;  // [bp-0x24]
    float v21;  // [bp-0x20]
    float v22;  // [bp-0x1c]

    if (a0->field_ae8 > *(float *)&gpGlobals->field_0)
        return a0->field_ae8;
    v23 = *(float *)&gpGlobals->field_0 + 0.10000000149011612;
    a0->field_ae8 = (float)v23;
    v9 = NULL;
    v6 = 0;
    v0 = 75;
    if (a0->field_a04->field_34 == 2)
    {
        v19 = 75;
        v23 = (double)v19 * 0.8500000238418579;
        v18 = __fnstcw();
        v17 = v18 | 0xc00;
        v19 = (int)v23;
        v0 = v19;
    }
    else if (!a0->field_a04->field_34)
    {
        v19 = v0;
        v23 = (double)(int)v19 * 1.2;
        v18 = __fnstcw();
        v17 = v18 | 0xc00;
        v19 = (int)v23;
        v0 = v19;
    }
    while (1)
    {
        v9 = sub_48bd10(v9, "globalname", "magic_attack");
        if (!v9)
            break;
        if ((char)sub_48b960(*v9->field_198) || g_teamplay && *v9->field_198->field_22c == a0->field_0->field_1ac)
            continue;
        v24 = &*v9->field_20;
        v25 = *v9->field_20 * *v9->field_20 + *(float *)&v24->field_4 * *(float *)&v24->field_4 + *(float *)&v24->field_8 * *(float *)&v24->field_8;
        v26 = sqrt(v25);
        if (isnan(v26))
            sub_487dc0(*(unsigned int *)&v25);
        else
            v25 = v26;
        v16 = (float)v25;
        v23 = v16;
        if (v23 < 10.0 || !(v7 = sub_48aab0(a0, v9), v7 >= v0))
            continue;
        v27 = *v9;
        v20 = v27->field_8;
        v21 = v27->field_c;
        v22 = v27->field_10;
        v13 = v20;
        v14 = v21;
        v15 = v22;
        v28 = &a0->field_0->field_8;
        v29 = v13 - *(float *)&a0->field_0->field_8;
        v10 = v29;
        v30 = v14 - *(float *)&v28[1];
        v11 = v30;
        v31 = v15 - *(float *)&v28[2];
        v12 = v31;
        v32 = v29 * v29 + v30 * v30 + v31 * v31;
        v33 = sqrt(v32);
        if (isnan(v33))
            sub_487dc0(*(unsigned int *)&v32);
        else
            v32 = v33;
        v8 = (float)v32;
        v23 = v8;
        if (v23 <= 2000.0)
        {
            if (v23 > 250.0 && !(char)sub_489330(a0, v9) || !a0->field_60->field_e4(a0, &*v9->field_8))
                continue;
            iter = 0;
            v35 = a0->field_a04;
            v5 = (float)v35->field_26;
            v4 = (float)v35->field_28;
            v3 = (float)v35->field_32;
            v2 = (float)v35->field_30;
            v1 = (float)v35->field_2e;
            if (v8 < 150.0f)
            {
                iter = 160;
                v5 = (float)(v5 * 1.7000000476837158);
                v36 = 0.009999999776482582;
                v4 = (float)(v4 * 0.009999999776482582);
                v3 = (float)(v3 * 1.5);
            }
            else if (v8 < 350.0f)
            {
                iter = 145;
                v5 = (float)(v5 * 1.5);
                v4 = (float)(v4 * 0.019999999552965164);
                v3 = (float)(v3 * 1.149999976158142);
                v36 = 0.10000000149011612;
            }
            else
            {
                if (v8 < 500.0f)
                {
                    iter = 125;
                    v5 = (float)(v5 * 1.25);
                    v36 = 0.15000000596046448;
                    v4 = (float)(v4 * 0.15000000596046448);
                    v37 = v2 * 0.30000001192092896;
                }
                else
                {
                    if (v8 < 750.0f)
                    {
                        iter = 100;
                        v5 = (float)(v5 * 1.100000023841858);
                        v4 = (float)(v4 * 0.30000001192092896);
                        v3 = (float)(v3 * 0.949999988079071);
                        v2 = (float)(v2 * 0.550000011920929);
                        v23 = v1 * 0.20000000298023224;
                        goto LABEL_5756d9;
                    }
                    if (v8 < 875.0f)
                    {
                        iter = 0x55;
                        v4 = (float)(v4 * 0.5);
                        v3 = (float)(v3 * 0.949999988079071);
                        v2 = (float)(v2 * 0.699999988079071);
                        v23 = v1 * 0.4000000059604645;
                        goto LABEL_5756d9;
                    }
                    if (v8 < 1000.0f)
                    {
                        iter = 75;
                        v4 = (float)(v4 * 0.8500000238418579);
                        v3 = (float)(v3 * 0.8999999761581421);
                        v23 = v1 * 0.75;
                        goto LABEL_5756d9;
                    }
                    else
                    {
                        if (v8 < 1250.0f)
                        {
                            iter = 60;
                            v3 = (float)(v3 * 0.800000011920929);
                            v23 = v2 * 0.8500000238418579;
                            v2 = (float)v23;
                            goto LABEL_5756df;
                        }
                        v23 = v8;
                        if (v23 >= 2000.0)
                            goto LABEL_5756df;
                        iter = 25;
                        v5 = (float)(v5 * 0.949999988079071);
                        v36 = 1.0499999523162842;
                        v4 = (float)(v4 * 1.0499999523162842);
                        v3 = (float)(v3 * 0.30000001192092896);
                        v37 = v2 * 0.5;
                    }
                }
LABEL_5756cd:
                v2 = (float)v37;
                v23 = v36 * v1;
LABEL_5756d9:
                v1 = (float)v23;
LABEL_5756df:
                v38 = *v9->field_198;
                if (*v9->field_198 || (v38 = g_6168d4(0), v38))
                    v39 = v38->field_7c;
                else
                    v39 = NULL;
                if (!v39)
                    continue;
                v40 = v39->field_744 - a0->field_744;
                if (v40 > &g_4c4b40)
                {
                    iter += 75;
                    v5 = (float)(v5 * 1.75);
                    v3 = (float)(v3 * 0.009999999776482582);
                    v41 = 0.8999999761581421;
                }
                else if (v40 > 3000000)
                {
                    iter += 65;
                    v5 = (float)(v5 * 1.5499999523162842);
                    v3 = (float)(v3 * 0.009999999776482582);
                    v41 = 0.949999988079071;
                }
                else
                {
                    if (v40 > 2500000)
                    {
                        iter += 55;
                        v5 = (float)(v5 * 1.2000000476837158);
                        v42 = v3 * 0.009999999776482582;
                    }
                    else if (v40 > 1750000)
                    {
                        iter += 35;
                        v42 = v3 * 0.10000000149011612;
                    }
                    else if (v40 > 1250000)
                    {
                        iter += 20;
                        v42 = v3 * 0.44999998807907104;
                    }
                    else
                    {
                        if (v40 <= 800000)
                            goto LABEL_57582c;
                        iter += 10;
                        v42 = v3 * 0.75;
                    }
                    v3 = (float)v42;
LABEL_57582c:
                    if (125.0f < *v9->field_1e0)
                    {
                        iter += 40;
                        v5 = (float)(v5 * 1.75);
                        v4 = (float)(v4 * 0.8999999761581421);
                        v3 = (float)(v3 * 0.25);
                        v2 = (float)(v2 * 0.8999999761581421);
                        v1 = (float)(0.8999999761581421 * v1);
                    }
                    else if (85.0f < *v9->field_1e0)
                    {
                        iter += 25;
                        v5 = (float)(v5 * 1.4500000476837158);
                        v3 = (float)(v3 * 0.5);
                    }
                    else if (65.0f < *v9->field_1e0)
                    {
                        iter += 10;
                        v5 = (float)(v5 * 1.2000000476837158);
                        v3 = (float)(v3 * 0.800000011920929);
                    }
                    else if (40.0f < *v9->field_1e0)
                    {
                        iter += 4;
                    }
                    if (*v9->field_1e0 > *(float *)&a0->field_0->padding_14[332])
                    {
                        iter += 60;
                        v5 = (float)(v5 * 1.4500000476837158);
                        v3 = (float)(v3 * 0.5);
                    }
                    if (10.0f > *(float *)&a0->field_0->padding_14[332])
                    {
                        iter += 45;
                        v5 = (float)(v5 * 1.5499999523162842);
                        v4 = (float)(v4 * 0.8999999761581421);
                        v3 = (float)(v3 * 0.009999999776482582);
                        v2 = (float)(v2 * 0.800000011920929);
                        v23 = v1 * 0.75;
                        v1 = (float)v23;
                    }
                    else if (25.0f > *(float *)&a0->field_0->padding_14[332])
                    {
                        iter += 25;
                        v5 = (float)(v5 * 1.25);
                        v4 = (float)(v4 * 0.949999988079071);
                        v3 = (float)(v3 * 0.05000000074505806);
                        v2 = (float)(0.949999988079071 * v2);
                        v23 = v1 * 0.8999999761581421;
                        v1 = (float)v23;
                    }
                    else
                    {
                        v23 = 35.0;
                        if (35.0 > *(float *)&a0->field_0->padding_14[332])
                        {
                            iter += 10;
                            v23 = v3 * 0.05000000074505806;
                            v3 = (float)v23;
                        }
                    }
                    if (v7 <= 89)
                    {
                        iter -= 35;
                    }
                    else if (v7 <= 94)
                    {
                        iter -= 12;
                    }
                    v43 = sub_48cad0(a0, *v9->field_0 + gpGlobals->field_98);
                    if (v43 == 1)
                    {
                        iter -= 70;
                        v5 = (float)(v5 * 0.3499999940395355);
                        v4 = (float)(0.3499999940395355 * v4);
                        v3 = (float)(v3 * 1.75);
                        v23 = v2 * 0.800000011920929;
                        v2 = (float)v23;
                        goto LABEL_575cb9;
                    }
                    if (v43 == 2)
                    {
                        iter -= 50;
                        v44 = 0.8500000238418579;
                        v5 = (float)(v5 * 0.8500000238418579);
                        v4 = (float)(v4 * 0.8500000238418579);
                        v3 = (float)(v3 * 1.25);
                    }
                    else
                    {
                        if (v43 == 3)
                        {
                            iter -= 35;
                            v4 = (float)(v4 * 0.949999988079071);
                            v23 = 0.949999988079071 * v3;
                            v3 = (float)v23;
                            goto LABEL_575cb9;
                        }
                        if (v43 == 4)
                        {
                            v5 = (float)(v5 * 1.100000023841858);
                            v4 = (float)(1.100000023841858 * v4);
                            v23 = v3 * 0.75;
                            v3 = (float)v23;
                            goto LABEL_575cb9;
                        }
                        if (v43 == 5)
                        {
                            v5 = (float)(v5 * 1.100000023841858);
                            v4 = (float)(v4 * 1.149999976158142);
                            v23 = v3 * 0.6499999761581421;
                            v3 = (float)v23;
                            goto LABEL_575cb9;
                        }
                        if (v43 == 6)
                        {
                            iter += 5;
                            v5 = (float)(v5 * 1.25);
                            v4 = (float)(v4 * 0.8500000238418579);
                            v3 = 0;
                            v44 = 0.949999988079071;
                        }
                        else
                        {
                            if (v43 == 7)
                            {
                                v23 = v5 * 1.25;
                                v5 = (float)v23;
                                v3 = 0;
                            }
LABEL_575cb9:
                            if (!a0->field_a04->field_34)
                            {
                                v18 = iter;
                                v23 = (double)v18 * 0.8500000238418579;
                            }
                            else
                            {
                                if (a0->field_a04->field_34 != 2)
                                    goto LABEL_575d11;
                                v18 = iter;
                                v23 = (double)v18 * 1.25;
                            }
                            v18 = __fnstcw();
                            v17 = v18 | 0xc00;
                            v19 = (int)v23;
                            iter = v19;
LABEL_575d11:
                            if ((short)iter > 19)
                            {
                                if ((short)iter > v6)
                                {
                                    v6 = iter;
                                    a1->field_0 = v5;
                                    a1->field_4 = v4;
                                    a1->field_8 = v3;
                                    a1->field_c = v2;
                                    v23 = v1;
                                    a1->field_10 = (float)v23;
                                    a1->field_14 = v9;
                                }
                                a1->field_18 = a1->field_18 + (unsigned short)iter;
                                continue;
                            }
                        }
                    }
                    v2 = (float)(v2 * v44);
                    v23 = v44 * v1;
                    v1 = (float)v23;
                    goto LABEL_575cb9;
                }
                v2 = (float)(v2 * v41);
                v1 = (float)(v41 * v1);
                goto LABEL_57582c;
            }
            v37 = v2 * v36;
            goto LABEL_5756cd;
        }
    }
    if (a1->field_18 > 160)
    {
        a1->field_0 = (float)(a1->field_0 * 1.75);
        a1->field_4 = (float)(a1->field_4 * 1.5499999523162842);
        a1->field_8 = (float)(a1->field_8 * 0.009999999776482582);
        v45 = 0.5;
        goto LABEL_575e26;
    }
    if (a1->field_18 > 200)
    {
        a1->field_0 = (float)(a1->field_0 * 1.5);
        a1->field_4 = (float)(a1->field_4 * 1.25);
        a1->field_8 = (float)(a1->field_8 * 0.25);
        v45 = 0.75;
        goto LABEL_575e26;
    }
    else if (a1->field_18 > 175)
    {
        a1->field_0 = (float)(a1->field_0 * 1.25);
        a1->field_4 = (float)(a1->field_4 * 1.100000023841858);
        a1->field_8 = (float)(a1->field_8 * 0.3499999940395355);
        v45 = 0.8999999761581421;
LABEL_575e26:
        a1->field_c = (float)(a1->field_c * v45);
        v23 = v45 * a1->field_10;
        a1->field_10 = (float)v23;
    }
    else if (a1->field_18 > 150)
    {
        a1->field_0 = (float)(a1->field_0 * 1.0199999809265137);
        a1->field_4 = (float)(1.0199999809265137 * a1->field_4);
        v23 = a1->field_8 * 0.75;
        a1->field_8 = (float)v23;
    }
    a1->field_1c = 0;
    a1->field_1a = 0;
    a1->field_1b = 1;
    return v23;
}

