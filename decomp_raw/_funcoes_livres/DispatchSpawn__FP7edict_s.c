// DispatchSpawn__FP7edict_s @0x9c0a0 size=445
typedef struct st_49c0a0_4 {
    char padding_0[124];
    struct st_49c0a0_3 *field_7c;
} st_49c0a0_4;

typedef struct st_49c0a0_6 {
    char padding_0[12];
    struct st_49c0a0_2 *field_c;
} st_49c0a0_6;

typedef struct st_49c0a0_2 {
    unsigned int field_0;
} st_49c0a0_2;

typedef struct st_49c0a0_10 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[176];
    unsigned int field_bc;
    unsigned int field_c0;
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    char padding_d4[203];
    char field_19f;
} st_49c0a0_10;

typedef struct st_49c0a0_5 {
    char padding_0[4];
    int field_4;
    float field_8;
    float field_c;
    float field_10;
    char padding_14[176];
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[203];
    char field_1a7;
} st_49c0a0_5;

typedef struct st_49c0a0_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[176];
    unsigned int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[203];
    char field_1a7;
} st_49c0a0_0;

typedef struct st_49c0a0_7 {
    char padding_0[68];
    struct st_49c0a0_6 *field_44;
} st_49c0a0_7;

typedef struct st_49c0a0_8 {
    char padding_0[96];
    unsigned int field_60;
} st_49c0a0_8;

typedef struct st_49c0a0_3 {
    struct st_49c0a0_0 *field_0;
    char padding_4[92];
    struct st_49c0a0_1 *field_60;
} st_49c0a0_3;

typedef struct st_49c0a0_1 {
    char padding_0[8];
    struct st_49c0a0_2 *field_8;
} st_49c0a0_1;

typedef struct st_49c0a0_9 {
    char padding_0[12];
    int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_49c0a0_9;

extern st_49c0a0_7 *g_pGameRules;
extern st_49c0a0_9 *gpGlobals;
extern int gGlobalState;

unsigned int DispatchSpawn__FP7edict_s(st_49c0a0_4 *a0)
{
    st_49c0a0_3 *v9;  // esi
    st_49c0a0_5 *v10;  // ecx
    st_49c0a0_10 *v11;  // edx
    st_49c0a0_5 *v12;  // ecx
    st_49c0a0_10 *v13;  // edx
    st_49c0a0_3 *v14;  // esi
    st_49c0a0_8 *v15;  // ecx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x38]
    float v4;  // [bp-0x34]
    float v5;  // [bp-0x30]
    float v6;  // [bp-0x24]
    float v7;  // [bp-0x20]
    float v8;  // [bp-0x1c]

    v9 = (!a0 ? NULL : a0->field_7c);
    if (!v9)
        return 0;
    v10 = v9->field_0;
    v0 = 1.0;
    v1 = 1.0;
    v2 = 1.0;
    v11 = &v9->field_0->field_8;
    v6 = *(float *)&v9->field_0->field_8 - v0;
    v7 = *(float *)&v11->field_4 - v1;
    v8 = *(float *)&v11->field_8 - v2;
    *(float *)&v10->field_c4 = v6;
    *(float *)&v10->field_c8 = v7;
    *(float *)&v10->field_cc = v8;
    v12 = v9->field_0;
    v3 = 1.0;
    v4 = 1.0;
    v5 = 1.0;
    v13 = &v9->field_0->field_8;
    v0 = *(float *)&v9->field_0->field_8 + v3;
    v1 = *(float *)&v13->field_4 + v4;
    v2 = *(float *)&v13->field_8 + v5;
    *(float *)&v12->field_d0 = v0;
    *(float *)&v12->field_d4 = v1;
    *(float *)&v12->field_d8 = v2;
    v9->field_60->field_8(v9);
    v14 = (!a0 ? NULL : a0->field_7c);
    if (v14)
    {
        if (g_pGameRules && !g_pGameRules->field_44->field_c(g_pGameRules, v14))
            return 0xffffffff;
        if (v14->field_0->field_1a7 & 64)
        {
            return 0xffffffff;
        }
        else if (v14 && v14->field_0->field_4)
        {
            v15 = CGlobalState::EntityFromTable(&gGlobalState, v14->field_0->field_4);
            if (!v15)
            {
                CGlobalState::EntityAdd(&gGlobalState, v14->field_0->field_4, gpGlobals->field_c, 1);
            }
            else if (v15->field_60 == 2)
            {
                return 0xffffffff;
            }
            else if (strcmp@GLIBC_2.0(gpGlobals->field_c + gpGlobals->field_98, &v15->padding_0[64]))
            {
                CBaseEntity::MakeDormant(v14);
            }
        }
    }
    return 0;
}

