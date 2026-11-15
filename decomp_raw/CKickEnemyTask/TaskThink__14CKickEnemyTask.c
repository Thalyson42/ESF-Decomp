// TaskThink__14CKickEnemyTask @0x183ac0 size=803
typedef struct st_583ac0_1 {
    char padding_0[136];
    unsigned int field_88;
} st_583ac0_1;

typedef struct st_583ac0_6 {
    char padding_0[264];
    unsigned int field_108;
} st_583ac0_6;

typedef struct st_583ac0_7 {
    char padding_0[4];
    unsigned int field_4;
    struct st_583ac0_4 *field_8;
    struct st_583ac0_0 *field_c;
    struct st_583ac0_8 *field_10;
    char padding_14[4];
    unsigned int field_18;
} st_583ac0_7;

typedef struct st_583ac0_10 {
    struct st_583ac0_5 *field_0;
    char padding_4[2404];
    struct st_583ac0_1 *field_968;
    char padding_96c[148];
    struct st_583ac0_2 *field_a00;
    struct st_583ac0_3 *field_a04;
    char padding_a08[172];
    unsigned int field_ab4;
    char padding_ab8[180];
    struct st_583ac0_10 *field_b6c;
} st_583ac0_10;

typedef struct st_583ac0_4 {
    struct st_583ac0_5 *field_0;
    char padding_4[2404];
    struct st_583ac0_1 *field_968;
    char padding_96c[148];
    struct st_583ac0_2 *field_a00;
    struct st_583ac0_3 *field_a04;
    char padding_a08[172];
    float field_ab4;
    char padding_ab8[180];
    struct st_583ac0_4 *field_b6c;
} st_583ac0_4;

typedef struct st_583ac0_3 {
    char padding_0[38];
    short field_26;
} st_583ac0_3;

typedef struct st_583ac0_8 {
    struct st_583ac0_6 *field_0;
} st_583ac0_8;

typedef struct st_583ac0_5 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[588];
    unsigned int field_260;
} st_583ac0_5;

typedef struct st_583ac0_2 {
    char padding_0[62];
    char field_3e;
} st_583ac0_2;

typedef struct st_583ac0_0 {
    char padding_0[513];
    char field_201;
    char padding_202[138];
    unsigned int field_28c;
} st_583ac0_0;

typedef struct st_583ac0_9 {
    float field_0;
} st_583ac0_9;

typedef struct st_583ac0_11 {
    unsigned int field_0;
} st_583ac0_11;

extern st_583ac0_11 *g_616928;
extern st_583ac0_9 *gpGlobals;

st_583ac0_0 * TaskThink__14CKickEnemyTask(st_583ac0_7 *a0)
{
    st_583ac0_4 *v12;  // ecx
    unsigned int *v13;  // edx
    st_583ac0_4 *v22;  // edx
    st_583ac0_0 *v23;  // eax
    unsigned int *v14;  // edx
    float v15;  // 112
    float v16;  // 112
    float v17;  // 112
    double v18;  // mm7
    double v19;  // mm6
    unsigned int v20;  // eax
    st_583ac0_4 *v21;  // edx
    st_583ac0_4 *v0;  // [bp-0x9c]
    st_583ac0_10 *v1;  // [bp-0x98], Other Possible Types: int
    float v2;  // [bp-0x78]
    int v3;  // [bp-0x64]
    unsigned short v4;  // [bp-0x60]
    unsigned short v5;  // [bp-0x5e]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    if (a0->field_8->field_b6c && *(int *)(*(int *)a0->field_10 + 264) != 11 && (char)sub_48bf70(a0->field_8, a0->field_8->field_b6c))
    {
        if ((char)sub_487bd0(a0->field_8, a0->field_10))
        {
            *(float *)&a0->field_18 = *(float *)gpGlobals;
        }
        else if (*(float *)gpGlobals - *(float *)&a0->field_18 > 0.20000000298023224f)
        {
            a0->field_4 = 2;
            return v23;
        }
        v12 = a0->field_8;
        v13 = &v12->field_b6c->field_0->field_8;
        *(float *)&v9 = *(float *)&v12->field_b6c->field_0->field_8;
        *(float *)&v10 = *(float *)&v13[1];
        *(float *)&v11 = *(float *)&v13[2];
        v14 = &v12->field_0->field_8;
        v15 = *(float *)&v9 - *(float *)&v12->field_0->field_8;
        v6 = v15;
        v16 = *(float *)&v10 - *(float *)&v14[1];
        v7 = v16;
        v17 = *(float *)&v11 - *(float *)&v14[2];
        v8 = v17;
        v18 = v15 * v15 + v16 * v16 + v17 * v17;
        v19 = sqrt(v18);
        if (isnan(v19))
            sub_487dc0(*(unsigned int *)&v18);
        else
            v18 = v19;
        v2 = (float)v18;
        if (v2 < 30.0f)
        {
            v1 = 0x8;
            sub_488e30(a0->field_8, v1);
        }
        else if (v2 < 350.0f)
        {
            v1 = 0x10;
            sub_488e30(a0->field_8, v1);
            if (v2 <= 150.0f || !(v1 = a0->field_8->field_b6c, !(char)sub_489330(a0->field_8, v1) && (v1 = a0->field_8, !(char)sub_489330(a0->field_8->field_b6c, v1))))
                goto LABEL_583d0a;
            sub_48d0d0(a0->field_8);
        }
        else if (v2 < 750.0f)
        {
            v5 = __fnstcw();
            v4 = v5 | 0xc00;
            v3 = (int)*(float *)&a0->field_8->field_0->field_260;
            if (v3 <= 450)
            {
                a0->field_4 = 2;
                return v23;
            }
            v1 = 0x64;
            v20 = g_616928(1, v1);
            if ((int)v20 > a0->field_8->field_a04->field_26)
            {
                a0->field_4 = 2;
                return v23;
            }
            sub_488180(a0->field_8);
        }
        else
        {
            a0->field_4 = 2;
            return v23;
        }
LABEL_583d0a:
        v21 = a0->field_8;
        if (v21->field_968 && v21->field_968->field_88 != 1 && v21->field_968->field_88 != 2)
        {
            if (a0->field_c->field_28c == 7)
            {
                v1 = "weapon_sword";
                v0 = v21;
            }
            else
            {
                v1 = "weapon_melee";
                v0 = a0->field_8;
            }
            sub_48ce10(v0, v1);
        }
        v22 = a0->field_8;
        if (v22->field_a00->field_3e)
        {
            v5 = __fnstcw();
            v4 = v5 | 0xc00;
            v3 = (int)*(float *)&v22->field_0->field_260;
            if (v3 > 200)
            {
                *(unsigned short *)&v1 = 1;
                sub_48ab70(v22, v1);
                a0->field_8->field_ab4 = (float)(1.5 + *(float *)gpGlobals);
            }
        }
        v23 = a0->field_c;
        v23->field_201 = v23->field_201 | 8;
        return v23;
    }
    a0->field_4 = 2;
    return v23;
}

