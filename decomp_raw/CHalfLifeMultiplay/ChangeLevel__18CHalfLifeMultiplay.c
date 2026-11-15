// ChangeLevel__18CHalfLifeMultiplay @0xde5e0 size=901
typedef struct st_4de5e0_4 {
    char padding_0[160];
    struct st_4de5e0_3 *field_a0;
} st_4de5e0_4;

typedef struct st_4de5e0_3 {
    unsigned int field_0;
} st_4de5e0_3;

typedef struct st_4de5e0_1 {
    struct st_4de5e0_1 *field_0;
    char field_4;
    char padding_5[31];
    int field_24;
    int field_28;
} st_4de5e0_1;

typedef struct st_4de5e0_2 {
    unsigned int field_0;
    struct st_4de5e0_1 *field_4;
} st_4de5e0_2;

typedef struct st_4de5e0_5 {
    char padding_0[96];
    struct st_4de5e0_4 *field_60;
    char padding_64[784];
    unsigned int field_374;
} st_4de5e0_5;

typedef struct st_4de5e0_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[128];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_4de5e0_0;

extern unsigned int g_fGameOver;
extern st_4de5e0_3 *g_6167d8;
extern st_4de5e0_3 *g_61685c;
extern st_4de5e0_3 *g_6168a8;
extern st_4de5e0_3 *g_6168b4;
extern st_4de5e0_3 *g_616978;
extern st_4de5e0_0 *gpGlobals;
extern int szPreviousMapCycleFile.1898;
extern st_4de5e0_2 mapcycle.1899;
extern st_4de5e0_1 *g_616b44;

unsigned int * ChangeLevel__18CHalfLifeMultiplay(void)
{
    int v12;  // edi
    unsigned int v13;  // edi
    char *v22;  // edi
    int iter;  // edi
    st_4de5e0_5 *v24;  // esi
    st_4de5e0_1 *i;  // esi
    unsigned int v15;  // eax
    unsigned int v16;  // esi
    char *v17;  // edi
    unsigned int v18;  // ecx
    char *v19;  // edi
    char *v20;  // edi
    unsigned int v21;  // ecx
    int v0;  // [bp-0xc3c]
    st_4de5e0_2 *v1;  // [bp-0xc18]
    unsigned int v2;  // [bp-0xc14]
    int v3;  // [bp-0xc10]
    int v4;  // [bp-0xc0c]
    int v5;  // [bp-0xc08]
    char v6;  // [bp-0xc04]
    char v7;  // [bp-0x624]
    char v8[4];  // [bp-0x44]
    unsigned short v9;  // [bp-0x40]
    char v10;  // [bp-0x24]

    v5 = 0;
    v4 = 0;
    strncpy(v8, "hldm", 4);
    v9 = 49;
    v2 = 1;
    v0 = "mapcyclefile";
    v12 = g_6168a8(v0);
    v7 = 0;
    v6 = 0;
    v3 = sub_48c5e0(v0);
    if (sub_48cac0(v12, &szPreviousMapCycleFile.1898))
    {
        sub_48e110(&szPreviousMapCycleFile.1898, v12);
        sub_48b020(&mapcycle.1899.field_0);
        if (!sub_48cf70(v12, &mapcycle.1899.field_0) || !mapcycle.1899.field_0)
        {
            g_6168b4(1, "Unable to load map cycle file %s\n", v12);
            v2 = 0;
        }
    }
    if (v2)
    {
        v1 = &mapcycle.1899.field_0;
        if (mapcycle.1899.field_0)
        {
            v13 = 0;
            sub_48e110(&v10, gpGlobals->field_c + gpGlobals->field_98);
            sub_48e110(v8, gpGlobals->field_c + gpGlobals->field_98);
            for (i = v1->field_4; i->field_0 != g_616b44; i = i->field_0)
            {
                v15 = 0;
                if (i->field_24)
                {
                    if (v3 >= i->field_24)
                    {
                        v13 = 1;
                        v5 = i->field_24;
                    }
                    else
                    {
                        v15 = 1;
                    }
                }
                if (i->field_28)
                {
                    if (v3 <= i->field_28)
                    {
                        v13 = 1;
                        v4 = i->field_28;
                    }
                    else
                    {
                        v15 = 1;
                    }
                }
                if (!v15)
                {
                    v13 = 1;
                    break;
                }
            }
            if (!v13)
                i = g_616b44;
            g_616b44 = i->field_0;
            sub_48e110(&v10, &i->field_4);
            v16 = i + 1;
            sub_4883c0(v16, &v7);
            sub_48e110(&v6, v16);
        }
    }
    if (!g_616978(&v10))
        sub_48e110(&v10, v8);
    g_fGameOver = 1;
    g_6168b4(1, "CHANGE LEVEL: %s\n", &v10);
    if (v5 || v4)
        g_6168b4(1, "PLAYER COUNT:  min %i max %i current %i\n", v5, v4, v3);
    v17 = &v6;
    v18 = 0xffffffff;
    do
    {
        v19 = v17;
    } while (v18 && (v18 -= 1, v17 = v19 + 1, *v19));
    if (v18 != 0xfffffffe)
        g_6168b4(1, "RULES:  %s\n", &v6);
    g_6167d8(&v10, 0);
    v20 = &v7;
    v21 = 0xffffffff;
    do
    {
        v22 = v20;
    } while (v21 && (v21 -= 1, v20 = v22 + 1, *v22));
    if (v21 != 0xfffffffe)
        g_61685c(&v7);
    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        v24 = sub_48a500(iter);
        if (!v24)
        {
            iter += 1;
        }
        else if (v24->field_60->field_a0(v24))
        {
            v24->field_374 = 1;
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return gpGlobals;
}

