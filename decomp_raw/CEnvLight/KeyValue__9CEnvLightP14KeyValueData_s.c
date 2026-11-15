// KeyValue__9CEnvLightP14KeyValueData_s @0xce0b0 size=631
typedef struct st_4ce0b0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4ce0b0_0;

typedef struct st_4ce0b0_1 {
    char padding_0[240];
    struct st_4ce0b0_2 *field_f0;
} st_4ce0b0_1;

typedef struct st_4ce0b0_2 {
    unsigned int field_0;
} st_4ce0b0_2;

extern st_4ce0b0_1 g_engfuncs;

int KeyValue__9CEnvLightP14KeyValueData_s(int a0, st_4ce0b0_0 *a1)
{
    unsigned int v13;  // eax
    double v14;  // mm7
    double v15;  // mm7
    double v16;  // mm7
    unsigned int v0;  // [bp-0x94]
    unsigned int v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x84]
    unsigned int v3;  // [bp-0x80]
    st_4ce0b0_1 *v4;  // [bp-0x60]
    char v5;  // [bp-0x5c], Other Possible Types: int
    char v6;  // [bp-0x58], Other Possible Types: int
    char v7;  // [bp-0x54], Other Possible Types: int
    char v8;  // [bp-0x50], Other Possible Types: int
    unsigned short v9;  // [bp-0x4c]
    unsigned short v10;  // [bp-0x4a]
    int v11;  // [bp-0x48]
    char v12;  // [bp-0x44]

    if (sub_488af0(a1->field_4, "_light"))
        return sub_489340(a0, a1);
    v13 = sub_48ce60(a1->field_8, "%d %d %d %d\n", &v5, &v6, &v7, &v8);
    switch (v13)
    {
    case 1:
        v7 = v5;
        v6 = v7;
        break;
    case 4:
        v10 = __fnstcw();
        v9 = v10 | 0xc00;
        v11 = (int)((double)v8 / 255.0 * (double)v5);
        v5 = v11;
        v10 = __fnstcw();
        v9 = v10 | 0xc00;
        v11 = (int)((double)v6 * (double)v8 / 255.0);
        v6 = v11;
        v10 = __fnstcw();
        v9 = v10 | 0xc00;
        v11 = (int)((double)v8 / 255.0 * (double)v7);
        v7 = v11;
        break;
    default:
        goto LABEL_4ce1ac;
    }
LABEL_4ce1ac:
    v3 = 0x3fe33333;
    v2 = 0x33333333;
    v14 = (double)v5 / 114.0;
    sub_48b270(*(unsigned int *)&v14);
    v10 = __fnstcw();
    v9 = v10 | 0xc00;
    v11 = (int)(v14 * 264.0);
    v5 = v11;
    v1 = 0x3fe33333;
    v0 = 0x33333333;
    v15 = (double)v6 / 114.0;
    sub_48b270(*(unsigned int *)&v15);
    v10 = __fnstcw();
    v9 = v10 | 0xc00;
    v11 = (int)(v15 * 264.0);
    v6 = v11;
    v3 = 0x3fe33333;
    v2 = 0x33333333;
    v16 = (double)v7 / 114.0;
    sub_48b270(*(unsigned int *)&v16);
    v10 = __fnstcw();
    v9 = v10 | 0xc00;
    v11 = (int)(v16 * 264.0);
    v7 = v11;
    a1->field_c = 1;
    sub_48d990(&v12, "%d", v5);
    v4 = &g_engfuncs.padding_0[0];
    v4->field_f0("sv_skycolor_r", &v12);
    sub_48d990(&v12, "%d", v6);
    v4->field_f0("sv_skycolor_g", &v12);
    sub_48d990(&v12, "%d", v7);
    return v4->field_f0("sv_skycolor_b", &v12);
}

