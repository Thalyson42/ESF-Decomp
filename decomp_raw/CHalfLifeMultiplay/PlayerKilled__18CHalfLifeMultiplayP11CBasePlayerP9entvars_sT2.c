// PlayerKilled__18CHalfLifeMultiplayP11CBasePlayerP9entvars_sT2 @0xdcbf0 size=878
typedef struct st_4dcbf0_6 {
    char padding_0[124];
    struct st_4dcbf0_4 *field_7c;
} st_4dcbf0_6;

typedef struct st_4dcbf0_3 {
    char padding_0[40];
    struct st_4dcbf0_1 *field_28;
    char padding_2c[116];
    struct st_4dcbf0_1 *field_a0;
} st_4dcbf0_3;

typedef struct st_4dcbf0_8 {
    struct st_4dcbf0_7 *field_0;
    char padding_4[1844];
    unsigned int field_738;
    char padding_73c[584];
    unsigned int field_984;
} st_4dcbf0_8;

typedef struct st_4dcbf0_0 {
    char padding_0[104];
    struct st_4dcbf0_1 *field_68;
    char padding_6c[4];
    struct st_4dcbf0_1 *field_70;
    char padding_74[88];
    struct st_4dcbf0_1 *field_cc;
    char padding_d0[32];
    struct st_4dcbf0_1 *field_f0;
} st_4dcbf0_0;

typedef struct st_4dcbf0_4 {
    struct st_4dcbf0_5 *field_0;
    char padding_4[92];
    struct st_4dcbf0_3 *field_60;
    char padding_64[1748];
    unsigned int field_738;
    char padding_73c[584];
    unsigned int field_984;
    char padding_988[16];
    unsigned int field_998;
} st_4dcbf0_4;

typedef struct st_4dcbf0_1 {
    unsigned int field_0;
} st_4dcbf0_1;

typedef struct st_4dcbf0_7 {
    char padding_0[356];
    float field_164;
    char padding_168[160];
    struct st_4dcbf0_6 *field_208;
    unsigned int field_20c;
} st_4dcbf0_7;

typedef struct st_4dcbf0_5 {
    char padding_0[356];
    unsigned int field_164;
    char padding_168[160];
    unsigned int field_208;
    unsigned int field_20c;
} st_4dcbf0_5;

typedef struct st_4dcbf0_2 {
    char padding_0[68];
    struct st_4dcbf0_0 *field_44;
} st_4dcbf0_2;

typedef struct st_4dcbf0_9 {
    float field_0;
} st_4dcbf0_9;

extern unsigned int gmsgScoreInfo;
extern st_4dcbf0_1 *g_616878;
extern st_4dcbf0_1 *g_61687c;
extern st_4dcbf0_1 *g_616880;
extern st_4dcbf0_1 *g_616888;
extern st_4dcbf0_1 *g_6168d4;
extern st_4dcbf0_1 *g_6168dc;
extern st_4dcbf0_9 *gpGlobals;

int PlayerKilled__18CHalfLifeMultiplayP11CBasePlayerP9entvars_sT2(st_4dcbf0_2 *a0, st_4dcbf0_8 *a1, st_4dcbf0_7 *a2, unsigned int a3)
{
    unsigned int v7;  // eax
    st_4dcbf0_4 *v8;  // eax
    st_4dcbf0_4 *v9;  // esi
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    st_4dcbf0_4 *v13;  // edi
    unsigned int v14;  // eax
    unsigned int v15;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    st_4dcbf0_4 *v3;  // [bp-0x10]
    unsigned short v4;  // [bp-0xc]
    unsigned short v5;  // [bp-0xa]
    int v6;  // [bp-0x8]

    a0->field_44->field_70(a0, a1, a2, a3, v0, v1, v2);
    a1->field_984 = a1->field_984 + 1;
    sub_48c1b0("game_playerdie", a1, a1, 3, 0);
    v3 = NULL;
    v7 = a2->field_208;
    if (a2->field_208 || (v7 = g_6168d4(0), v7))
        v8 = *(int *)(v7 + 124);
    else
        v8 = NULL;
    v9 = v8;
    if (v9 && v9->field_60->field_28(v9) == 2)
        v3 = v9;
    if (a1->field_0 == a2)
    {
        a2->field_164 = (float)(a2->field_164 - 1.0);
    }
    else if (v9 && v9->field_60->field_a0(v9))
    {
        v6 = a0->field_44->field_68(a0, v3, a1);
        a2->field_164 = (float)((double)v6 + a2->field_164);
        sub_48c1b0("game_playerkill", v9, v9, 3, 0);
    }
    else
    {
        a2->field_164 = (float)(a2->field_164 - 1.0);
    }
    g_616878(2, gmsgScoreInfo, 0, 0);
    v10 = g_6168dc(a1->field_0->field_208);
    g_616880(v10);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v6 = (int)a1->field_0->field_164;
    g_616888(v6);
    g_616888(a1->field_984);
    g_616888(a1->field_738);
    g_616888(a1->field_0->field_20c);
    v11 = a0->field_44->field_cc(a0, &a1[1].padding_4[16]);
    g_616888(v11 + 1);
    g_61687c();
    v12 = a2->field_208;
    if (a2->field_208 || (v12 = g_6168d4(0), v12))
        v13 = *(int *)(v12 + 124);
    else
        v13 = NULL;
    if (!v13 || v13->field_60->field_28(v13) != 2)
        return a0->field_44->field_f0(a0);
    g_616878(2, gmsgScoreInfo, 0, 0);
    v14 = g_6168dc(v13->field_0->field_208);
    g_616880(v14);
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v6 = (int)*(float *)&v13->field_0->field_164;
    g_616888(v6);
    g_616888(v13->field_984);
    g_616888(v13->field_738);
    g_616888(v13->field_0->field_20c);
    v15 = a0->field_44->field_cc(a0, v13 + 1);
    g_616888(v15 + 1);
    g_61687c();
    *(float *)&v13->field_998 = *(float *)gpGlobals;
    return a0->field_44->field_f0(a0);
}

