// SenseSurroundingPlayers__4CBotR13danger_info_s @0x175e80 size=3335
typedef struct st_575e80_3 {
    struct st_575e80_2 *field_0;
    char padding_4[1856];
    unsigned int field_744;
} st_575e80_3;

typedef struct st_575e80_8 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_575e80_8;

typedef struct st_575e80_4 {
    struct st_575e80_0 *field_0;
    char padding_4[1856];
    unsigned int field_744;
    char padding_748[700];
    struct st_575e80_1 *field_a04;
    char padding_a08[24];
    char field_a20;
    char padding_a21[3];
    struct st_575e80_3 *field_a24;
    char padding_a28[132];
    char field_aac;
} st_575e80_4;

typedef struct st_575e80_7 {
    float field_0;
    float field_4;
    float field_8;
    float field_c;
    float field_10;
    struct st_575e80_3 *field_14;
    short field_18;
    char field_1a;
    char field_1b;
    char field_1c;
} st_575e80_7;

typedef struct st_575e80_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_575e80_0;

typedef struct st_575e80_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[244];
    unsigned int field_108;
    char padding_10c[160];
    unsigned int field_1ac;
} st_575e80_2;

typedef struct st_575e80_1 {
    char padding_0[38];
    short field_26;
    short field_28;
    char padding_2a[4];
    short field_2e;
    short field_30;
    short field_32;
    unsigned int field_34;
} st_575e80_1;

extern unsigned int g_teamplay;

double SenseSurroundingPlayers__4CBotR13danger_info_s(st_575e80_4 *a0, st_575e80_7 *a1)
{
    double v29;  // mm7
    char v30;  // al
    st_575e80_1 *v39;  // eax
    double v40;  // mm7
    int v41;  // eax
    double v42;  // mm7
    double v43;  // mm7
    double v44;  // mm7
    int v45;  // eax
    double v46;  // mm7
    double v47;  // mm7
    unsigned int *v48;  // edx
    unsigned int *v31;  // edx
    unsigned int *v49;  // edx
    float v50;  // 112
    float v51;  // 112
    float v52;  // 112
    double v53;  // mm7
    double v54;  // mm6
    unsigned int *v32;  // edx
    float v33;  // 112
    float v34;  // 112
    float v35;  // 112
    double v36;  // mm7
    double v37;  // mm6
    int iter;  // esi
    char v0;  // [bp-0xae]
    char v1;  // [bp-0xad]
    float v2;  // [bp-0xac]
    float v3;  // [bp-0xa8]
    float v4;  // [bp-0xa4]
    float v5;  // [bp-0xa0]
    float v6;  // [bp-0x9c]
    short v7;  // [bp-0x98]
    unsigned short v8;  // [bp-0x96]
    double v9;  // [bp-0x94], Other Possible Types: float
    st_575e80_8 **v10;  // [bp-0x90]
    unsigned int v11;  // [bp-0x8c]
    unsigned int v12;  // [bp-0x88]
    unsigned int v13;  // [bp-0x84]
    float v14;  // [bp-0x6c]
    float v15;  // [bp-0x68]
    float v16;  // [bp-0x64]
    float v17;  // [bp-0x60]
    float v18;  // [bp-0x5c]
    float v19;  // [bp-0x58]
    unsigned int v20;  // [bp-0x4c]
    unsigned int v21;  // [bp-0x48]
    unsigned int v22;  // [bp-0x44]
    unsigned short v23;  // [bp-0x2c]
    short v24;  // [bp-0x2a], Other Possible Types: unsigned short
    unsigned int v25;  // [bp-0x28], Other Possible Types: int
    unsigned int v26;  // [bp-0x24]
    unsigned int v27;  // [bp-0x20]
    unsigned int v28;  // [bp-0x1c]

    v7 = 0;
    if (!a0->field_a20)
        sub_48bf40(a0);
    if (!a0->field_aac)
        return v29;
    v1 = 75;
    if (a0->field_a04->field_34 == 2)
    {
        v25 = 75;
        v29 = (double)v25 * 0.8500000238418579;
        v24 = __fnstcw();
        v23 = v24 | 0xc00;
        v25 = (int)v29;
        v30 = v25;
    }
    else
    {
        if (a0->field_a04->field_34)
            goto LABEL_575f55;
        v25 = v1;
        v29 = (double)(int)v25 * 1.2;
        v24 = __fnstcw();
        v23 = v24 | 0xc00;
        v25 = (int)v29;
        v30 = v25;
    }
    v1 = v30;
LABEL_575f55:
    v0 = 0;
    if (v0 < a0->field_aac)
    {
        do
        {
            v10 = (&a0->field_a24)[v0];
            if (g_teamplay && (*v10)[21].field_8 == a0->field_0->field_1ac)
                continue;
            v31 = *v10;
            v26 = v31[2];
            v27 = v31[3];
            v28 = v31[4];
            v20 = v26;
            v21 = v27;
            v22 = v28;
            v32 = &a0->field_0->field_8;
            v33 = *(float *)&v20 - a0->field_0->field_8;
            v14 = v33;
            v34 = *(float *)&v21 - *(float *)&v32[1];
            v15 = v34;
            v35 = *(float *)&v22 - *(float *)&v32[2];
            v16 = v35;
            v36 = v33 * v33 + v34 * v34 + v35 * v35;
            v37 = sqrt(v36);
            if (isnan(v37))
                sub_487dc0(*(unsigned int *)&v36);
            else
                v36 = v37;
            v9 = (float)v36;
            v29 = v9;
            if (v29 > 2000.0 || !(v8 = sub_48aab0(a0, v10), (char)sub_489330(a0, v10) && (char)sub_48bf70(a0, v10)))
                continue;
            iter = 0;
            v39 = a0->field_a04;
            v6 = (float)v39->field_26;
            v5 = (float)v39->field_28;
            v4 = (float)v39->field_32;
            v3 = (float)v39->field_30;
            v29 = (double)v39->field_2e;
            v2 = (float)v29;
            if (*(int *)&(*v10)[13].padding_0[4] == 11)
            {
                if (v8 < v1)
                    continue;
                if (v9 < 150.0f)
                {
                    iter = 160;
                    v6 = (float)(v6 * 1.7000000476837158);
                    v40 = 0.009999999776482582;
                    v5 = (float)(v5 * 0.009999999776482582);
                    v4 = (float)(v4 * 1.100000023841858);
                }
                else
                {
                    if (v9 < 350.0f)
                    {
                        iter = 130;
                        v6 = (float)(v6 * 1.2999999523162842);
                        v40 = 0.10000000149011612;
                        v5 = (float)(v5 * 0.10000000149011612);
                        v4 = (float)(v4 * 0.75);
                    }
                    else
                    {
                        if (v9 < 500.0f)
                        {
                            iter = 100;
                            v6 = (float)(v6 * 1.25);
                            v40 = 0.25;
                            v5 = (float)(v5 * 0.25);
                            v4 = (float)(v4 * 0.30000001192092896);
                        }
                        else
                        {
                            if (v9 < 750.0f)
                            {
                                iter = 100;
                                v6 = (float)(v6 * 1.0499999523162842);
                                v5 = (float)(v5 * 0.4000000059604645);
                                v4 = (float)(v4 * 0.10000000149011612);
                                v40 = 0.44999998807907104;
                            }
                            else
                            {
                                if (v9 < 875.0f)
                                {
                                    iter = 0x55;
                                    v5 = (float)(v5 * 0.5);
                                    v4 = (float)(v4 * 0.07000000029802322);
                                    v40 = 0.6000000238418579;
                                }
                                else
                                {
                                    if (v9 < 1000.0f)
                                    {
                                        iter = 65;
                                        v5 = (float)(v5 * 0.8500000238418579);
                                        v4 = (float)(v4 * 0.05000000074505806);
                                        goto LABEL_5763ad;
                                    }
                                    if (v9 < 1250.0f)
                                    {
                                        iter = 35;
                                        v6 = (float)(v6 * 0.8999999761581421);
                                        v4 = (float)(v4 * 0.029999999329447746);
                                        goto LABEL_5763ad;
                                    }
                                    if (v9 >= 2000.0f)
                                        goto LABEL_5763ad;
                                    iter = 15;
                                    v6 = (float)(v6 * 0.75);
                                    v4 = (float)(v4 * 0.009999999776482582);
                                    v40 = 0.5;
                                }
                            }
                        }
                    }
                }
                v3 = (float)(v3 * v40);
                v2 = (float)(v40 * v2);
LABEL_5763ad:
                v41 = &v10[465]->padding_0[-1 * a0->field_744];
                if (v41 > 3000000)
                {
                    iter += 45;
                    v6 = (float)(v6 * 1.5499999523162842);
                    v4 = (float)(v4 * 0.009999999776482582);
                    v42 = 0.8999999761581421;
                }
                else
                {
                    if (v41 > 2500000)
                    {
                        iter += 30;
                        v6 = (float)(v6 * 1.4500000476837158);
                        v4 = (float)(v4 * 0.009999999776482582);
                        v42 = 0.949999988079071;
                    }
                    else
                    {
                        if (v41 > 1500000)
                        {
                            iter += 20;
                            v6 = (float)(v6 * 1.2000000476837158);
                            v43 = v4 * 0.019999999552965164;
                        }
                        else
                        {
                            if (v41 <= 800000)
                                goto LABEL_57649c;
                            iter += 10;
                            v43 = v4 * 0.20000000298023224;
                        }
                        v4 = (float)v43;
LABEL_57649c:
                        if (10.0f > *(float *)&a0->field_0->padding_14[332])
                        {
                            iter += 25;
                            v6 = (float)(v6 * 1.25);
                            v5 = (float)(v5 * 0.949999988079071);
                            v4 = (float)(v4 * 0.009999999776482582);
                            v3 = (float)(v3 * 0.8999999761581421);
                            v29 = 0.8999999761581421 * v2;
                            v2 = (float)v29;
                            goto LABEL_57657d;
                        }
                        if (25.0f > *(float *)&a0->field_0->padding_14[332])
                        {
                            iter += 15;
                            v6 = (float)(v6 * 1.100000023841858);
                            v29 = v4 * 0.05000000074505806;
                        }
                        else
                        {
                            v29 = 35.0;
                            if (35.0 <= *(float *)&a0->field_0->padding_14[332])
                                goto LABEL_57657d;
                            iter += 10;
                            v29 = v4 * 0.15000000596046448;
                        }
                        v4 = (float)v29;
LABEL_57657d:
                        if ((short)v8 <= 89)
                        {
                            iter -= 12;
                            goto LABEL_57690d;
                        }
                        else
                        {
                            if ((short)v8 <= 94)
                            {
                                iter -= 5;
                                goto LABEL_57690d;
                            }
                        }
                    }
                }
                v3 = (float)(v3 * v42);
                v2 = (float)(v42 * v2);
                goto LABEL_57649c;
            }
            else if ((char)sub_489330(a0, v10))
            {
                if (v9 < 50.0f)
                {
                    iter = 150;
                    v6 = (float)(v6 * 1.7000000476837158);
                    v44 = 0.009999999776482582;
                    v5 = (float)(v5 * 0.009999999776482582);
                    v4 = (float)(v4 * 0.10000000149011612);
                }
                else if (v9 < 120.0f)
                {
                    iter = 120;
                    v6 = (float)(v6 * 1.2999999523162842);
                    v5 = (float)(v5 * 0.10000000149011612);
                    v4 = (float)(v4 * 0.009999999776482582);
                    v44 = 0.25;
                }
                else if (v9 < 175.0f)
                {
                    iter = 80;
                    v6 = (float)(v6 * 1.0499999523162842);
                    v5 = (float)(v5 * 0.3499999940395355);
                    v4 = (float)(v4 * 0.009999999776482582);
                    v44 = 0.8500000238418579;
                }
                else
                {
                    v29 = v9;
                    if (v29 >= 250.0)
                        continue;
                    iter = 60;
                    v6 = (float)(v6 * 0.8999999761581421);
                    v5 = (float)(v5 * 0.8500000238418579);
                    v4 = (float)(v4 * 0.009999999776482582);
LABEL_57673b:
                    v45 = &v10[465]->padding_0[-1 * a0->field_744];
                    if (v45 > 3000000)
                    {
                        iter += 35;
                        v6 = (float)(v6 * 1.5499999523162842);
                        v4 = (float)(v4 * 0.009999999776482582);
                        v46 = 0.8999999761581421;
                    }
                    else if (v45 > 2500000)
                    {
                        iter += 25;
                        v6 = (float)(v6 * 1.4500000476837158);
                        v4 = (float)(v4 * 0.009999999776482582);
                        v46 = 0.949999988079071;
                    }
                    else
                    {
                        if (v45 > 1500000)
                        {
                            iter += 15;
                            v6 = (float)(v6 * 1.2000000476837158);
                            v4 = (float)(v4 * 0.019999999552965164);
                        }
LABEL_57680e:
                        if (10.0f > *(float *)&a0->field_0->padding_14[332])
                        {
                            iter += 30;
                            v6 = (float)(v6 * 1.25);
                            v5 = (float)(v5 * 0.949999988079071);
                            v4 = (float)(v4 * 0.009999999776482582);
                            v3 = (float)(v3 * 0.8999999761581421);
                            v29 = 0.8999999761581421 * v2;
                            v2 = (float)v29;
                            goto LABEL_5768ed;
                        }
                        if (25.0f > *(float *)&a0->field_0->padding_14[332])
                        {
                            iter += 20;
                            v6 = (float)(v6 * 1.100000023841858);
                            v29 = v4 * 0.05000000074505806;
                        }
                        else
                        {
                            v29 = 35.0;
                            if (35.0 <= *(float *)&a0->field_0->padding_14[332])
                                goto LABEL_5768ed;
                            iter += 10;
                            v29 = v4 * 0.15000000596046448;
                        }
                        v4 = (float)v29;
LABEL_5768ed:
                        if ((short)v8 <= 89)
                        {
                            iter -= 25;
                            goto LABEL_57690d;
                        }
                        else if ((short)v8 <= 94)
                        {
                            iter -= 10;
                            goto LABEL_57690d;
                        }
                    }
                    v3 = (float)(v3 * v46);
                    v2 = (float)(v46 * v2);
                    goto LABEL_57680e;
                }
                v3 = (float)(v3 * v44);
                v2 = (float)(v44 * v2);
                goto LABEL_57673b;
            }
            else
            {
LABEL_57690d:
                if (!a0->field_a04->field_34)
                {
                    v24 = iter;
                    v29 = (double)v24 * 0.8500000238418579;
                }
                else
                {
                    if (a0->field_a04->field_34 != 2)
                        goto LABEL_57696a;
                    v24 = iter;
                    v29 = (double)v24 * 1.25;
                }
                v24 = __fnstcw();
                v23 = v24 | 0xc00;
                v25 = (int)v29;
                iter = v25;
LABEL_57696a:
                if ((short)iter > 19)
                {
                    if ((short)iter > v7)
                    {
                        v7 = iter;
                        a1->field_0 = v6;
                        a1->field_4 = v5;
                        a1->field_8 = v4;
                        a1->field_c = v3;
                        v29 = v2;
                        a1->field_10 = (float)v29;
                        a1->field_14 = v10;
                    }
                    a1->field_18 = a1->field_18 + (unsigned short)iter;
                }
            }
        } while ((v0 += 1, v0 < a0->field_aac));
    }
    if (a1->field_18 > 160)
    {
        a1->field_0 = (float)(a1->field_0 * 1.75);
        a1->field_4 = (float)(a1->field_4 * 1.5499999523162842);
        a1->field_8 = (float)(a1->field_8 * 0.009999999776482582);
        v47 = 0.5;
        goto LABEL_576a68;
    }
    if (a1->field_18 > 200)
    {
        a1->field_0 = (float)(a1->field_0 * 1.5);
        a1->field_4 = (float)(a1->field_4 * 1.25);
        a1->field_8 = (float)(a1->field_8 * 0.07000000029802322);
        v47 = 0.75;
        goto LABEL_576a68;
    }
    else if (a1->field_18 > 175)
    {
        a1->field_0 = (float)(a1->field_0 * 1.25);
        a1->field_4 = (float)(a1->field_4 * 1.100000023841858);
        a1->field_8 = (float)(a1->field_8 * 0.15000000596046448);
        v47 = 0.8999999761581421;
LABEL_576a68:
        a1->field_c = (float)(a1->field_c * v47);
        v29 = v47 * a1->field_10;
        a1->field_10 = (float)v29;
    }
    else if (a1->field_18 > 150)
    {
        a1->field_0 = (float)(a1->field_0 * 1.0199999809265137);
        a1->field_4 = (float)(1.0199999809265137 * a1->field_4);
        v29 = a1->field_8 * 0.15000000596046448;
        a1->field_8 = (float)v29;
    }
    memset(&a1->field_1a, 0, 3);
    if (!a1->field_14)
        return v29;
    v48 = &a1->field_14->field_0->field_8;
    *(float *)&v11 = a1->field_14->field_0->field_8;
    *(float *)&v12 = *(float *)&v48[1];
    *(float *)&v13 = *(float *)&v48[2];
    v49 = &a0->field_0->field_8;
    v50 = *(float *)&v11 - a0->field_0->field_8;
    v17 = v50;
    v51 = *(float *)&v12 - *(float *)&v49[1];
    v18 = v51;
    v52 = *(float *)&v13 - *(float *)&v49[2];
    v19 = v52;
    v53 = v50 * v50 + v51 * v51 + v52 * v52;
    v54 = sqrt(v53);
    if (isnan(v54))
        sub_487dc0(*(unsigned int *)&v53);
    else
        v53 = v54;
    v9 = (float)v53;
    a1->field_1a = v9 < 250.0f;
    a1->field_1b = v9 > 350.0f;
    a1->field_1c = v9 < 1500.0f;
    return v9;
}

