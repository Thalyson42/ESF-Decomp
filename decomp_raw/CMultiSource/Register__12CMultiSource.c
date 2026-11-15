// Register__12CMultiSource @0x95c50 size=590
typedef struct st_495c50_4 {
    char padding_0[124];
    int field_7c;
} st_495c50_4;

typedef struct st_495c50_7 {
    char padding_0[124];
    struct st_495c50_6 *field_7c;
} st_495c50_7;

typedef struct st_495c50_5 {
    char padding_0[152];
    struct st_495c50_3 *field_98;
} st_495c50_5;

typedef struct st_495c50_3 {
    unsigned int field_0;
} st_495c50_3;

typedef struct st_495c50_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[43];
    unsigned int field_1cc;
} st_495c50_0;

typedef struct st_495c50_1 {
    struct st_495c50_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[80];
    char field_64;
    char padding_65[383];
    int field_1e4;
} st_495c50_1;

typedef struct st_495c50_6 {
    char padding_0[96];
    struct st_495c50_5 *field_60;
} st_495c50_6;

typedef struct st_495c50_2 {
    char padding_0[152];
    unsigned int field_98;
} st_495c50_2;

extern char SUB_DoNothing__11CBaseEntity;
extern st_495c50_3 *g_6167f8;
extern st_495c50_3 *g_6168d4;
extern st_495c50_3 *g_6168d8;
extern st_495c50_2 *gpGlobals;

st_495c50_0 * Register__12CMultiSource(st_495c50_1 *a0)
{
    st_495c50_1 *v3;  // eax
    st_495c50_7 *v13;  // eax
    st_495c50_6 *v14;  // esi
    st_495c50_1 *v15;  // esi
    st_495c50_0 *v16;  // eax
    st_495c50_1 *v5;  // ecx
    st_495c50_4 *v6;  // edi
    unsigned int v7;  // esi
    st_495c50_4 *v8;  // eax
    int v9;  // eax
    st_495c50_1 *v10;  // edx
    st_495c50_7 *v11;  // edi
    unsigned int v12;  // esi
    st_495c50_7 *v0;  // [bp-0x2c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    v3 = a0;
    v3->field_1e4 = 0;
    v5 = a0;
    v5->field_c = _INSERT(sub_48d0e0(&v3->field_64, 0, 0x100), 0, 0) | 0xffff0000;
    v5->field_10 = &SUB_DoNothing__11CBaseEntity;
    v6 = g_6167f8(0, "target", a0->field_0->field_1cc + gpGlobals->field_98);
    while (1)
    {
        v7 = 0;
        if (!v6 || !g_6168d8(v6))
            v7 = 1;
        if (v7 || a0->field_1e4 > 31)
            break;
        v8 = v6;
        if (v8 || (v8 = g_6168d4(0), v8))
            v9 = v8->field_7c;
        else
            v9 = 0;
        if (v9)
        {
            v10 = a0;
            v0 = &(&v10->field_0)[2 * v10->field_1e4 + 25];
            v10->field_1e4 = v10->field_1e4 + 1;
            sub_48d960(v0, v9);
        }
        v6 = g_6167f8(v6, "target", a0->field_0->field_1cc + gpGlobals->field_98);
    }
    v2 = "multi_manager";
    v1 = "classname";
    v0 = NULL;
    while (1)
    {
        v11 = g_6167f8(v0, v1, v2);
        v12 = 0;
        if (!v11 || !g_6168d8(v11))
            v12 = 1;
        if (v12 || a0->field_1e4 > 31)
            break;
        v13 = v11;
        if (v13 || (v13 = g_6168d4(0), v13))
            v14 = v13->field_7c;
        else
            v14 = NULL;
        if (v14 && v14->field_60->field_98(v14, a0->field_0->field_1cc))
        {
            v15 = a0;
            v0 = &(&v15->field_0)[2 * v15->field_1e4 + 25];
            v15->field_1e4 = v15->field_1e4 + 1;
            sub_48d960(v0, v14);
        }
        v2 = "multi_manager";
        v1 = "classname";
        v0 = v11;
    }
    v16 = a0->field_0;
    v16->field_1a0 = v16->field_1a0 & 254;
    return v16;
}

