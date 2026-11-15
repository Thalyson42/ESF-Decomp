// TaskThink__15CNormalJumpTask @0x185820 size=300
typedef struct st_585820_1 {
    char padding_0[2564];
    struct st_585820_0 *field_a04;
    char padding_a08[240];
    short field_af8;
} st_585820_1;

typedef struct st_585820_3 {
    char padding_0[4];
    unsigned int field_4;
    struct st_585820_1 *field_8;
    struct st_585820_2 *field_c;
    char padding_10[8];
    unsigned int field_18;
    float field_1c;
} st_585820_3;

typedef struct st_585820_0 {
    char padding_0[38];
    short field_26;
} st_585820_0;

typedef struct st_585820_4 {
    float field_0;
} st_585820_4;

typedef struct st_585820_2 {
    char padding_0[168];
    unsigned int field_a8;
    char padding_ac[240];
    unsigned int field_19c;
    char padding_1a0[96];
    char field_200;
    char padding_201[36];
    char field_225;
} st_585820_2;

typedef struct st_585820_5 {
    unsigned int field_0;
} st_585820_5;

extern st_585820_5 *g_616928;
extern st_585820_5 *g_61692c;
extern st_585820_4 *gpGlobals;

double TaskThink__15CNormalJumpTask(st_585820_3 *a0)
{
    double v1;  // mm7
    double v2;  // mm7
    unsigned int v3;  // eax
    st_585820_4 **v0;  // [bp-0x18]

    a0->field_c->field_200 = a0->field_c->field_200 | 2;
    v1 = *(float *)&a0->field_18;
    if (v1 <= *(float *)gpGlobals)
    {
        a0->field_4 = 2;
        return v1;
    }
    else if (0.0 <= *(float *)&a0->field_c->field_a8)
    {
        if (0.1 > *(float *)&a0->field_c->field_19c)
        {
            if (a0->field_c->field_225 & 2)
            {
                sub_48c5a0(a0->field_8);
            }
            else
            {
                a0->field_4 = 2;
                return 0.1;
            }
        }
        sub_488e30(a0->field_8, a0->field_8->field_af8);
        v0 = &gpGlobals;
        if (a0->field_1c >= *(float *)gpGlobals)
            return a0->field_1c;
        g_61692c(0.25f, 0.4000000059604645f);
        v2 = 0.25 + *(float *)*v0;
        a0->field_1c = (float)v2;
        v3 = g_616928(1, 100);
        if ((int)v3 > a0->field_8->field_a04->field_26)
            return v2;
        sub_488180(a0->field_8);
        return v2;
    }
    else
    {
        a0->field_4 = 2;
        return 0.0;
    }
}

