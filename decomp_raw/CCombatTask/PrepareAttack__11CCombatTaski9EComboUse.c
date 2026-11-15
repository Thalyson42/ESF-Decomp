// PrepareAttack__11CCombatTaski9EComboUse @0x14b940 size=1541
typedef struct st_54b940_1 {
    char padding_0[136];
    char *field_88;
} st_54b940_1;

typedef struct st_54b940_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_54b940_6;

typedef struct st_54b940_7 {
    char padding_0[4];
    unsigned int field_4;
    struct st_54b940_3 *field_8;
    struct st_54b940_5 *field_c;
    struct st_54b940_8 *field_10;
} st_54b940_7;

typedef struct st_54b940_12 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[364];
    char field_178;
    char field_179;
} st_54b940_12;

typedef struct st_54b940_4 {
    short field_0;
    char padding_2[36];
    short field_26;
} st_54b940_4;

typedef struct st_54b940_8 {
    struct st_54b940_6 *field_0;
} st_54b940_8;

typedef struct st_54b940_3 {
    struct st_54b940_0 *field_0;
    char padding_4[2404];
    struct st_54b940_1 *field_968;
    char padding_96c[144];
    char field_9fc;
    char padding_9fd[7];
    struct st_54b940_4 *field_a04;
    char padding_a08[168];
    float field_ab0;
    char padding_ab4[196];
    unsigned int field_b78;
    unsigned int field_b7c;
    struct st_54b940_2 *field_b80;
    char padding_b84[1252];
    unsigned int field_1068;
} st_54b940_3;

typedef struct st_54b940_5 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[364];
    char field_200;
    char field_201;
} st_54b940_5;

typedef struct st_54b940_0 {
    char padding_0[608];
    float field_260;
} st_54b940_0;

typedef struct st_54b940_2 {
    char padding_0[4];
    char field_4;
    char padding_5[63];
    char field_44;
    char field_45;
    char padding_46[2];
    unsigned int field_48;
} st_54b940_2;

typedef struct st_54b940_9 {
    char padding_0[4];
    char field_4;
    char padding_5[63];
    char field_44;
    char field_45;
    char padding_46[2];
    float field_48;
} st_54b940_9;

typedef struct st_54b940_10 {
    float field_0;
} st_54b940_10;

typedef struct st_54b940_11 {
    unsigned int field_0;
} st_54b940_11;

extern char BotWeaponInfoTable;
extern st_54b940_11 *g_616928;
extern st_54b940_11 *g_61692c;
extern st_54b940_10 *gpGlobals;

double PrepareAttack__11CCombatTaski9EComboUse(st_54b940_7 *a0, char *a1, unsigned int a2)
{
    st_54b940_3 *v14;  // edx
    double v15;  // mm7
    double v24;  // mm7
    st_54b940_9 *v25;  // esi
    st_54b940_3 *v26;  // edx
    char *v27;  // eax
    unsigned int v28;  // edx
    unsigned int v29;  // eax
    unsigned int v30;  // edx
    double v31;  // mm7
    st_54b940_12 *v16;  // edx
    unsigned int *v17;  // edx
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    double v22;  // mm6
    st_54b940_12 *v23;  // edx
    char *v0;  // [bp-0xa8], Other Possible Types: int, unsigned int
    float v1;  // [bp-0x7c]
    char v2;  // [bp-0x75]
    float v3;  // [bp-0x68]
    float v4;  // [bp-0x54]
    float v5;  // [bp-0x50]
    float v6;  // [bp-0x4c]
    float v7;  // [bp-0x28], Other Possible Types: int
    float v8;  // [bp-0x24], Other Possible Types: unsigned short
    unsigned short v9;  // [bp-0x22]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]
    float v12;  // [bp-0x18]
    float v13;  // [bp-0x14]

    v2 = 0;
    switch (a2)
    {
    case 0:
LABEL_54bc3b:
        v2 = 1;
        break;
    case 2:
        v14 = a0->field_8;
        if (v14->field_9fc <= 1 && v14->field_a04->field_0 > 0)
        {
            v1 = (float)v14->field_a04->field_26;
            v1 += (*(float *)gpGlobals - v14->field_ab0) * v1;
            v9 = __fnstcw();
            v8 = v9 | 0xc00;
            v7 = (int)v14->field_0->field_260;
            if (v7 <= 199)
            {
                v1 = 0;
            }
            else
            {
                v9 = __fnstcw();
                v8 = v9 | 0xc00;
                v7 = (int)a0->field_8->field_0->field_260;
                if (v7 <= 399)
                {
                    v15 = 0.6;
                }
                else
                {
                    v9 = __fnstcw();
                    v8 = v9 | 0xc00;
                    v7 = (int)a0->field_8->field_0->field_260;
                    if (v7 <= 599)
                    {
                        v15 = 0.8;
                    }
                    else
                    {
                        v9 = __fnstcw();
                        v8 = v9 | 0xc00;
                        v7 = (int)a0->field_8->field_0->field_260;
                        if (v7 > 699)
                            goto LABEL_54ba9a;
                        v15 = 0.9;
                    }
                }
                v1 = (float)(v15 * v1);
            }
LABEL_54ba9a:
            v16 = &a0->field_c->field_88;
            v7 = a0->field_c->field_88;
            v8 = *(float *)&v16->field_4;
            v10 = *(float *)&v16->field_8;
            v17 = *(int *)a0->field_10 + 8;
            v11 = *(float *)(*(int *)a0->field_10 + 8);
            v12 = *(float *)&v17[1];
            v13 = *(float *)&v17[2];
            v18 = v11 - v7;
            v4 = v18;
            v19 = v12 - v8;
            v5 = v19;
            v20 = v13 - v10;
            v6 = v20;
            v21 = v18 * v18 + v19 * v19 + v20 * v20;
            v22 = sqrt(v21);
            if (isnan(v22))
                sub_487dc0(*(unsigned int *)&v21);
            else
                v21 = v22;
            v3 = (float)v21;
            if (a1 - 1 <= 0x1)
            {
                if (v3 > 2100.0f || a0->field_8->field_9fc)
                    v1 = 0;
                v23 = &a0->field_c->field_88;
                v7 = a0->field_c->field_88;
                v8 = *(float *)&v23->field_4;
                v10 = *(float *)&v23->field_8;
                if (!(char)sub_489330(a0->field_10, a0->field_8))
                    v1 = (float)(1.5 * v1);
            }
            else
            {
                *(unsigned int *)&v1 = (v3 < 500.0f ? __float_as_int((float)((double)v1 * 1.25)) : v3 < 1000.0f ? __float_as_int((float)((double)v1 * 1.0499999523162842)) : v3 < 1750.0f ? __float_as_int((float)((double)v1 * 0.8500000238418579)) : 0);
            }
            v24 = 100.0;
            g_61692c(0x3f800000, 100.0f);
            if (100.0 <= v1)
                goto LABEL_54bc3b;
            break;
        }
        break;
    default:
        goto LABEL_54bc3f;
    }
LABEL_54bc3f:
    v0 = a1;
    v25 = &(&BotWeaponInfoTable)[84 * sub_48d810(a0, v0)];
    v26 = a0->field_8;
    if (v26->field_968 && v26->field_968->field_88 != a1)
    {
        v0 = &v25->field_4;
        sub_48ce10(v26, v0);
    }
    v27 = a1 - 1;
    if (v27 <= 0x1)
    {
        *(unsigned short *)&v0 = _INSERT(v27, 0, v2);
        sub_4894f0(a0, v0);
        return v24;
    }
    switch (a1)
    {
    case 32:
        a0->field_8->field_1068 = 19;
        a0->field_4 = 2;
        return v24;
    case 128:
        a0->field_8->field_1068 = 30;
        a0->field_4 = 2;
        return v24;
    case 20:
        a0->field_8->field_1068 = 24;
        a0->field_4 = 2;
        return v24;
    case 21:
        a0->field_8->field_1068 = 25;
        a0->field_4 = 2;
        return v24;
    default:
        g_616928(1, 100);
        if (v25->field_45)
        {
            a0->field_8->field_b80 = v25;
            v28 = 1;
            if (v25->field_44)
                v28 = 0x800;
            a0->field_8->field_b7c = v28;
            if (a1 == 0x4 && v25->field_44 && !(v29 = g_616928(1, 100), (int)g_616928(1, 100) > a0->field_8->field_a04->field_0))
            {
                v0 = 28;
            }
            else
            {
                if (!v2)
                {
                    v24 = a0->field_8->field_0->field_260;
                    v9 = __fnstcw();
                    v8 = v9 | 0xc00;
                    v7 = (int)v24;
                    if (v7 > 449)
                    {
                        a0->field_8->field_1068 = 13;
                        a0->field_4 = 2;
                        return v24;
                    }
                    v0 = 26;
                }
                else
                {
                    v0 = 6;
                    sub_48c020(a0);
                    g_61692c(10.0f, 20.0f);
                    v31 = 10.0 + *(float *)gpGlobals;
                    a0->field_8->field_ab0 = (float)v31;
                    return v31;
                }
            }
        }
        else if (0.0 < v25->field_48)
        {
            a0->field_8->field_b80 = v25;
            *(float *)&a0->field_8->field_b78 = v25->field_48;
            v30 = 1;
            if (v25->field_44)
                v30 = 0x800;
            a0->field_8->field_b7c = v30;
            if (v2)
            {
                v0 = 7;
                sub_48c020(a0);
                g_61692c(10.0f, 20.0f);
                v31 = 10.0 + *(float *)gpGlobals;
                a0->field_8->field_ab0 = (float)v31;
                return v31;
            }
            v24 = a0->field_8->field_0->field_260;
            v9 = __fnstcw();
            v8 = v9 | 0xc00;
            v7 = (int)v24;
            if (v7 > 449)
            {
                a0->field_8->field_1068 = 26;
                a0->field_4 = 2;
                return v24;
            }
            v0 = 27;
        }
        else
        {
            if (!v25->field_44)
                a0->field_c->field_200 = a0->field_c->field_200 | 1;
            else
                a0->field_c->field_201 = a0->field_c->field_201 | 8;
            sub_48bf00(a0->field_8);
            return 0.0;
        }
        sub_48c020(a0);
        return v24;
    }
}

