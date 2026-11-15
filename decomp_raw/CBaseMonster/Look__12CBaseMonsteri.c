// Look__12CBaseMonsteri @0xd3f60 size=817
typedef struct st_4d3f60_3 {
    struct st_4d3f60_0 *field_0;
    char field_1;
    char padding_2[6];
    struct st_4d3f60_3 *field_8;
    char padding_c[84];
    struct st_4d3f60_1 *field_60;
    char padding_64[160];
    unsigned int field_104;
} st_4d3f60_3;

typedef struct st_4d3f60_1 {
    char padding_0[76];
    struct st_4d3f60_2 *field_4c;
    char padding_50[80];
    struct st_4d3f60_2 *field_a0;
    char padding_a4[60];
    struct st_4d3f60_2 *field_e0;
    char padding_e4[28];
    struct st_4d3f60_2 *field_100;
    char padding_104[20];
    struct st_4d3f60_2 *field_118;
} st_4d3f60_1;

typedef struct st_4d3f60_5 {
    char padding_0[280];
    struct st_4d3f60_2 *field_118;
} st_4d3f60_5;

typedef struct st_4d3f60_2 {
    unsigned int field_0;
} st_4d3f60_2;

typedef struct st_4d3f60_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[332];
    unsigned int field_158;
    char padding_15c[60];
    char field_198;
    char padding_199[3];
    char field_19c;
} st_4d3f60_8;

typedef struct st_4d3f60_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[332];
    float field_160;
    char padding_164[60];
    char field_1a0;
    char padding_1a1[3];
    char field_1a4;
} st_4d3f60_0;

typedef struct st_4d3f60_4 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[332];
    unsigned int field_160;
    char padding_164[60];
    char field_1a0;
    char padding_1a1[3];
    char field_1a4;
} st_4d3f60_4;

typedef struct st_4d3f60_6 {
    char padding_0[96];
    struct st_4d3f60_5 *field_60;
} st_4d3f60_6;

typedef struct st_4d3f60_7 {
    char padding_0[152];
    unsigned int field_98;
} st_4d3f60_7;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4d3f60_2 *g_6168b4;
extern st_4d3f60_7 *gpGlobals;

st_4d3f60_3 * Look__12CBaseMonsteri(st_4d3f60_3 *a0, int a1)
{
    st_4d3f60_3 *v15;  // eax
    st_4d3f60_4 *v16;  // ecx
    double v17;  // mm7
    st_4d3f60_8 *v18;  // eax
    st_4d3f60_3 *v19;  // edi
    st_4d3f60_6 *v20;  // edx
    st_4d3f60_3 *v21;  // ecx
    st_4d3f60_3 *v22;  // edx
    st_4d3f60_1 *v23;  // eax
    st_4d3f60_3 *v0;  // [bp-0x23c]
    st_4d3f60_3 *v1;  // [bp-0x238]
    st_4d3f60_3 *v2;  // [bp-0x214]
    st_4d3f60_3 *v3;  // [bp-0x210]
    st_4d3f60_3 *v4;  // [bp-0x20c]
    float v5;  // [bp-0x208]
    float v6;  // [bp-0x204]
    float v7;  // [bp-0x200]
    float v8;  // [bp-0x1e8]
    float v9;  // [bp-0x1e4]
    float v10;  // [bp-0x1e0]
    float v11;  // [bp-0x1c4]
    float v12;  // [bp-0x1c0]
    float v13;  // [bp-0x1bc]
    void* v14;  // [bp-0x1a4]

    v4 = NULL;
    v15 = a0;
    *(unsigned int *)&v15->padding_64[156] = *(int *)&v15->padding_64[156] & 0xff9fffe1;
    *(st_4d3f60_3 **)&v15->padding_2[3] = NULL;
    v16 = v15->field_0;
    if (!(v16->field_1a0 & 16))
    {
        v17 = (double)a1;
        v11 = (float)v17;
        v12 = (float)v17;
        v13 = (float)v17;
        v18 = &v16->field_8;
        v8 = *(float *)&v16->field_8 + v11;
        v9 = *(float *)&v18->field_4 + v12;
        v10 = *(float *)&v18->field_8 + v13;
        v5 = *(float *)&v16->field_8 - v11;
        v6 = *(float *)&v18->field_4 - v12;
        v7 = *(float *)&v18->field_8 - v13;
        v15 = sub_48dfd0(&v14, 100, &v5, &v8, 40);
        v3 = v15;
        v2 = NULL;
        if (v4 < v15)
        {
            do
            {
                v19 = *(int *)((char *)&v14 + 0x4 * v2);
                if (v19 == a0 || v19->field_0->field_1a0 & 16 || 0.0 >= v19->field_0->field_160 || !(*(int *)(*(int *)&a0->padding_c[80] + 0x100))(a0, v19) || !(*(int *)(*(int *)&a0->padding_c[80] + 280))(a0, v19) || v19->field_0->field_1a4 < 0 || !(*(int *)(*(int *)&a0->padding_c[80] + 224))(a0, v19))
                    continue;
                if ((*(int *)(*(int *)&v19->padding_c[80] + 160))(v19))
                {
                    if (a0->field_0->field_1a0 & 1)
                    {
                        v20 = (*(int *)(*(int *)&v19->padding_c[80] + 76))(v19);
                        if (v19 && !v20->field_60->field_118(v20, a0))
                            continue;
                        a0->field_0->field_1a0 = a0->field_0->field_1a0 & 254;
                    }
                    *((char *)&v4 + 2) = *(char *)((void*)&v4 + 2) | 32;
                }
                v21 = a0;
                *(int *)&v19->padding_2[3] = *(int *)&v21->padding_2[3];
                *(st_4d3f60_3 **)&v21->padding_2[3] = v19;
                if (v19 == sub_488810(&v21->field_104))
                    v4 |= 16;
                v22 = a0;
                v23 = *(int *)&v22->padding_c[80];
                v1 = v19;
                v0 = v22;
                v23->field_100(v0, v1);
                if (v23->field_100(v0, v1) + 2 <= 5)
                    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v23->field_100(v0, v1)] - 1308932)]));
                else
                    g_6168b4(2, "%s can't assess %s\n", a0->field_0->field_0 + gpGlobals->field_98, v19->field_0->field_0 + gpGlobals->field_98);
            } while ((v2 = (char *)&v2->field_0 + 1, v15 = v3, v2 < v15));
        }
    }
    *(unsigned long *)&a0->padding_64[156] = *(int *)&a0->padding_64[156] | v4;
    return v15;
}

