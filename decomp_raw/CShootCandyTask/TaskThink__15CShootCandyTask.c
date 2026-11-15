// TaskThink__15CShootCandyTask @0x150070 size=1099
typedef struct st_550070_0 {
    char padding_0[136];
    unsigned int field_88;
} st_550070_0;

typedef struct st_550070_9 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_550070_9;

typedef struct st_550070_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_550070_2;

typedef struct st_550070_3 {
    struct st_550070_4 *field_0;
    char padding_4[2404];
    struct st_550070_0 *field_968;
    char padding_96c[152];
    struct st_550070_1 *field_a04;
    char padding_a08[356];
    struct st_550070_5 *field_b6c;
    unsigned int field_b70;
    char padding_b74[156];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
} st_550070_3;

typedef struct st_550070_1 {
    char padding_0[38];
    short field_26;
} st_550070_1;

typedef struct st_550070_5 {
    struct st_550070_2 *field_0;
} st_550070_5;

typedef struct st_550070_7 {
    char padding_0[4];
    unsigned int field_4;
    struct st_550070_3 *field_8;
    struct st_550070_6 *field_c;
    char padding_10[12];
    float field_1c;
    float field_20;
    float field_24;
    float field_28;
    float field_2c;
} st_550070_7;

typedef struct st_550070_6 {
    char padding_0[512];
    char field_200;
} st_550070_6;

typedef struct st_550070_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[588];
    unsigned int field_260;
} st_550070_4;

typedef struct st_550070_8 {
    unsigned int field_0;
} st_550070_8;

extern st_550070_8 *g_616928;
extern st_550070_8 *gpGlobals;

double TaskThink__15CShootCandyTask(st_550070_7 *a0)
{
    double v13;  // mm7
    st_550070_9 **v14;  // edi
    st_550070_3 *v23;  // esi
    st_550070_3 *v24;  // edx
    st_550070_3 *v25;  // ecx
    unsigned int *v26;  // edx
    unsigned int *v27;  // edx
    float v28;  // 112
    float v29;  // 112
    float v30;  // 112
    double v31;  // mm7
    double v32;  // mm6
    unsigned int *v15;  // edx
    unsigned int v33;  // eax
    double v34;  // 128
    st_550070_3 *v35;  // edx
    unsigned int *v16;  // edx
    float v17;  // 112
    float v18;  // 112
    float v19;  // 112
    double v20;  // mm7
    double v21;  // mm6
    unsigned int *v22;  // edx
    double v0;  // [bp-0x9c], Other Possible Types: unsigned long long
    float v1;  // [bp-0x74]
    float v2;  // [bp-0x70]
    float v3;  // [bp-0x6c]
    float v4;  // [bp-0x68]
    float v5;  // [bp-0x54]
    float v6;  // [bp-0x50]
    float v7;  // [bp-0x4c]
    unsigned int v8;  // [bp-0x24], Other Possible Types: float, int
    float v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x20], Other Possible Types: unsigned short
    unsigned short v11;  // [bp-0x1e]
    unsigned int v12;  // [bp-0x1c], Other Possible Types: float

    v13 = *(float *)&a0->field_8->field_0->field_260;
    v11 = __fnstcw();
    v10 = v11 | 0xc00;
    v8 = (int)v13;
    if (v8 > 49)
    {
        if (a0->field_8->field_b6c)
        {
            v24 = a0->field_8;
            if ((char)sub_48bf70(v24, CONCAT(v24->field_b6c, v24) >> 32))
            {
                v25 = a0->field_8;
                v26 = *(int *)v25->field_b6c + 8;
                *(float *)&v8 = *(float *)(*(int *)v25->field_b6c + 8);
                *(float *)&v10 = *(float *)&v26[1];
                *(float *)&v12 = *(float *)&v26[2];
                v27 = &v25->field_0->field_8;
                v28 = *(float *)&v8 - *(float *)&v25->field_0->field_8;
                v5 = v28;
                v29 = *(float *)&v10 - *(float *)&v27[1];
                v6 = v29;
                v30 = *(float *)&v12 - *(float *)&v27[2];
                v7 = v30;
                v31 = v28 * v28 + v29 * v29 + v30 * v30;
                v32 = sqrt(v31);
                if (isnan(v32))
                {
                    v0 = v31;
                    sub_487dc0(*(unsigned int *)&v0);
                }
                else
                {
                    v31 = v32;
                }
                v4 = (float)v31;
                v13 = v4;
                if (v13 <= 950.0)
                {
                    if (v13 > 500.0)
                    {
                        if (a0->field_1c <= *(float *)gpGlobals)
                        {
                            a0->field_1c = (float)(0.2 + *(float *)gpGlobals);
                            v33 = g_616928(1, 100);
                            if ((int)v33 <= a0->field_8->field_a04->field_26)
                                sub_488180(a0->field_8);
                        }
                        else
                        {
                            v11 = __fnstcw();
                            v10 = v11 | 0xc00;
                            v8 = (int)*(float *)&a0->field_8->field_0->field_260;
                            if (v8 > 250)
                            {
                                *(unsigned short *)((char *)&v0 + 4) = 1;
                                *(struct st_550070_3 **)&v0 = a0->field_8;
                                sub_48ab70(v0, *(unsigned int *)((void*)&v0 + 4));
                            }
                        }
                    }
                    else
                    {
                        if (v13 < 75.0)
                        {
                            a0->field_2c = *(float *)gpGlobals;
                            a0->field_20 = (float)(0.35 + *(float *)gpGlobals);
                        }
                        else
                        {
                            a0->field_2c = *(float *)gpGlobals;
                        }
                    }
                    v13 = *(float *)gpGlobals - 3.5;
                    if (v13 <= a0->field_2c)
                    {
                        v34 = a0->field_20;
                        if (v34 > *(float *)gpGlobals)
                            sub_488e30(a0->field_8, 8);
                        v35 = a0->field_8;
                        if (v35->field_968 && v35->field_968->field_88 != 20)
                            sub_48ce10(v35, "weapon_candy");
                        a0->field_c->field_200 = a0->field_c->field_200 | 1;
                        return v34;
                    }
                }
            }
        }
        else if (a0->field_28 == 0.0)
        {
            a0->field_28 = (float)(1.0 + *(float *)gpGlobals);
LABEL_55011b:
            if (a0->field_24 >= *(float *)gpGlobals)
                return a0->field_24;
            v13 = 0.15 + *(float *)gpGlobals;
            a0->field_24 = (float)v13;
            v14 = NULL;
            while (1)
            {
                v14 = sub_487e80(v14, "candy");
                if (v14)
                {
                    if ((char)sub_48b140(v14))
                        continue;
                    v15 = &*v14->field_8;
                    v8 = *v14->field_8;
                    v9 = *(float *)&v15[1];
                    v12 = *(float *)&v15[2];
                    v16 = &a0->field_8->field_0->field_8;
                    v17 = v8 - *(float *)&a0->field_8->field_0->field_8;
                    v5 = v17;
                    v18 = v9 - *(float *)&v16[1];
                    v6 = v18;
                    v19 = v12 - *(float *)&v16[2];
                    v7 = v19;
                    v20 = v17 * v17 + v18 * v18 + v19 * v19;
                    v21 = sqrt(v20);
                    if (isnan(v21))
                        sub_487dc0(*(unsigned int *)&v20);
                    else
                        v20 = v21;
                    v4 = (float)v20;
                    v13 = v4;
                    if (v13 <= 750.0)
                        goto LABEL_550225;
                }
                else
                {
                    if ((v13 = a0->field_28 - *(float *)gpGlobals, v13 <= 0.75))
                        break;
LABEL_550225:
                    if (!v14)
                        return v13;
                    v22 = &*v14->field_8;
                    v8 = *v14->field_8;
                    v9 = *(float *)&v22[1];
                    v12 = *(float *)&v22[2];
                    v23 = a0->field_8;
                    v1 = *v14->field_8;
                    v2 = *(float *)&v22[1];
                    v3 = *(float *)&v22[2];
                    sub_48a170(&v5, v23, &v1);
                    *(float *)&v23->field_c10 = v5;
                    *(float *)&v23->field_c14 = v6;
                    *(float *)&v23->field_c18 = v7;
                    return v3;
                }
            }
        }
        else
        {
            v13 = a0->field_28;
            if (v13 >= *(float *)gpGlobals && a0->field_8->field_b70)
                goto LABEL_55011b;
        }
    }
    a0->field_4 = 2;
    return v13;
}

