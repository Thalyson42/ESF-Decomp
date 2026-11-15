// _._10CSwoopTask @0x14d750 size=138
typedef struct st_54d750_0 {
    char padding_0[3044];
    unsigned int field_be4;
    unsigned int field_be8;
    unsigned int field_bec;
    unsigned int field_bf0;
    char padding_bf4[4];
    unsigned int field_bf8;
    float field_bfc;
} st_54d750_0;

typedef struct st_54d750_1 {
    char padding_0[8];
    struct st_54d750_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
    char padding_18[24];
    char field_30;
} st_54d750_1;

extern char __vt_10CSwoopTask;
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

int _._10CSwoopTask(st_54d750_1 *a0, int a1)
{
    st_54d750_0 *v1;  // ecx
    unsigned short v0;  // [bp-0x6]

    a0->field_14 = &__vt_10CSwoopTask;
    v1 = a0->field_8;
    v1->field_be8 = g_vecZero;
    v1->field_bec = g_616790;
    v1->field_bf0 = g_616794;
    a0->field_8->field_be4 = 0;
    a0->field_8->field_bf8 = 0;
    v0 = a0->field_30;
    a0->field_8->field_bfc = (float)v0;
    return sub_488170(a0, a1);
}

