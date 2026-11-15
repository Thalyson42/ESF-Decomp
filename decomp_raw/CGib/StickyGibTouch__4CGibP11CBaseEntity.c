// StickyGibTouch__4CGibP11CBaseEntity @0xa5490 size=466
typedef struct st_4a5490_3 {
    unsigned int field_0;
} st_4a5490_3;

typedef struct st_4a5490_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[156];
    float field_104;
    unsigned int field_108;
    char padding_10c[252];
    int field_208;
} st_4a5490_0;

typedef struct st_4a5490_1 {
    struct st_4a5490_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[660];
    int field_2a8;
} st_4a5490_1;

typedef struct st_4a5490_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4a5490_2;

extern char SUB_Remove__11CBaseEntity;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4a5490_2 *gpGlobals;

unsigned int * StickyGibTouch__4CGibP11CBaseEntity(st_4a5490_1 *a0, st_4a5490_3 **a1)
{
    st_4a5490_1 *v11;  // esi
    unsigned int *v20;  // esi
    unsigned int *v21;  // edx
    st_4a5490_1 *v22;  // esi
    unsigned int *v23;  // edx
    unsigned int *v24;  // eax
    unsigned int *v12;  // eax
    unsigned int *v13;  // edx
    unsigned int *v14;  // eax
    double v15;  // mm5
    double v16;  // mm5
    unsigned int *v17;  // ecx
    st_4a5490_1 *v18;  // esi
    unsigned int *v19;  // edx
    float v0;  // [bp-0xa4]
    float v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    char v6;  // [bp-0x64]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x38]

    v11 = a0;
    v11->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    v11->field_10 = &SUB_Remove__11CBaseEntity;
    v11->field_0->field_104 = (float)(gpGlobals->field_0 + 10.0);
    if (!strcmp@GLIBC_2.0(*(int *)*a1 + gpGlobals->field_98, "worldspawn"))
    {
        v13 = a0->field_0;
        v14 = v13 + 8;
        v15 = 32.0 * *(float *)&v13[8];
        v0 = (float)v15;
        v16 = 32.0 * *(float *)&v14[1];
        v1 = (float)v16;
        v2 = (float)(32.0 * *(float *)&v14[2]);
        v17 = v13 + 2;
        v3 = (float)(v15 + *(float *)&v13[2]);
        v4 = (float)(v16 + *(float *)&v17[1]);
        v5 = *(float *)&v17[2] + v2;
        UTIL_TraceLine(v17, &v3, 1, v13[130], &v6);
        UTIL_BloodDecalTrace(&v6, a0->field_2a8);
        v18 = a0;
        v19 = v18->field_0;
        v0 = (float)(-1.0 * v7);
        v1 = (float)(-1.0 * v8);
        v2 = (float)(-1.0 * v9);
        *(float *)&v19[8] = v0;
        *(float *)&v19[9] = v1;
        *(float *)&v19[10] = v2;
        v20 = v18->field_0;
        UTIL_VecToAngles(&v0, v20 + 8);
        *(float *)&v20[20] = v0;
        *(float *)&v20[21] = v1;
        *(float *)&v20[22] = v2;
        v21 = a0->field_0;
        v21[8] = g_vecZero;
        v21[9] = g_vecZero+4;
        v21[10] = g_vecZero+8;
        v22 = a0;
        v23 = v22->field_0;
        v23[23] = g_vecZero;
        v23[24] = g_vecZero+4;
        v23[25] = g_vecZero+8;
        v24 = v22->field_0;
        v24[66] = 0;
        return v24;
    }
    v12 = a0->field_0;
    *(float *)&v12[65] = gpGlobals->field_0;
    return v12;
}

