// UTIL_HostSay__FP11CBasePlayeriPc @0x17ee40 size=732
typedef struct st_57ee40_2 {
    char padding_0[428];
    unsigned int field_1ac;
    char padding_1b0[32];
    unsigned int field_1d0;
    char padding_1d4[52];
    int field_208;
} st_57ee40_2;

typedef struct st_57ee40_0 {
    char padding_0[152];
    unsigned int field_98;
} st_57ee40_0;

typedef struct st_57ee40_1 {
    unsigned int field_0;
} st_57ee40_1;

extern unsigned int gmsgSayText;
extern st_57ee40_1 *g_616878;
extern st_57ee40_1 *g_61687c;
extern st_57ee40_1 *g_616880;
extern st_57ee40_1 *g_616898;
extern st_57ee40_1 *g_6168d8;
extern st_57ee40_1 *g_6168dc;
extern st_57ee40_1 *g_6168ec;
extern st_57ee40_1 *g_616904;
extern st_57ee40_0 *gpGlobals;
extern int ChatClass;

char * UTIL_HostSay__FP11CBasePlayeriPc(st_57ee40_2 **a0, unsigned int a1, char *a2)
{
    char *v3;  // eax
    char *iter;  // esi
    st_57ee40_2 **v13;  // edi
    unsigned int v14;  // esi
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    char *v17;  // eax
    int v5;  // eax
    char *v6;  // edi
    unsigned int v7;  // ecx
    char *v8;  // edi
    int v9;  // edx
    int v10;  // ecx
    char *v11;  // edi
    char *v12;  // edi
    unsigned int v0;  // [bp-0xa4]
    unsigned int v1;  // [bp-0xa0]
    char v2;  // [bp-0x84]

    if (!a2)
        return v17;
    v3 = a2;
    if (!*v3)
        return v3;
    iter = v3;
    while (1)
    {
        if (!iter)
        {
LABEL_57eeac:
            if (a1)
            {
                v1 = *a0->field_1d0 + gpGlobals->field_98;
                v0 = 2;
                v5 = "%c(TEAM) %s: ";
                break;
            }
            else
            {
                v1 = *a0->field_1d0 + gpGlobals->field_98;
                v0 = 2;
                v5 = "%c%s: ";
                break;
            }
        }
        if (*iter)
        {
            v3 = sub_488970(*iter);
            if (!v3)
            {
                iter += 1;
                continue;
            }
            v3 = sub_488b30(*iter);
            if (v3)
            {
                iter += 1;
            }
            else
            {
                iter = NULL;
                goto LABEL_57eea4;
            }
        }
        else
        {
LABEL_57eea4:
            if (iter)
                return v3;
            goto LABEL_57eeac;
        }
    }
    sub_48d990(&v2, v5);
    v6 = &v2;
    v7 = 0xffffffff;
    do
    {
        v8 = v6;
    } while (v7 && (v7 -= 1, v6 = v8 + 1, *v8));
    v9 = 127 - ~v7;
    v10 = -0x1;
    v11 = a2;
    do
    {
        v12 = v11;
    } while (v10 && (v10 -= 1, v11 = v12 + 1, *v12));
    if (~v10 - 1 > v9)
        a2[v9] = 0;
    sub_48ac50(&ChatClass, *a0->field_208, a2);
    sub_48c150(&v2, a2);
    sub_48c150(&v2, "\n");
    if (!gmsgSayText)
        gmsgSayText = g_6168ec("SayText", 0xffffffff);
    v13 = NULL;
    while (1)
    {
        v13 = sub_487e80(v13, "player");
        if (!v13)
            break;
        v14 = 0;
        if (!*v13->field_208 || !g_6168d8(*v13->field_208))
            v14 = 1;
        if (v14)
            break;
        if (v13 != a0 && (!a1 || *a0->field_1ac == *v13->field_1ac))
        {
            g_616878(1, gmsgSayText, 0, *v13->field_208);
            v15 = g_6168dc(*a0->field_208);
            g_616880(v15);
            g_616898(&v2);
            g_61687c();
        }
    }
    g_616878(1, gmsgSayText, 0, *a0->field_208);
    v16 = g_6168dc(*a0->field_208);
    g_616880(v16);
    g_616898(&v2);
    g_61687c();
    return g_616904(&v2);
}

