// ReactOnDanger__11CAscendTaskP13danger_info_s @0x178ac0 size=313
typedef struct st_578ac0_3 {
    char padding_0[8];
    struct st_578ac0_1 *field_8;
    struct st_578ac0_2 *field_c;
} st_578ac0_3;

typedef struct st_578ac0_4 {
    char padding_0[24];
    short field_18;
} st_578ac0_4;

typedef struct st_578ac0_1 {
    char padding_0[1908];
    float field_774;
    char padding_778[652];
    struct st_578ac0_0 *field_a04;
    char padding_a08[20];
    unsigned int field_a1c;
    char padding_a20[156];
    int field_abc;
    char padding_ac0[88];
    float field_b18;
} st_578ac0_1;

typedef struct st_578ac0_2 {
    char padding_0[480];
    float field_1e0;
} st_578ac0_2;

typedef struct st_578ac0_0 {
    char padding_0[52];
    unsigned int field_34;
} st_578ac0_0;

typedef struct st_578ac0_5 {
    float field_0;
} st_578ac0_5;

typedef struct st_578ac0_6 {
    unsigned int field_0;
} st_578ac0_6;

extern st_578ac0_6 *g_61692c;
extern st_578ac0_5 *gpGlobals;

double ReactOnDanger__11CAscendTaskP13danger_info_s(st_578ac0_3 *a0, st_578ac0_4 *a1)
{
    st_578ac0_1 *v2;  // eax
    double v3;  // mm7
    double v4;  // mm7
    double v5;  // mm6
    double v6;  // mm7
    int v0;  // [bp-0x38]
    float v1;  // [bp-0xc]

    if (a0->field_8->field_a1c != 3 && a1->field_18 > 60)
    {
        v2 = a0->field_8;
        if (v2->field_a1c == 4)
        {
            v3 = (double)v2->field_abc;
            v4 = v3 + v3;
            if (v2->field_a04->field_34 == 2)
            {
                v4 *= 1.25;
            }
            else if (!a0->field_8->field_a04->field_34)
            {
                v4 *= 0.75;
            }
            if (v4 <= a0->field_c->field_1e0)
                goto LABEL_578b45;
        }
        else
        {
LABEL_578b45:
            v4 = 2.0;
            if (a0->field_8->field_a04->field_34 == 2)
            {
                v5 = 1.25;
            }
            else
            {
                if (a0->field_8->field_a04->field_34)
                    goto LABEL_578b7f;
                v5 = 0.75;
            }
            v1 = (float)(2.0 * v5);
            v4 = v1;
LABEL_578b7f:
            if (a0->field_8->field_774 - *(float *)gpGlobals > v4)
            {
                *(unsigned short *)&v0 = 1;
                sub_4886c0(a0->field_8, v0);
                g_61692c(10.0f, 25.0f);
                v6 = 10.0 + *(float *)gpGlobals;
                a0->field_8->field_b18 = (float)v6;
                return v6;
            }
        }
    }
    return v4;
}

