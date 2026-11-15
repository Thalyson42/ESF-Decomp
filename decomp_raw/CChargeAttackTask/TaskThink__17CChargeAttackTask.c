// TaskThink__17CChargeAttackTask @0x1509d0 size=1176
typedef struct st_5509d0_2 {
    struct st_5509d0_3 *field_0;
    char padding_4[1900];
    unsigned int field_770;
} st_5509d0_2;

typedef struct st_5509d0_8 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5509d0_5 *field_8;
    struct st_5509d0_7 *field_c;
    char padding_10[8];
    unsigned int field_18;
    unsigned int field_1c;
} st_5509d0_8;

typedef struct st_5509d0_5 {
    struct st_5509d0_6 *field_0;
    char padding_4[800];
    unsigned int field_324;
    char padding_328[936];
    int field_6d0;
    char padding_6d4[812];
    struct st_5509d0_0 *field_a00;
    struct st_5509d0_1 *field_a04;
    char padding_a08[172];
    float field_ab4;
    char padding_ab8[92];
    char field_b14;
    char padding_b15[43];
    unsigned int field_b40;
    char padding_b44[40];
    struct st_5509d0_2 *field_b6c;
    char padding_b70[12];
    unsigned int field_b7c;
    struct st_5509d0_4 *field_b80;
    char padding_b84[1252];
    unsigned int field_1068;
} st_5509d0_5;

typedef struct st_5509d0_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_5509d0_3;

typedef struct st_5509d0_1 {
    char padding_0[42];
    short field_2a;
    char padding_2c[12];
    char field_38;
} st_5509d0_1;

typedef struct st_5509d0_6 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[588];
    unsigned int field_260;
} st_5509d0_6;

typedef struct st_5509d0_0 {
    char padding_0[62];
    char field_3e;
} st_5509d0_0;

typedef struct st_5509d0_7 {
    char padding_0[512];
    unsigned int field_200;
    char padding_204[136];
    unsigned int field_28c;
} st_5509d0_7;

typedef struct st_5509d0_4 {
    unsigned int field_0;
    char padding_4[66];
    char field_46;
} st_5509d0_4;

typedef struct st_5509d0_9 {
    float field_0;
} st_5509d0_9;

typedef struct st_5509d0_10 {
    unsigned int field_0;
} st_5509d0_10;

extern st_5509d0_10 *g_616928;
extern st_5509d0_9 *gpGlobals;

double TaskThink__17CChargeAttackTask(st_5509d0_8 *a0)
{
    double v14;  // mm7
    unsigned int v15;  // edi
    double v24;  // mm7
    double v25;  // mm6
    st_5509d0_5 *v26;  // edx
    st_5509d0_5 *v27;  // edx
    st_5509d0_5 *v28;  // edx
    double v29;  // mm7
    st_5509d0_5 *v30;  // edx
    unsigned int v31;  // eax
    st_5509d0_5 *v16;  // ecx
    unsigned int *v17;  // edx
    unsigned int *v18;  // edx
    float v19;  // 112
    float v20;  // 112
    float v21;  // 112
    float v22;  // 128
    unsigned int *v23;  // edx
    st_5509d0_5 *v0;  // [bp-0x9c], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x9c]
    int v2;  // [bp-0x98], Other Possible Types: unsigned int
    char v3;  // [bp-0x75]
    int v4;  // [bp-0x74]
    unsigned short v5;  // [bp-0x70]
    unsigned short v6;  // [bp-0x6e]
    float v7;  // [bp-0x68]
    float v8;  // [bp-0x54]
    float v9;  // [bp-0x50]
    float v10;  // [bp-0x4c]
    unsigned int v11;  // [bp-0x34]
    unsigned int v12;  // [bp-0x30]
    unsigned int v13;  // [bp-0x2c]

    if (a0->field_8->field_b80 && (a0->field_8->field_b6c || !(v14 = *(float *)&a0->field_8->field_b40, *(float *)gpGlobals - 2.0 >= v14)))
    {
        v15 = a0->field_8->field_b80->field_0;
        if (v15 == 16 || v15 == 22 || v15 == 12 || v15 == 15 || v15 == 13 || v15 == 24 || v15 == 19)
        {
            v0 = a0->field_8;
            sub_48d0d0(v0);
        }
        else if (!a0->field_8->field_b6c)
        {
            sub_48d7b0(a0->field_8);
        }
        else
        {
            sub_48bfd0(a0->field_8);
        }
        v16 = a0->field_8;
        if (v16->field_b6c)
        {
            v17 = &v16->field_b6c->field_0->field_8;
            *(float *)&v11 = *(float *)&v16->field_b6c->field_0->field_8;
            *(float *)&v12 = *(float *)&v17[1];
            *(float *)&v13 = *(float *)&v17[2];
            v18 = &v16->field_0->field_8;
            v19 = *(float *)&v11 - *(float *)&v16->field_0->field_8;
            v8 = v19;
            v20 = *(float *)&v12 - *(float *)&v18[1];
            v9 = v20;
            v21 = *(float *)&v13 - *(float *)&v18[2];
            v10 = v21;
            v22 = v19 * v19 + v20 * v20 + v21 * v21;
            if (isnan(sqrt(v22)))
            {
                v0 = (st_5509d0_5 *)v22;
                sub_487dc0((unsigned long long)v0);
            }
            v23 = &a0->field_8->field_b6c->field_0->field_20;
            v24 = *(float *)&a0->field_8->field_b6c->field_0->field_20 * *(float *)&a0->field_8->field_b6c->field_0->field_20 + *(float *)&v23[1] * *(float *)&v23[1] + *(float *)&v23[2] * *(float *)&v23[2];
            v25 = sqrt(v24);
            if (isnan(v25))
            {
                v0 = (st_5509d0_5 *)v24;
                sub_487dc0((unsigned long long)v0);
            }
            else
            {
                v24 = v25;
            }
            v7 = (float)v24;
            if (v7 > 550.0f)
                *(float *)&a0->field_18 = *(float *)gpGlobals;
            else
                *(float *)&a0->field_1c = *(float *)gpGlobals;
        }
        v3 = a0->field_8->field_6d0 == 100;
        v14 = *(float *)&a0->field_8->field_0->field_260;
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v4 = (int)v14;
        if (v4 > 14)
        {
            v26 = a0->field_8;
            if (v26->field_b6c)
            {
                v14 = *(float *)gpGlobals - 0.5;
                if (v14 < *(float *)&a0->field_18 && !(v14 = *(float *)gpGlobals - 4.0, v14 >= *(float *)&a0->field_1c))
                {
                    v1 = _INSERT((unsigned long long)v0, 4, v26->field_b6c);
                    v0 = v26;
                    if ((short)sub_48aab0(v0, *(unsigned int *)((void*)&v1 + 4)) <= 74)
                        goto LABEL_550d80;
                }
                else
                {
                    v1 = _INSERT((unsigned long long)v0, 4, a0->field_8->field_b6c);
                    v0 = a0->field_8;
                    if (!(char)sub_48bf70(v0, *(unsigned int *)((void*)&v1 + 4)))
                        v3 = 0;
                }
            }
            v1 = (unsigned long long)v0;
            if (v3)
                goto LABEL_550c4d;
LABEL_550d80:
            a0->field_c->field_200 = a0->field_c->field_200 | a0->field_8->field_b7c;
            v27 = a0->field_8;
            v6 = __fnstcw();
            v5 = v6 | 0xc00;
            v4 = (int)*(float *)&v27->field_0->field_260;
            if (v4 <= 124 && v27->field_324)
            {
                v0 = _INSERT(v1, 4, 0);
                v1 = _INSERT(v0, 0, v27);
                sub_48ab70(v1, *(unsigned int *)((void*)&v1 + 4));
            }
            else if (v15 != 7 && v15 != 10 && v15 != 33)
            {
                v28 = a0->field_8;
                if (v28->field_a00->field_3e)
                {
                    v6 = __fnstcw();
                    v5 = v6 | 0xc00;
                    v4 = (int)*(float *)&v28->field_0->field_260;
                    if (v4 > 250 && v28->field_6d0 <= 10)
                    {
                        v0 = _INSERT(v1, 4, 1);
                        v1 = _INSERT(v0, 0, v28);
                        sub_48ab70(v1, *(unsigned int *)((void*)&v1 + 4));
                    }
                }
            }
            v29 = 1.5 + *(float *)gpGlobals;
            a0->field_8->field_ab4 = (float)v29;
            return v29;
        }
        else
        {
LABEL_550c4d:
            sub_48bf00(a0->field_8);
            v30 = a0->field_8;
            if (v30->field_b6c && v30->field_b6c->field_770 && !v30->field_a04->field_38)
            {
                if (a0->field_c->field_28c == 7)
                    sub_48ce10(v30, "weapon_sword");
                else
                    sub_48ce10(a0->field_8, "weapon_melee");
            }
            else
            {
                if (v15 == 10)
                {
                    a0->field_8->field_1068 = 14;
                }
                else if (a0->field_8->field_6d0 > NULL)
                {
                    v2 = 100;
                    v31 = g_616928(1, v2);
                    if ((int)v31 <= a0->field_8->field_a04->field_2a)
                        a0->field_8->field_b14 = 1;
                    else
                        a0->field_8->field_b14 = 0;
                    if (!a0->field_8->field_b6c && !(*(unsigned short *)&v2 = 0, !(char)sub_48dc80(a0->field_8, v2) || !a0->field_8->field_b80->field_46))
                        a0->field_8->field_1068 = 22;
                    else
                        a0->field_8->field_1068 = 15;
                }
            }
        }
    }
    a0->field_4 = 2;
    return v14;
}

