// DisconnectPlayer__11CBotManagerP7edict_s @0x13fa50 size=1010
typedef struct st_53fa50_9 {
    char padding_0[124];
    struct st_53fa50_8 *field_7c;
} st_53fa50_9;

typedef struct st_53fa50_5 {
    char padding_0[164];
    struct st_53fa50_6 *field_a4;
} st_53fa50_5;

typedef struct st_53fa50_11 {
    char padding_0[192];
    struct st_53fa50_7 *field_c0;
} st_53fa50_11;

typedef struct st_53fa50_3 {
    struct st_53fa50_4 *field_0;
    char field_4;
    char padding_5[35];
    unsigned int field_28;
    char field_2c;
    char padding_2d[3351];
    char field_d44;
} st_53fa50_3;

typedef struct st_53fa50_6 {
    unsigned int field_0;
} st_53fa50_6;

typedef struct st_53fa50_8 {
    struct st_53fa50_8 *field_0;
    char padding_4[92];
    struct st_53fa50_5 *field_60;
    char padding_64[321];
    char field_1a5;
    char padding_1a6[2122];
    unsigned short field_9f0;
    char padding_9f2[10];
    char field_9fc;
    char padding_9fd[7];
    unsigned int field_a04;
    char field_a08;
    char padding_a09[187];
    char field_ac4;
    char padding_ac5[191];
    struct st_53fa50_7 *field_b84;
    unsigned int field_b88;
    char padding_b8c[24];
    unsigned short field_ba4;
    char padding_ba6[1210];
    unsigned short field_1060;
} st_53fa50_8;

typedef struct st_53fa50_0 {
    char field_0;
    char field_1;
    unsigned short field_2;
    unsigned short field_4;
    char field_6;
    char padding_7[31];
    char field_26;
    char padding_27[1];
    unsigned short field_28;
    char padding_2a[6];
    unsigned int field_30;
} st_53fa50_0;

typedef struct st_53fa50_4 {
    struct st_53fa50_2 *field_0;
    struct st_53fa50_2 *field_4;
} st_53fa50_4;

typedef struct st_53fa50_2 {
    struct st_53fa50_0 *field_0;
    struct st_53fa50_1 *field_4;
    unsigned int field_8;
} st_53fa50_2;

typedef struct st_53fa50_1 {
    struct st_53fa50_0 *field_0;
    unsigned int field_4;
    struct st_53fa50_2 *field_8;
} st_53fa50_1;

typedef struct st_53fa50_7 {
    char padding_0[4];
    struct st_53fa50_7 *field_4;
    unsigned int field_8;
} st_53fa50_7;

typedef struct st_53fa50_12 {
    struct st_53fa50_7 *field_0;
    unsigned int field_4;
    char padding_8[24];
    unsigned short field_20;
    char padding_22[1210];
    unsigned short field_4dc;
} st_53fa50_12;

typedef struct st_53fa50_10 {
    float field_0;
} st_53fa50_10;

extern st_53fa50_6 *g_6168ac;
extern st_53fa50_6 *g_6168d4;
extern st_53fa50_10 *gpGlobals;

st_53fa50_8 * DisconnectPlayer__11CBotManagerP7edict_s(st_53fa50_3 *a0, st_53fa50_9 *a1)
{
    st_53fa50_9 *v10;  // eax
    st_53fa50_8 *v11;  // eax
    char v20;  // cl
    st_53fa50_0 *v21;  // edi
    st_53fa50_8 *v22;  // edx
    unsigned short v23;  // cx
    unsigned short v24;  // dx
    st_53fa50_2 **v25;  // esi
    st_53fa50_2 *v26;  // edi
    st_53fa50_1 *v27;  // edi
    st_53fa50_1 *v28;  // eax
    st_53fa50_8 *v29;  // esi
    st_53fa50_8 *v12;  // esi
    st_53fa50_12 *v30;  // edi
    st_53fa50_7 *iter;  // esi
    st_53fa50_7 *v32;  // eax
    st_53fa50_8 *v13;  // eax
    unsigned int v14;  // cc_dep1
    char v15;  // 4096
    unsigned int v16;  // 4105
    unsigned int v17;  // 4112
    st_53fa50_8 *v18;  // edx
    char v19;  // cl
    unsigned short v0;  // [bp-0x2a]
    char v1;  // [bp-0x25]
    st_53fa50_2 *v2;  // [bp-0x24]
    char v3;  // [bp-0x1d]
    st_53fa50_11 *v4;  // [bp-0x1c]
    char v5;  // [bp-0x15]
    st_53fa50_0 *v6;  // [bp-0x14]
    unsigned short v7;  // [bp-0xe]
    st_53fa50_8 *v8;  // [bp-0xc]
    char v9;  // [bp-0x5]

    a0->field_d44 = a0->field_d44 - 1;
    v10 = a1;
    if (v10 || (v10 = g_6168d4(0), v10))
        v11 = v10->field_7c;
    else
        v11 = NULL;
    v12 = v11;
    if (!v12)
        return v11;
    v9 = 0;
    v13 = v12->field_60->field_a4(v12);
    if (!v13)
    {
        v13 = v12->field_0;
        v9 = (v13->field_1a5 & 32) != 0;
    }
    if (!v9)
        return v13;
    v8 = v12;
    if (!v12)
        return v13;
    a0->field_4 = a0->field_4 - 1;
    v14 = v8->field_ba4;
    if ((short)v8->field_ba4 > 0)
    {
        v15 = a0->field_2c;
        a0->field_2c = a0->field_2c - 1;
        v16 = _ccall(5, v14, 0, 0);
        v17 = _ccall(4, 19, v15 - 1, 0, v16);
        if (v17 & 1)
            g_6168ac("mp_plcatchup", *(float *)&a0->field_28);
    }
    v18 = v8;
    if (!v18->field_a08)
    {
        v7 = 0xffff;
        if (v18->field_a04)
        {
            v19 = 0;
            if (&a0[1].padding_5[6] == v18->field_a04)
            {
                v7 = 0;
            }
            else
            {
                while (1)
                {
                    v20 = v19 + 1;
                    if (v19 + 1 > 8)
                        break;
                    v19 = v20;
                    if (&(&a0->field_0)[15 * v19 + 852] == v8->field_a04)
                    {
                        v7 = v20;
                        break;
                    }
                }
            }
        }
        v21 = sub_48d6a0(52);
        v5 = 1;
        v22 = v8;
        v23 = v22->field_9f0;
        v0 = v22->field_1060;
        v4 = &v22->field_ac4;
        v24 = v8->field_ba4;
        v21->field_0 = v22->field_9fc;
        v21->field_1 = v7;
        v21->field_2 = v23;
        v21->field_4 = v0;
        v21->field_28 = v24;
        *(float *)&v21->field_30 = *(float *)gpGlobals;
        sub_48d360(&v21->field_6, v4, 31);
        v21->field_26 = 0;
        v5 = 0;
        v6 = v21;
        if (v5)
            sub_48d4e0(v6);
        v25 = a0->field_0;
        if (!*v25)
        {
            v26 = sub_48d6a0(12);
            v3 = 1;
            v26->field_4 = NULL;
            v26->field_8 = 0;
            sub_48d0e0(v26, 0, 4);
            v3 = 0;
            *v25 = v26;
            if (v3)
                sub_48d4e0(v26);
            *v25->field_0 = v6;
            *v25->field_4 = NULL;
            *v25->field_8 = 0;
            v25[1] = *v25;
        }
        else
        {
            v2 = v25[1];
            v27 = sub_48d6a0(12);
            v1 = 1;
            v27->field_4 = 0;
            v27->field_8 = NULL;
            sub_48d0e0(v27, 0, 4);
            v1 = 0;
            v2->field_4 = v27;
            if (v1)
                sub_48d4e0(v27);
            v25[1]->field_4->field_8 = v25[1];
            v28 = v25[1]->field_4;
            v25[1] = v28;
            v28->field_0 = v6;
            v25[1]->field_4 = NULL;
        }
    }
    v29 = v8;
    sub_48c9f0(v29);
    sub_487cc0(v29);
    v30 = &v29->field_b84;
    iter = v29->field_b84;
    if (v29->field_b84)
    {
        do
        {
            v32 = iter;
            iter = iter->field_4;
            v32->field_4 = NULL;
            v32->field_8 = 0;
            sub_48d4e0(v32);
        } while (iter);
    }
    v30->field_4 = 0;
    v30->field_0 = NULL;
    return sub_48c6c0(v8);
}

