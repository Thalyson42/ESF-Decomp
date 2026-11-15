// __11CBotManager @0x13dc90 size=334
typedef struct st_53dc90_0 {
    struct st_53dc90_1 *field_0;
    char field_4;
    char field_5;
    char padding_6[2];
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[4];
    char field_14;
    char field_15;
    char field_16;
    char field_17;
    char field_18;
    char padding_19[1];
    unsigned short field_1a;
    unsigned short field_1c;
    char padding_1e[2];
    unsigned int field_20;
    char field_24;
    char field_25;
    char padding_26[2];
    unsigned int field_28;
    char field_2c;
    char padding_2d[3];
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    char field_3c;
    char padding_3d[1];
    unsigned short field_3e;
    char padding_40[3300];
    char field_d24;
    char padding_d25[3];
    unsigned int field_d28;
    unsigned short field_d2c;
    char padding_d2e[2];
    unsigned int field_d30;
    unsigned int field_d34;
    unsigned int field_d38;
    unsigned int field_d3c;
    unsigned int field_d40;
    char padding_d44[1];
    char field_d45;
    char field_d46;
    char field_d47;
    char field_d48;
    char field_d49;
    char field_d4a;
    char field_d4b;
    char field_d4c;
    char field_d4d;
    char padding_d4e[542];
    unsigned short field_f6c;
    char padding_f6e[390];
    char field_10f4;
} st_53dc90_0;

typedef struct st_53dc90_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_53dc90_1;

st_53dc90_0 * __11CBotManager(st_53dc90_0 *a0)
{
    unsigned int *v0;  // eax

    a0->field_4 = 0;
    a0->field_5 = 0;
    a0->field_8 = 0;
    a0->field_c = 0;
    *(float *)a0->padding_10 = 30.0f;
    a0->field_14 = 0;
    a0->field_15 = 0;
    a0->field_16 = 0;
    a0->field_17 = 0;
    a0->field_18 = 0;
    a0->field_1a = 0xffff;
    a0->field_1c = 0xffff;
    a0->field_20 = 0;
    a0->field_24 = 0;
    a0->field_25 = 0;
    a0->field_28 = 0;
    a0->field_2c = 0;
    a0->field_30 = 0;
    a0->field_34 = 0;
    a0->field_38 = 0;
    a0->field_3c = 1;
    a0->field_3e = 0;
    a0->field_d24 = 1;
    a0->field_d28 = 0;
    a0->field_d2c = 1;
    a0->field_d30 = 0;
    a0->field_d34 = 0;
    a0->field_d38 = 0;
    a0->field_d3c = 0;
    a0->field_d40 = 0;
    a0->field_d45 = 0;
    a0->field_d46 = 1;
    a0->field_d47 = 1;
    a0->field_d48 = 1;
    a0->field_d49 = 1;
    a0->field_d4a = 0;
    a0->field_d4b = 0;
    a0->field_d4c = 0;
    a0->field_d4d = 1;
    a0->field_f6c = 0xffff;
    a0->field_10f4 = 0;
    v0 = sub_48d6a0(8);
    *v0 = 0;
    v0[1] = 0;
    a0->field_0 = v0;
    return a0;
}

