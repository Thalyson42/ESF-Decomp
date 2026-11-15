// ClientUserInfoChanged__FP7edict_sPc @0xa0b90 size=770
typedef struct st_4a0b90_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4a0b90_2;

typedef struct st_4a0b90_1 {
    unsigned int field_0;
} st_4a0b90_1;

typedef struct st_4a0b90_0 {
    char padding_0[428];
    struct st_4a0b90_1 *field_1ac;
} st_4a0b90_0;

typedef struct st_4a0b90_5 {
    char padding_0[124];
    unsigned int field_7c;
    char field_80;
    char padding_81[463];
    struct st_4a0b90_6 *field_250;
} st_4a0b90_5;

typedef struct st_4a0b90_6 {
    char field_0;
} st_4a0b90_6;

typedef struct st_4a0b90_3 {
    char padding_0[100];
    struct st_4a0b90_1 *field_64;
} st_4a0b90_3;

typedef struct st_4a0b90_4 {
    char padding_0[68];
    struct st_4a0b90_3 *field_44;
} st_4a0b90_4;

extern st_4a0b90_4 *g_pGameRules;
extern unsigned int g_teamplay;
extern unsigned int gmsgSayText;
extern st_4a0b90_0 g_engfuncs;
extern st_4a0b90_1 *g_616878;
extern st_4a0b90_1 *g_61687c;
extern st_4a0b90_1 *g_616880;
extern st_4a0b90_1 *g_616898;
extern st_4a0b90_1 *g_6168dc;
extern st_4a0b90_1 *g_61696c;
extern st_4a0b90_1 *g_616974;
extern st_4a0b90_1 *g_616984;
extern st_4a0b90_1 *g_6169fc;
extern st_4a0b90_2 *gpGlobals;

st_4a0b90_5 * ClientUserInfoChanged__FP7edict_sPc(st_4a0b90_5 *a0, unsigned int a1)
{
    int v14;  // eax
    int v24;  // eax
    unsigned int v25;  // eax
    char *v16;  // eax
    unsigned int v17;  // cc_dep1
    unsigned int v18;  // 4103
    char *v19;  // eax
    unsigned int v20;  // 4109
    unsigned int v21;  // eax
    int v22;  // eax
    unsigned int v23;  // eax
    unsigned int v0;  // [bp-0x258]
    unsigned int v1;  // [bp-0x254]
    unsigned int v2;  // [bp-0x250]
    unsigned int v3;  // [bp-0x24c]
    unsigned int v4;  // [bp-0x248]
    unsigned int v5;  // [bp-0x238]
    unsigned int v6;  // [bp-0x234]
    char *v7;  // [bp-0x230]
    st_4a0b90_2 **v8;  // [bp-0x210]
    unsigned int v9;  // [bp-0x20c]
    st_4a0b90_0 *v10;  // [bp-0x208]
    char v11;  // [bp-0x204]
    char v12;  // [bp-0x104]
    char v13;  // [bp-0x5]

    if (!a0->field_7c)
        return a0;
    if (a0->field_250 && *(char *)&a0->field_250[gpGlobals->field_98])
    {
        v10 = &g_engfuncs.padding_0[0];
        v14 = g_61696c(a1, "name");
        if (sub_488af0(&a0->field_250[gpGlobals->field_98], v14))
        {
            sub_48d360(&v12, v10->field_1ac(a1, "name"), 0xff);
            v13 = 0;
            v16 = &v12;
            if (*&v12)
            {
                do
                {
                    v17 = *v16;
                    if (*v16 == 37)
                        *v16 = 32;
                } while ((v18 = _ccall(4, v17, 37, 0), v19 = v16 + 1, v20 = _ccall(4, 18, v16 + 1, 0, v18), !(v20 & 1) && (v16 += 1, *v16)));
            }
            v7 = &v12;
            v9 = "name";
            v6 = "name";
            v5 = a1;
            v21 = g_6168dc(a0);
            g_616974(v21);
            v22 = g_61696c(a1, v9);
            v8 = &gpGlobals;
            sub_48d990(&v11, "* %s changed name to %s\n", &a0->field_250[gpGlobals->field_98], v22);
            g_616878(2, gmsgSayText, 0, 0);
            v23 = g_6168dc(a0);
            g_616880(v23);
            g_616898(&v11);
            g_61687c();
            if (g_teamplay)
            {
                v4 = g_61696c(a1, v9);
                v3 = g_61696c(a1, "model");
                v2 = g_6169fc(a0);
                v1 = g_616984(a0);
                v0 = &a0->field_250[*v8->field_98];
                v24 = "\"%s<%i><%s><%s>\" changed name to \"%s\"\n";
            }
            else
            {
                v4 = g_61696c(a1, "name");
                v3 = g_616984(a0);
                v2 = g_6169fc(a0);
                v1 = g_616984(a0);
                v0 = &a0->field_250[gpGlobals->field_98];
                v24 = "\"%s<%i><%s><%i>\" changed name to \"%s\"\n";
            }
            sub_488680(v24);
        }
    }
    v6 = a1;
    v25 = sub_48c260(&a0->field_80);
    return g_pGameRules->field_44->field_64(g_pGameRules, v25);
}

