// CheckSecondaryFire__10CSwoopTask @0x14e460 size=295
typedef struct st_54e460_1 {
    char padding_0[22];
    unsigned short field_16;
} st_54e460_1;

typedef struct st_54e460_2 {
    struct st_54e460_0 *field_0;
    char padding_4[2552];
    char field_9fc;
    char padding_9fd[7];
    struct st_54e460_1 *field_a04;
} st_54e460_2;

typedef struct st_54e460_3 {
    char padding_0[8];
    struct st_54e460_2 *field_8;
    char padding_c[4];
    struct st_54e460_4 *field_10;
    char padding_14[4];
    char field_18;
    char field_19;
} st_54e460_3;

typedef struct st_54e460_4 {
    unsigned int field_0;
} st_54e460_4;

typedef struct st_54e460_0 {
    char padding_0[608];
    float field_260;
} st_54e460_0;

extern st_54e460_4 *g_6168a4;
extern st_54e460_4 *g_616928;

int CheckSecondaryFire__10CSwoopTask(double a0, st_54e460_3 *a1)
{
    unsigned short v7;  // si
    int v0;  // [bp-0x2c]
    unsigned short v1;  // [bp-0x28]
    unsigned short v2;  // [bp-0x26]
    int v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]
    unsigned short v6;  // [bp-0x6]

    a1->field_18 = 1;
    g_6168a4("mp_simplemelee");
    if (a0 != 1.0)
    {
        v7 = a1->field_8->field_a04->field_16;
        if (5.0f > *(float *)(*(int *)a1->field_10 + 352) && a1->field_8->field_9fc <= 2)
        {
            v5 = v7;
            v6 = __fnstcw();
            v4 = v6 | 0xc00;
            v3 = (int)((double)v5 * 1.5);
            v7 = v3;
        }
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)a1->field_8->field_0->field_260;
        if (v0 <= 299)
        {
            v5 = v7;
            v6 = __fnstcw();
            v4 = v6 | 0xc00;
            v3 = (int)((double)v5 * 1.2000000476837158);
            v7 = v3;
        }
        if ((int)g_616928(1, 100) > v7)
            return v7;
    }
    a1->field_19 = 1;
    return v7;
}

