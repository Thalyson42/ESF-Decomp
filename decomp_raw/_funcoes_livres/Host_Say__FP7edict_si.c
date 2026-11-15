// Host_Say__FP7edict_si @0x9f7c0 size=1435
typedef struct st_49f7c0_5 {
    char padding_0[164];
    struct st_49f7c0_0 *field_a4;
} st_49f7c0_5;

typedef struct st_49f7c0_1 {
    char padding_0[2524];
    float field_9dc;
} st_49f7c0_1;

typedef struct st_49f7c0_0 {
    unsigned int field_0;
} st_49f7c0_0;

typedef struct st_49f7c0_4 {
    char padding_0[520];
    struct st_49f7c0_3 *field_208;
} st_49f7c0_4;

typedef struct st_49f7c0_3 {
    char padding_0[124];
    unsigned int field_7c;
    char field_80;
    char padding_81[463];
    unsigned int field_250;
    char padding_254[52];
    unsigned int field_288;
} st_49f7c0_3;

typedef struct st_49f7c0_6 {
    struct st_49f7c0_4 *field_0;
    char padding_4[92];
    struct st_49f7c0_5 *field_60;
} st_49f7c0_6;

typedef struct st_49f7c0_7 {
    char padding_0[200];
    struct st_49f7c0_0 *field_c8;
} st_49f7c0_7;

typedef struct st_49f7c0_2 {
    unsigned int field_0;
    char padding_4[148];
    unsigned int field_98;
} st_49f7c0_2;

typedef struct st_49f7c0_8 {
    char padding_0[68];
    struct st_49f7c0_7 *field_44;
} st_49f7c0_8;

extern st_49f7c0_8 *g_pGameRules;
extern unsigned int g_teamplay;
extern unsigned int gmsgSayText;
extern st_49f7c0_0 *g_616878;
extern st_49f7c0_0 *g_61687c;
extern st_49f7c0_0 *g_616880;
extern st_49f7c0_0 *g_616898;
extern st_49f7c0_0 *g_6168d4;
extern st_49f7c0_0 *g_6168d8;
extern st_49f7c0_0 *g_6168dc;
extern st_49f7c0_0 *g_616904;
extern st_49f7c0_0 *g_616908;
extern st_49f7c0_0 *g_61690c;
extern st_49f7c0_0 *g_616910;
extern st_49f7c0_0 *g_616968;
extern st_49f7c0_0 *g_61696c;
extern st_49f7c0_0 *g_616984;
extern st_49f7c0_0 *g_6169fc;
extern st_49f7c0_2 *gpGlobals;
extern int g_VoiceGameMgr;
extern int ChatClass;

int Host_Say__FP7edict_si(st_49f7c0_3 *a0, unsigned int a1)
{
    int v12;  // edi
    int v13;  // eax
    unsigned int v22;  // ecx
    char *v23;  // edi
    int v24;  // edx
    int v25;  // ecx
    char *v26;  // edi
    char *v27;  // edi
    st_49f7c0_6 *v28;  // edi
    unsigned int v29;  // esi
    st_49f7c0_3 *v30;  // eax
    unsigned int v31;  // eax
    int v14;  // eax
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    int v34;  // edx
    unsigned int v35;  // eax
    int v36;  // eax
    int v37;  // eax
    char *v15;  // eax
    unsigned int v16;  // ecx
    char *v17;  // edi
    char *iter;  // esi
    st_49f7c0_3 *v19;  // esi
    int v20;  // eax
    char *v21;  // edi
    unsigned int v0;  // [bp-0x1c4]
    unsigned int v1;  // [bp-0x1c0]
    unsigned int v2;  // [bp-0x1bc]
    int v3;  // [bp-0x1b8]
    char *v4;  // [bp-0x1b4], Other Possible Types: int, unsigned int
    unsigned int v5;  // [bp-0x1b0]
    st_49f7c0_1 *v6;  // [bp-0x194]
    int v7;  // [bp-0x190]
    int v8;  // [bp-0x18c]
    char *v9;  // [bp-0x188]
    char v10;  // [bp-0x184]
    char v11;  // [bp-0x84]

    v8 = "say";
    v7 = "say_team";
    v2 = 0;
    v12 = g_61690c(v2);
    if (!g_616910(v2))
        return v14;
    v6 = sub_48c260(&a0->field_80);
    if (v6->field_9dc > *(float *)&gpGlobals->field_0)
        return v14;
    if (!sub_48cac0(v12, v8) || !sub_48cac0(v12, v7))
    {
        v14 = g_616910();
        if (v14 <= 1)
            return v14;
        v9 = g_616908();
    }
    else
    {
        if ((int)g_616910() > 1)
        {
            v5 = g_616908();
            v4 = v12;
            v13 = "%s %s";
        }
        else
        {
            v4 = v12;
            v13 = "%s";
        }
        sub_48d990(&v10, v13);
        v9 = &v10;
    }
    if (*v9 == 0x22)
    {
        v15 = v9 + 1;
        v9 = v15;
        v16 = 0xffffffff;
        do
        {
            v17 = v15;
        } while (v16 && (v16 -= 1, v15 = v17 + 1, *v17));
        *(&v9[~v16] - 2) = 0;
    }
    iter = v9;
    while (1)
    {
        if (!iter)
        {
LABEL_49f96a:
            v19 = a0;
            sub_48ac50(&ChatClass, v19, v9);
            if (a1)
            {
                v5 = v19->field_250 + gpGlobals->field_98;
                v4 = 2;
                v20 = "%c(TEAM) %s: ";
                break;
            }
            else
            {
                v5 = a0->field_250 + gpGlobals->field_98;
                v4 = 2;
                v20 = "%c%s: ";
                break;
            }
        }
        if (*iter)
        {
            if (!sub_488970(*iter))
            {
                iter += 1;
                continue;
            }
            if (sub_488b30(*iter))
            {
                iter += 1;
            }
            else
            {
                iter = NULL;
                goto LABEL_49f962;
            }
        }
        else
        {
LABEL_49f962:
            if (iter)
                return v14;
            goto LABEL_49f96a;
        }
    }
    sub_48d990(&v11, v20);
    v21 = &v11;
    v22 = 0xffffffff;
    do
    {
        v23 = v21;
    } while (v22 && (v22 -= 1, v21 = v23 + 1, *v23));
    v24 = 127 - ~v22;
    v25 = -0x1;
    v26 = v9;
    do
    {
        v27 = v26;
    } while (v25 && (v25 -= 1, v26 = v27 + 1, *v27));
    if (~v25 - 1 > v24)
        v9[v24] = 0;
    sub_48c150(&v11, v9);
    sub_48c150(&v11, "\n");
    v6->field_9dc = (float)(1.0 + *(float *)&gpGlobals->field_0);
    v28 = NULL;
    while (1)
    {
        v28 = sub_487e80(v28, "player");
        if (!v28)
            break;
        v29 = 0;
        if (!v28->field_0->field_208 || !g_6168d8(v28->field_0->field_208))
            v29 = 1;
        if (v29)
            break;
        if (!v28->field_0 || v28->field_0->field_208 == a0 || !v28->field_60->field_a4(v28) || (char)sub_487d30(&g_VoiceGameMgr, v28, v6))
            continue;
        if (a1)
        {
            v30 = a0;
            if (v30 || (v30 = g_6168d4(0), v30))
                v31 = v30->field_7c;
            else
                v31 = 0;
            if (g_pGameRules->field_44->field_c8(g_pGameRules, v28, v31) != 1)
                continue;
        }
        g_616878(1, gmsgSayText, 0, v28->field_0->field_208);
        v32 = g_6168dc(a0);
        g_616880(v32);
        g_616898(&v11);
        g_61687c();
    }
    g_616878(1, gmsgSayText, 0, a0->field_288);
    v33 = g_6168dc(a0);
    g_616880(v33);
    g_616898(&v11);
    g_61687c();
    g_616904(&v11);
    v34 = (!a1 ? "say" : "say_team");
    if (!g_teamplay)
    {
        v4 = v9;
        v3 = v34;
        v2 = g_616984(a0);
        v1 = g_6169fc(a0);
        v37 = g_616984(a0);
        sub_488680("\"%s<%i><%s><%i>\" %s \"%s\"\n", a0->field_250 + gpGlobals->field_98, v37);
        return v14;
    }
    v4 = v9;
    v3 = v34;
    v0 = "model";
    v35 = g_616968(a0);
    v2 = g_61696c(v35);
    v1 = g_6169fc(a0);
    v36 = g_616984(a0);
    sub_488680("\"%s<%i><%s><%s>\" %s \"%s\"\n", a0->field_250 + gpGlobals->field_98, v36);
    return v14;
}

