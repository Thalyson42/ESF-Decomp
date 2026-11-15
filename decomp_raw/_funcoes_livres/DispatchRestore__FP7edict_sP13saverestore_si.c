// DispatchRestore__FP7edict_sP13saverestore_si @0x9c6a0 size=1262
typedef struct st_49c6a0_1 {
    char padding_0[124];
    struct st_49c6a0_2 *field_7c;
} st_49c6a0_1;

typedef struct st_49c6a0_10 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[288];
    struct st_49c6a0_1 *field_12c;
} st_49c6a0_10;

typedef struct st_49c6a0_4 {
    unsigned int field_0;
} st_49c6a0_4;

typedef struct st_49c6a0_0 {
    unsigned int field_0;
    unsigned int field_4;
    char field_8;
    char padding_9[211];
    unsigned int field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    char padding_e8[288];
    struct st_49c6a0_1 *field_208;
} st_49c6a0_0;

typedef struct st_49c6a0_9 {
    char padding_0[96];
    unsigned int field_60;
} st_49c6a0_9;

typedef struct st_49c6a0_2 {
    struct st_49c6a0_0 *field_0;
    char padding_4[92];
    struct st_49c6a0_3 *field_60;
} st_49c6a0_2;

typedef struct st_49c6a0_3 {
    char padding_0[8];
    struct st_49c6a0_4 *field_8;
    struct st_49c6a0_4 *field_c;
    char padding_10[8];
    struct st_49c6a0_4 *field_18;
    struct st_49c6a0_4 *field_1c;
    char padding_20[80];
    struct st_49c6a0_4 *field_70;
} st_49c6a0_3;

typedef struct st_49c6a0_8 {
    char padding_0[12];
    int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_49c6a0_8;

extern st_49c6a0_4 *g_6168b4;
extern st_49c6a0_8 *gpGlobals;
extern int gGlobalState;

unsigned int DispatchRestore__FP7edict_sP13saverestore_si(st_49c6a0_1 *a0, unsigned int *a1, unsigned int a2)
{
    st_49c6a0_2 *v21;  // esi
    unsigned int v22;  // eax
    st_49c6a0_2 *v23;  // ecx
    st_49c6a0_10 *v24;  // edx
    unsigned int *v25;  // eax
    st_49c6a0_2 *v26;  // esi
    st_49c6a0_9 *v27;  // ecx
    st_49c6a0_2 *v0;  // [bp-0x39c]
    float v1;  // [bp-0x364]
    float v2;  // [bp-0x360]
    float v3;  // [bp-0x35c]
    float v4;  // [bp-0x344]
    float v5;  // [bp-0x340]
    float v6;  // [bp-0x33c]
    char v7;  // [bp-0x324]
    unsigned int v8;  // [bp-0x320]
    unsigned int v9;  // [bp-0x31c]
    char v10;  // [bp-0x304]
    unsigned int v11;  // [bp-0x300]
    unsigned int v12;  // [bp-0x2fc]
    unsigned int v13;  // [bp-0x2e4]
    unsigned int v14;  // [bp-0x2e0]
    unsigned int v15;  // [bp-0x2dc]
    char v16;  // [bp-0x2c4], Other Possible Types: int
    int v17;  // [bp-0x2c0]
    float v18;  // [bp-0x1e8]
    float v19;  // [bp-0x1e4]
    float v20;  // [bp-0x1e0]

    v21 = (!a0 ? NULL : a0->field_7c);
    if (!v21 || !a1)
        return 0;
    sub_48de70(&v16);
    sub_489c20(&v10, a1);
    v11 = 0;
    v12 = 1;
    if (a2)
    {
        sub_489c20(&v7, a1);
        v8 = 0;
        v9 = 0;
        sub_4896a0(&v7, "ENTVARS", &v16);
        v22 = *(int *)(a1[10] + a1[7] * 24 + 8);
        a1[2] = v22;
        a1[1] = v22 + *a1;
        if (sub_488af0(a1 + 341, sub_48b360(&gGlobalState, v17) + 64))
        {
            sub_48c990(&v7, 2);
            sub_48c990(&v10, 2);
        }
        else
        {
            v13 = a1[337];
            v14 = a1[338];
            v15 = a1[339];
            v23 = sub_4887e0(v16, v17);
            if (v23)
            {
                v11 = 1;
                v24 = &v23->field_0->field_dc;
                v1 = *(float *)&a1[337] - *(float *)&v23->field_0->field_dc;
                v2 = *(float *)&a1[338] - *(float *)&v24->field_4;
                v3 = *(float *)&a1[339] - *(float *)&v24->field_8;
                v4 = v1 + v18;
                v5 = v2 + v19;
                v6 = v3 + v20;
                *(float *)&a1[337] = v4;
                *(float *)&a1[338] = v5;
                *(float *)&a1[339] = v6;
                v21 = v23;
                a0 = v21->field_0->field_208;
                sub_48cd00(&gGlobalState, v21->field_0->field_4, gpGlobals->field_c);
                sub_48c990(&v7, 2);
                goto LABEL_49c939;
            }
            else
            {
                sub_48c990(&v7, 2);
                sub_48c990(&v10, 2);
            }
        }
    }
    else
    {
LABEL_49c939:
        if ((char)v21->field_60->field_1c(v21) & 4)
        {
            v21->field_60->field_18(v21, &v10);
            v0 = v21;
            v25 = v21->field_60->field_8;
        }
        else
        {
            v21->field_60->field_18(v21, &v10);
            v0 = v21;
            v25 = v21->field_60->field_c;
        }
        v25(v0);
        v26 = (!a0 ? NULL : a0->field_7c);
        if (a2)
        {
            a1[337] = v13;
            a1[338] = v14;
            a1[339] = v15;
            if (v26)
            {
                sub_48db50(v26->field_0, &v26->field_0->field_8);
                v26->field_60->field_70(v26);
            }
        }
        else if (v26 && v26->field_0->field_4)
        {
            v27 = sub_48b360(&gGlobalState, v26->field_0->field_4);
            if (!v27)
            {
                g_6168b4(4, "Global Entity %s (%s) not in table!!!\n", v26->field_0->field_4 + gpGlobals->field_98, v26->field_0->field_0 + gpGlobals->field_98);
                sub_48aad0(&gGlobalState, v26->field_0->field_4, gpGlobals->field_c, 1);
            }
            else if (v27->field_60 == 2)
            {
                sub_48c990(&v10, 2);
                return 0xffffffff;
            }
            else if (sub_488af0(gpGlobals->field_c + gpGlobals->field_98, &v27->padding_0[64]))
            {
                sub_48a320(v26);
            }
        }
        sub_48c990(&v10, 2);
    }
    return 0;
}

