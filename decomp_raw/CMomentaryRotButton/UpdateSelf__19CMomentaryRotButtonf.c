// UpdateSelf__19CMomentaryRotButtonf @0x98310 size=416
typedef struct st_498310_0 {
    struct st_498310_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[240];
    unsigned int field_104;
    int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    unsigned int field_120;
    unsigned int field_124;
} st_498310_0;

typedef struct st_498310_1 {
    char padding_0[68];
    unsigned int field_44;
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[152];
    unsigned int field_100;
    unsigned int field_104;
    char padding_108[240];
    unsigned int field_1f8;
} st_498310_1;

extern char Off__19CMomentaryRotButton;
extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

unsigned int UpdateSelf__19CMomentaryRotButtonf(st_498310_0 *a0, float a1)
{
    unsigned int v3;  // edx
    unsigned int *v4;  // ecx
    unsigned int *v13;  // eax
    unsigned int v14;  // eax
    unsigned int *v5;  // edx
    unsigned int v6;  // eax
    unsigned int *v7;  // ecx
    unsigned int *v8;  // edx
    unsigned int v9;  // eax
    unsigned int *v10;  // edx
    unsigned int *v11;  // edx
    double v12;  // mm7
    float v0;  // [bp-0x34]
    float v1;  // [bp-0x30]
    float v2;  // [bp-0x2c]

    v3 = 0;
    if (!a0->field_104)
    {
        v3 = 1;
        a0->field_108 = -a0->field_108;
    }
    a0->field_104 = 1;
    *(float *)&a0->field_0->field_104 = (float)(0.1 + *(float *)&a0->field_0->field_100);
    if (a0->field_108 > 0 && (isnan(a1) ? 0x44 : 1.0 == a1 ? 63 : 1.0 < a1 ? 0 : 0xff) < 64)
    {
        v4 = a0->field_0;
        v4[23] = g_vecZero;
        v4[24] = g_616790;
        v4[25] = g_616794;
        v5 = a0->field_0;
        v5[20] = a0->field_11c;
        v5[21] = a0->field_120;
        v6 = a0->field_124;
        v5[22] = v6;
        return v6;
    }
    if (a0->field_108 < 0 && 0.0 >= a1)
    {
        v7 = a0->field_0;
        v7[23] = g_vecZero;
        v7[24] = g_616790;
        v7[25] = g_616794;
        v8 = a0->field_0;
        v8[20] = a0->field_110;
        v8[21] = a0->field_114;
        v9 = a0->field_118;
        v8[22] = v9;
        return v9;
    }
    if (v3)
        sub_48c550(a0);
    v10 = a0->field_0;
    if (*(float *)&v10[65] < *(float *)&v10[64])
        *(float *)&v10[65] = (float)(0.1 + *(float *)&v10[64]);
    else
        *(float *)&a0->field_0->field_104 = (float)(0.1 + *(float *)&a0->field_0->field_104);
    v11 = a0->field_0;
    v12 = (double)a0->field_108 * *(float *)&v11[126];
    v13 = v11 + 0x11;
    v0 = (float)(v12 * *(float *)&v11[0x11]);
    v1 = (float)(v12 * *(float *)&v13[1]);
    v2 = (float)(v12 * *(float *)&v13[2]);
    *(float *)&v11[23] = v0;
    *(float *)&v11[24] = v1;
    *(float *)&v11[25] = v2;
    v14 = _INSERT(v2, 0, 0);
    a0->field_c = v14 | 0xffff0000;
    a0->field_10 = &Off__19CMomentaryRotButton;
    return v14 | 0xffff0000;
}

