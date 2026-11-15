// Blocked__15CFuncTrackTrainP11CBaseEntity @0xeaee0 size=521
typedef struct st_4eaee0_7 {
    char padding_0[244];
    struct st_4eaee0_3 *field_f4;
} st_4eaee0_7;

typedef struct st_4eaee0_3 {
    unsigned int field_0;
} st_4eaee0_3;

typedef struct st_4eaee0_9 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[12];
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[368];
    struct st_4eaee0_0 *field_194;
    char padding_198[5];
    char field_19d;
} st_4eaee0_9;

typedef struct st_4eaee0_1 {
    unsigned int field_0;
    char padding_4[4];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    float field_28;
    char padding_2c[368];
    struct st_4eaee0_0 *field_19c;
    char padding_1a0[5];
    char field_1a5;
} st_4eaee0_1;

typedef struct st_4eaee0_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[440];
    unsigned int field_1cc;
    char padding_1d0[16];
    float field_1e0;
    char padding_1e4[20];
    unsigned int field_1f8;
} st_4eaee0_6;

typedef struct st_4eaee0_5 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[440];
    unsigned int field_1cc;
    char padding_1d0[16];
    unsigned int field_1e0;
    char padding_1e4[20];
    float field_1f8;
} st_4eaee0_5;

typedef struct st_4eaee0_2 {
    char padding_0[52];
    struct st_4eaee0_3 *field_34;
} st_4eaee0_2;

typedef struct st_4eaee0_0 {
    char padding_0[128];
    char field_80;
    char padding_81[7];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[440];
    unsigned int field_24c;
    char padding_250[16];
    unsigned int field_260;
    char padding_264[20];
    unsigned int field_278;
} st_4eaee0_0;

typedef struct st_4eaee0_4 {
    struct st_4eaee0_1 *field_0;
    char padding_4[92];
    struct st_4eaee0_2 *field_60;
} st_4eaee0_4;

typedef struct st_4eaee0_8 {
    char padding_0[152];
    unsigned int field_98;
} st_4eaee0_8;

extern st_4eaee0_7 g_engfuncs;
extern st_4eaee0_8 *gpGlobals;

double Blocked__15CFuncTrackTrainP11CBaseEntity(st_4eaee0_6 **a0, st_4eaee0_4 *a1)
{
    st_4eaee0_1 *v12;  // esi
    st_4eaee0_5 *v13;  // eax
    double v22;  // mm6
    double v23;  // mm7
    float v24;  // 128
    st_4eaee0_6 *v25;  // edx
    double v14;  // mm7
    double v15;  // mm7
    st_4eaee0_9 *v16;  // ecx
    unsigned int *v17;  // edx
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    st_4eaee0_7 *v0;  // [bp-0x98]
    float v1;  // [bp-0x88]
    float v2;  // [bp-0x74]
    float v3;  // [bp-0x70]
    float v4;  // [bp-0x6c]
    float v5;  // [bp-0x54]
    float v6;  // [bp-0x50]
    float v7;  // [bp-0x4c]
    float v8;  // [bp-0x34]
    float v9;  // [bp-0x30]
    float v10;  // [bp-0x2c]
    unsigned int v11;  // [bp-0x8]

    v12 = a1->field_0;
    if (v12->field_1a5 & 2)
    {
        v13 = (!v12->field_19c ? NULL : (struct st_4eaee0_0 *)&v12->field_19c->field_80);
        if (v13 == *a0)
        {
            *(float *)&v11 = fabsf(v13->field_1f8);
            v14 = *(float *)&v11;
            if (50.0 < v14)
                v14 = 50.0;
            if (v12->field_28 != 0.0f)
                return v14;
            v15 = v14 + v12->field_28;
            v12->field_28 = (float)v15;
            return v15;
        }
    }
    v16 = &v12->field_8;
    v17 = &*a0->field_8;
    v18 = v12->field_8 - *a0->field_8;
    v2 = v18;
    v19 = *(float *)&v16->field_4 - *(float *)&v17[1];
    v3 = v19;
    v20 = *(float *)&v16->field_8 - *(float *)&v17[2];
    v4 = v20;
    v21 = v18 * v18 + v19 * v19 + v20 * v20;
    v22 = sqrt(v21);
    if (isnan(v22))
        sqrt(*(unsigned int *)&v21);
    else
        v21 = v22;
    v1 = (float)v21;
    if (v1 == 0.0f)
    {
        v5 = 0.0f;
        v6 = 0.0f;
        v7 = 1.0;
    }
    else
    {
        v23 = 1.0 / v1;
        v5 = (float)(v23 * v2);
        v6 = (float)(v23 * v3);
        v7 = (float)(v23 * v4);
    }
    v24 = *a0->field_1e0;
    v8 = v24 * v5;
    v9 = v24 * v6;
    v10 = v24 * v7;
    *(float *)&v12->field_20 = v8;
    *(float *)&v12->field_24 = v9;
    v12->field_28 = v10;
    v0 = &g_engfuncs.padding_0[0];
    v0->field_f4(2, "TRAIN(%s): Blocked by %s (dmg:%.2f)\n", *a0->field_1cc + gpGlobals->field_98, a1->field_0->field_0 + gpGlobals->field_98, (unsigned int)(*a0->field_1e0 >> 0));
    v25 = *a0;
    if (0.0 >= v25->field_1e0)
        return 0.0;
    a1->field_60->field_34(a1, v25, v25, v25->field_1e0, 1);
    return v25->field_1e0;
}

