// ClientDisconnected__18CHalfLifeMultiplayP7edict_s @0xdc6e0 size=642
typedef struct st_4dc6e0_1 {
    char padding_0[124];
    struct st_4dc6e0_0 *field_7c;
} st_4dc6e0_1;

typedef struct st_4dc6e0_0 {
    struct st_4dc6e0_0 *field_0;
    char padding_4[460];
    unsigned int field_1d0;
    char padding_1d4[52];
    unsigned int field_208;
    char padding_20c[56];
    unsigned int field_244;
} st_4dc6e0_0;

typedef struct st_4dc6e0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4dc6e0_3;

typedef struct st_4dc6e0_2 {
    unsigned int field_0;
} st_4dc6e0_2;

extern unsigned int g_teamplay;
extern unsigned int gmsgSpectator;
extern st_4dc6e0_2 *g_616878;
extern st_4dc6e0_2 *g_61687c;
extern st_4dc6e0_2 *g_616880;
extern st_4dc6e0_2 *g_6168d8;
extern st_4dc6e0_2 *g_6168dc;
extern st_4dc6e0_2 *g_616968;
extern st_4dc6e0_2 *g_61696c;
extern st_4dc6e0_2 *g_616984;
extern st_4dc6e0_2 *g_6169fc;
extern st_4dc6e0_3 *gpGlobals;

st_4dc6e0_0 * ClientDisconnected__18CHalfLifeMultiplayP7edict_s(unsigned int a0, st_4dc6e0_1 *a1)
{
    unsigned int v7;  // eax
    int v8;  // eax
    unsigned int v9;  // eax
    st_4dc6e0_0 *v10;  // esi
    unsigned int *v11;  // eax
    unsigned int v12;  // edi
    unsigned int v13;  // edi
    st_4dc6e0_0 *v14;  // eax
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0xc]
    st_4dc6e0_0 *v6;  // [bp-0x8]

    if (!a1)
        return v14;
    v6 = a1->field_7c;
    if (!v6)
        return v6;
    sub_48c1b0("game_playerleave", v6, v6, 3, 0);
    if (g_teamplay)
    {
        v4 = "model";
        v7 = g_616968(v6->field_0->field_208);
        v3 = g_61696c(v7);
        v2 = g_6169fc(v6->field_0->field_208);
        v1 = g_616984(v6->field_0->field_208);
        v0 = v6->field_0->field_1d0 + gpGlobals->field_98;
        v8 = "\"%s<%i><%s><%s>\" disconnected\n";
    }
    else
    {
        v3 = g_616984(v6->field_0->field_208);
        v2 = g_6169fc(v6->field_0->field_208);
        v1 = g_616984(v6->field_0->field_208);
        v0 = v6->field_0->field_1d0 + gpGlobals->field_98;
        v8 = "\"%s<%i><%s><%i>\" disconnected\n";
    }
    sub_488680(v8);
    sub_48b9d0(v6, 1);
    g_616878(2, gmsgSpectator, 0, 0);
    v9 = g_6168dc(a1);
    g_616880(v9);
    g_616880(0);
    g_61687c();
    v10 = NULL;
    while (1)
    {
        v10 = sub_487e80(v10, "player");
        if (!v10)
            return v10;
        v11 = v10->field_0;
        v12 = 0;
        if (!v11[130] || (v11 = g_6168d8(v11[130]), !v11))
            v12 = 1;
        if (v12)
        {
            return v11;
        }
        else if (v10->field_0 && v10 != v6)
        {
            v13 = &v10[3].padding_4[172];
            if (sub_488810(v13) == v6)
            {
                v5 = v10->field_0->field_244;
                v10->field_0->field_244 = 0;
                sub_48d960(v13, 0);
                sub_48dce0(v10, v5);
            }
        }
    }
}

