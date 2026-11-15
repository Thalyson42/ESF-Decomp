// GetPlayerSpawnSpot__10CGameRulesP11CBasePlayer @0xc4960 size=252
typedef struct st_4c4960_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[12];
    unsigned int field_68;
    unsigned int field_6c;
    unsigned int field_70;
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    char padding_80[32];
    unsigned int field_a0;
} st_4c4960_0;

typedef struct st_4c4960_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4c4960_1;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;

st_4c4960_1 * GetPlayerSpawnSpot__10CGameRulesP11CBasePlayer(unsigned int a0, st_4c4960_0 **a1)
{
    st_4c4960_1 *v6;  // esi
    unsigned int *v7;  // ecx
    st_4c4960_1 *v8;  // edx
    unsigned int *v9;  // eax
    unsigned int *v10;  // edx
    unsigned int *v11;  // edx
    st_4c4960_1 *v12;  // ecx
    unsigned int *v13;  // edx
    unsigned int *v14;  // ecx
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = sub_48db30(a1);
    v7 = *a1;
    v8 = (!v6 ? NULL : (struct st_4c4960_1 *)&v6[1].padding_14[16]);
    v0 = 0;
    v1 = 0;
    v2 = 1.0;
    v9 = &v8->field_8;
    v3 = v8->field_8 + v0;
    v4 = *(float *)&v9[1] + v1;
    v5 = *(float *)&v9[2] + v2;
    *(float *)&v7[2] = v3;
    *(float *)&v7[3] = v4;
    *(float *)&v7[4] = v5;
    v10 = *a1;
    v10[29] = g_vecZero;
    v10[30] = g_616790;
    v10[31] = g_616794;
    v11 = *a1;
    v11[8] = g_vecZero;
    v11[9] = g_616790;
    v11[10] = g_616794;
    v12 = (!v6 ? NULL : (struct st_4c4960_1 *)&v6[1].padding_14[16]);
    v13 = *a1;
    v13[20] = v12->field_50;
    v13[21] = v12->field_54;
    v13[22] = v12->field_58;
    v14 = *a1;
    v14[26] = g_vecZero;
    v14[27] = g_616790;
    v14[28] = g_616794;
    *a1->field_a0 = 1;
    return v6;
}

