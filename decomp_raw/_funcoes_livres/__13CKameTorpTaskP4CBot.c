// __13CKameTorpTaskP4CBot @0x151b70 size=266
typedef struct st_551b70_1 {
    char padding_0[2564];
    struct st_551b70_0 *field_a04;
} st_551b70_1;

typedef struct st_551b70_0 {
    char padding_0[52];
    unsigned int field_34;
} st_551b70_0;

typedef struct st_551b70_2 {
    unsigned int field_0;
    char padding_4[4];
    struct st_551b70_1 *field_8;
    char padding_c[8];
    unsigned int field_14;
    char field_18;
    char padding_19[19];
    unsigned int field_2c;
    float field_30;
    unsigned int field_34;
    unsigned short field_38;
    char field_3a;
} st_551b70_2;

typedef struct st_551b70_3 {
    unsigned int field_0;
} st_551b70_3;

extern char __vt_13CKameTorpTask;
extern st_551b70_3 *g_engfuncs.pfnRandomFloat;

st_551b70_2 * __13CKameTorpTaskP4CBot(double a0, st_551b70_2 *a1, int a2)
{
    double v0;  // mm7

    __9CBaseTaskP4CBot(a1, a2);
    a1->field_14 = &__vt_13CKameTorpTask;
    v0 = 35.0;
    g_engfuncs.pfnRandomFloat(35.0f, 43.0f);
    if (a1->field_8->field_a04->field_34 == 2)
    {
        v0 = 35.0 * 1.2000000476837158;
    }
    else if (!a1->field_8->field_a04->field_34)
    {
        v0 = 35.0 * 0.800000011920929;
    }
    a1->field_30 = (float)(v0 + *(float *)&a1->field_0);
    a1->field_34 = 0;
    a1->field_38 = 6;
    a1->field_3a = 0;
    a1->field_2c = 0;
    memset(&a1->field_18, 0, 0x11);
    return a1;
}

