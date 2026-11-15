// ReactOnDanger__17CChargeAttackTaskP13danger_info_s @0x178ce0 size=764
typedef struct st_578ce0_8 {
    char padding_0[4];
    unsigned int field_4;
    struct st_578ce0_5 *field_8;
    struct st_578ce0_7 *field_c;
} st_578ce0_8;

typedef struct st_578ce0_10 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_578ce0_10;

typedef struct st_578ce0_0 {
    char padding_0[24];
    short field_18;
} st_578ce0_0;

typedef struct st_578ce0_1 {
    unsigned int field_0;
} st_578ce0_1;

typedef struct st_578ce0_5 {
    char padding_0[800];
    unsigned int field_320;
    char padding_324[940];
    int field_6d0;
    char padding_6d4[144];
    struct st_578ce0_3 *field_764;
    char padding_768[668];
    struct st_578ce0_6 *field_a04;
    char padding_a08[8];
    char field_a10;
    char padding_a11[3];
    float field_a14;
    char padding_a18[4];
    unsigned int field_a1c;
    char padding_a20[244];
    char field_b14;
    char padding_b15[87];
    int field_b6c;
    char padding_b70[16];
    struct st_578ce0_4 *field_b80;
    char padding_b84[140];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
    char padding_c1c[1100];
    unsigned int field_1068;
} st_578ce0_5;

typedef struct st_578ce0_6 {
    char padding_0[38];
    short field_26;
    char padding_28[2];
    short field_2a;
} st_578ce0_6;

typedef struct st_578ce0_7 {
    char padding_0[512];
    char field_200;
    char padding_201[139];
    unsigned int field_28c;
} st_578ce0_7;

typedef struct st_578ce0_4 {
    char padding_0[70];
    char field_46;
} st_578ce0_4;

typedef struct st_578ce0_2 {
    char padding_0[68];
    struct st_578ce0_1 *field_44;
} st_578ce0_2;

typedef struct st_578ce0_3 {
    char padding_0[4];
    struct st_578ce0_2 *field_4;
} st_578ce0_3;

typedef struct st_578ce0_9 {
    float field_0;
} st_578ce0_9;

extern st_578ce0_1 *g_616928;
extern st_578ce0_1 *g_61692c;
extern st_578ce0_9 *gpGlobals;

char ReactOnDanger__17CChargeAttackTaskP13danger_info_s(st_578ce0_8 *a0, st_578ce0_0 *a1)
{
    int v11;  // eax
    st_578ce0_5 *v12;  // edx
    char v13;  // al
    st_578ce0_5 *v14;  // edx
    st_578ce0_5 *v15;  // eax
    st_578ce0_10 **v16;  // esi
    unsigned int v17;  // eax
    unsigned int *v18;  // edx
    st_578ce0_5 *v19;  // esi
    st_578ce0_5 *v20;  // edx
    int v0;  // [bp-0x88], Other Possible Types: unsigned int
    char v1;  // [bp-0x65]
    float v2;  // [bp-0x64]
    float v3;  // [bp-0x60]
    float v4;  // [bp-0x5c]
    char v5;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v6;  // [bp-0x40]
    unsigned int v7;  // [bp-0x3c]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    float v10;  // [bp-0x1c]

    if (a1->field_18 <= 59)
        return 0;
    v0 = 100;
    v11 = g_616928(1, v0);
    v12 = a0->field_8;
    if (v11 <= v12->field_a04->field_26 && (v13 = (v12->field_6d0 <= 0 ? 1 : v12->field_764->field_4->field_44(v12->field_764) != 0), (v12->field_6d0 <= 0 ? 1 : v12->field_764->field_4->field_44(v12->field_764) != 0)))
    {
        sub_488180(a0->field_8);
    }
    else if ((char)sub_488bd0(a0->field_8))
    {
        if (a0->field_8->field_320)
            sub_48c5a0(a0->field_8);
        a0->field_8->field_a10 = 0;
        g_61692c(0.800000011920929f, 1.2000000476837158f);
        a0->field_8->field_a14 = (float)(0.800000011920929 + *(float *)gpGlobals);
    }
    else
    {
        v14 = a0->field_8;
        if (v14->field_6d0 <= 32)
        {
LABEL_578fc9:
            return 1;
        }
        else if (v14->field_b80 && v14->field_b80->field_46 && a1->field_18 <= 99 && (*(unsigned short *)&v0 = 0, (char)sub_48dc80(v14, v0)))
        {
            a0->field_8->field_1068 = 22;
            a0->field_4 = 2;
            a0->field_c->field_200 = a0->field_c->field_200 | 1;
        }
        else
        {
            v1 = 0;
            v15 = a0->field_8;
            if (v15->field_b6c && v15->field_a1c == 1)
            {
                v16 = sub_489660(v15->field_b6c);
                if (v16 && (char)sub_48b600(a0->field_8, v16))
                {
                    v1 = 1;
                    sub_48bf00(a0->field_8);
                    v17 = g_616928(1, 100);
                    if ((int)v17 <= a0->field_8->field_a04->field_2a)
                        a0->field_8->field_b14 = 1;
                    else
                        a0->field_8->field_b14 = 0;
                    a0->field_8->field_1068 = 15;
                    a0->field_4 = 2;
                    v18 = &*v16->field_8;
                    v8 = *v16->field_8;
                    v9 = *(float *)&v18[1];
                    v10 = *(float *)&v18[2];
                    v19 = a0->field_8;
                    v2 = *v16->field_8;
                    v3 = *(float *)&v18[1];
                    v4 = *(float *)&v18[2];
                    sub_48a170(&v5, v19, &v2);
                    v19->field_c10 = v5;
                    v19->field_c14 = v6;
                    v19->field_c18 = v7;
                }
            }
            if (!v1 && a1->field_18 > 99)
            {
                v20 = a0->field_8;
                if (!v20->field_b80)
                {
                    return 1;
                }
                else if ((char)sub_48c9d0(v20, v20->field_b80))
                {
                    if (a0->field_c->field_28c == 7)
                    {
                        sub_48ce10(a0->field_8, "weapon_sword");
                        return 1;
                    }
                    sub_48ce10(a0->field_8, "weapon_melee");
                }
                goto LABEL_578fc9;
            }
        }
    }
    return 0;
}

