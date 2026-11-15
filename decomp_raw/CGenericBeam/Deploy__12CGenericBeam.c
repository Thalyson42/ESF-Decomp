// Deploy__12CGenericBeam @0xc5960 size=317
typedef struct st_4c5960_4 {
    char padding_0[1892];
    struct st_4c5960_3 *field_764;
} st_4c5960_4;

typedef struct st_4c5960_0 {
    char padding_0[364];
    struct st_4c5960_1 *field_16c;
} st_4c5960_0;

typedef struct st_4c5960_1 {
    unsigned int field_0;
} st_4c5960_1;

typedef struct st_4c5960_5 {
    char padding_0[96];
    struct st_4c5960_0 *field_60;
    char padding_64[28];
    struct st_4c5960_4 *field_80;
    char padding_84[64];
    unsigned int field_c4;
    char padding_c8[4];
    unsigned short field_cc;
    unsigned short field_ce;
    unsigned short field_d0;
    unsigned short field_d2;
    unsigned short field_d4;
    char padding_d6[30];
    char field_f4;
    char padding_f5[283];
    char field_210;
} st_4c5960_5;

typedef struct st_4c5960_2 {
    char padding_0[56];
    struct st_4c5960_1 *field_38;
} st_4c5960_2;

typedef struct st_4c5960_3 {
    char padding_0[4];
    struct st_4c5960_2 *field_4;
} st_4c5960_3;

typedef struct st_4c5960_6 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4c5960_6;

extern st_4c5960_6 g_pAuraColorString;
extern char _GLOBAL_OFFSET_TABLE_;

int Deploy__12CGenericBeam(st_4c5960_5 *a0)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // edx

    a0->field_60->field_16c(a0);
    a0->field_210 = 0;
    v0 = a0->field_80->field_764->field_4->field_38(a0->field_80->field_764);
    v1 = v0 * 2;
    a0->field_cc = *(short *)&a0[1].padding_0[1 + v1];
    a0->field_ce = *(short *)&a0[1].padding_0[11 + v1];
    a0->field_d0 = *(short *)&a0[1].padding_0[21 + v1];
    a0->field_d2 = *(short *)&a0[1].padding_0[31 + v1];
    a0->field_d4 = *(short *)&a0[1].padding_0[41 + v1];
    if (v0 > 4)
    {
        sub_48d990(&a0->field_f4, "%sattack", (&g_pAuraColorString.field_0)[v0]);
        a0->field_c4 = 0;
        return sub_489360(a0, "genericbeam");
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v0] - 1368268)]));
}

