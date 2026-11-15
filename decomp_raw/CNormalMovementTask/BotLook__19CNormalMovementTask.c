// BotLook__19CNormalMovementTask @0x171ad0 size=971
typedef struct st_571ad0_1 {
    char padding_0[8];
    struct st_571ad0_0 *field_8;
    struct st_571ad0_2 *field_c;
} st_571ad0_1;

typedef struct st_571ad0_0 {
    char padding_0[3088];
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
    char padding_c1c[364];
    float field_d88;
} st_571ad0_0;

typedef struct st_571ad0_2 {
    char padding_0[136];
    float field_88;
    float field_8c;
    float field_90;
    char padding_94[96];
    float field_f4;
    float field_f8;
    float field_fc;
    char padding_100[244];
    float field_1f4;
    float field_1f8;
    float field_1fc;
} st_571ad0_2;

typedef struct st_571ad0_3 {
    unsigned int field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_571ad0_3;

extern st_571ad0_3 *gpGlobals;

double BotLook__19CNormalMovementTask(st_571ad0_1 *a0)
{
    unsigned int *v38;  // edx
    double v39;  // mm7
    st_571ad0_0 *v49;  // esi
    unsigned int *v50;  // eax
    int v2;  // [bp-0x174]
    int v3;  // [bp-0x170]
    float v4;  // [bp-0x16c]
    float v5;  // [bp-0x168]
    unsigned int v6;  // [bp-0x164]
    unsigned int v7;  // [bp-0x160]
    double v8;  // [bp-0x15c]
    char v9;  // [bp-0x144], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x140]
    unsigned int v11;  // [bp-0x13c]
    unsigned int v12;  // [bp-0x124]
    unsigned int v15;  // [bp-0x120]
    double v16;  // [bp-0x11c]
    float v27;  // [bp-0xe4]
    float v28;  // [bp-0xe0]
    float v29;  // [bp-0xdc]

    if (a0->field_8->field_d88 > *(float *)&gpGlobals->field_0)
        return a0->field_8->field_d88;
    v38 = &a0->field_c->field_88;
    v27 = a0->field_c->field_88;
    v28 = *(float *)&v38[1];
    v29 = *(float *)&v38[2];
    v4 = 0;
    v3 = 0;
    v2 = -0x1;
    v39 = -45.0;
    v5 = -45.0f;
    if (v2 < 0)
        return v39;
    v49 = a0->field_8;
    v50 = &v49->padding_0[32 * v2 + 3480];
    *(float *)&v12 = *(float *)v50;
    *(float *)&v15 = *(float *)&v50[1];
    v16 = *(float *)&v50[2];
    *(float *)&v6 = *(float *)v50;
    *(float *)&v7 = *(float *)&v50[1];
    v8 = *(float *)&v50[2];
    sub_48a170(&v9, v49, &v6);
    v49->field_c10 = v9;
    v49->field_c14 = v10;
    v49->field_c18 = v11;
    return v8;
}

