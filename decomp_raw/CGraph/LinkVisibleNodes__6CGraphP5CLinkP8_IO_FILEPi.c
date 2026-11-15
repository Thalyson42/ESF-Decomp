// LinkVisibleNodes__6CGraphP5CLinkP8_IO_FILEPi @0xe0eb0 size=1322
typedef struct st_4e0eb0_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[8];
    int field_18;
} st_4e0eb0_0;

typedef struct st_4e0eb0_1 {
    unsigned int field_0;
} st_4e0eb0_1;

typedef struct st_4e0eb0_4 {
    unsigned int field_0;
    char padding_4[180];
    struct st_4e0eb0_1 *field_b8;
    char padding_bc[232];
    char field_1a4[4];
    char field_1a6;
    char padding_1a7[37];
    unsigned int field_1cc;
} st_4e0eb0_4;

typedef struct st_4e0eb0_2 {
    char padding_0[128];
    unsigned int field_80;
    char padding_84[180];
    struct st_4e0eb0_1 *field_138;
    char padding_13c[232];
    char field_224[4];
    char field_226;
    char padding_227[37];
    unsigned int field_24c;
} st_4e0eb0_2;

typedef struct st_4e0eb0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4e0eb0_3;

extern st_4e0eb0_1 *g_engfuncs.pfnAlertMessage;
extern st_4e0eb0_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4e0eb0_3 *gpGlobals;
extern unsigned int WorldGraph+12;
extern int g_pBodyQueueHead;

unsigned int LinkVisibleNodes__6CGraphP5CLinkP8_IO_FILEPi(st_4e0eb0_0 *a0, unsigned int *a1, int a2, int *a3)
{
    int j;  // edx
    unsigned int v16;  // eax
    unsigned int *v25;  // esi
    st_4e0eb0_4 *v26;  // ecx
    st_4e0eb0_4 *v27;  // edx
    st_4e0eb0_4 *v28;  // edx
    unsigned int v29;  // esi
    st_4e0eb0_4 *v30;  // ecx
    st_4e0eb0_4 *v31;  // ecx
    st_4e0eb0_4 *v32;  // ecx
    unsigned int v33;  // esi
    unsigned int v17;  // ecx
    unsigned int *v18;  // esi
    unsigned int v19;  // ecx
    unsigned int v20;  // eax
    unsigned int v21;  // eax
    st_4e0eb0_4 *v22;  // ecx
    st_4e0eb0_4 *v23;  // edx
    unsigned int v24;  // eax
    unsigned int v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x9c]
    unsigned int v2;  // [bp-0x78]
    unsigned int v3;  // [bp-0x74]
    unsigned int v4;  // [bp-0x70]
    int v5;  // [bp-0x6c]
    int v6;  // [bp-0x68]
    unsigned int v7;  // [bp-0x64]
    st_4e0eb0_2 *v8;  // [bp-0x60]
    unsigned int v9;  // [bp-0x5c]
    unsigned int i;  // [bp-0x58]
    char v11;  // [bp-0x44]
    unsigned int v12;  // [bp-0x40]
    float v13;  // [bp-0x34]
    st_4e0eb0_2 *v14;  // [bp-0x14]

    *a3 = 0;
    if (a0->field_18 <= 0)
    {
        g_engfuncs.pfnAlertMessage(2, "No Nodes!\n");
        return 0;
    }
    if (!a2)
    {
        g_engfuncs.pfnAlertMessage(2, "**LinkVisibleNodes:\ncan't write to file.");
    }
    else
    {
        fprintf@GLIBC_2.0(a2, "----------------------------------------------------------------------------\n");
        fprintf@GLIBC_2.0(a2, "LinkVisibleNodes - Initial Connections\n");
        fprintf@GLIBC_2.0(a2, "----------------------------------------------------------------------------\n");
    }
    v7 = 0;
    v5 = 0;
    i = 0;
    if ((int)v7 < a0->field_18)
    {
        do
        {
            v6 = 0;
            if (a2)
                fprintf@GLIBC_2.0(a2, "Node #%4d:\n\n", i);
            j = 0;
            do
            {
                v16 = (v7 + j) * 24;
                v17 = i;
                v18 = a1;
                *(unsigned int *)((char *)v18 + v16) = v17;
                *(unsigned int *)((char *)v18 + v16 + 4) = 0;
                *(unsigned int *)((char *)v18 + v16 + 8) = 0;
                j += 1;
            } while (j <= 127);
            *(unsigned int *)(a0->field_c + v17 * 88 + 36) = v7;
            v9 = 0;
            if ((int)v9 < a0->field_18)
            {
                v2 = i * 11;
                do
                {
                    if (v9 == i)
                        continue;
                    v19 = a0->field_c;
                    v20 = i * 88;
                    v4 = v20;
                    v21 = v9 * 88;
                    v3 = v21;
                    if ((*(int *)(v19 + v20 + 28) & 7) != (*(int *)(v19 + v21 + 28) & 7) || !(v14 = NULL, v8 = NULL, UTIL_TraceLine(v4 + v19, v3 + v19, 1, g_pBodyQueueHead, &v11), !v12))
                        continue;
                    if (v13 != 1.0f)
                    {
                        v8 = v14;
                        UTIL_TraceLine(a0->field_c + v3, v4 + a0->field_c, 1, g_pBodyQueueHead, &v11);
                        if (v14 != v8)
                            continue;
                        v22 = &v8->field_80;
                        if (!v8)
                            v22 = NULL;
                        if (!strcmp@GLIBC_2.0(v22->field_0 + gpGlobals->field_98, "worldspawn"))
                            continue;
                        v23 = &v14->field_80;
                        if (!v14)
                            v23 = NULL;
                        v24 = v7 * 24;
                        v25 = a1;
                        *(st_4e0eb0_4 **)((char *)v25 + v24 + 8) = v23;
                        v26 = &v14->field_80;
                        if (!v14)
                            v26 = NULL;
                        *(int *)((char *)v25 + v24 + 12) = *(int *)((char *)v26->field_b8 + gpGlobals->field_98);
                        v27 = &v14->field_80;
                        if (!v14)
                            v27 = NULL;
                        if (!(v27->field_1a4[2] & 1))
                        {
                            v28 = &v14->field_80;
                            if (!v14)
                                v28 = NULL;
                            v28->field_1a4 = v28->field_1a4 + 0x10000;
                        }
                    }
                    if (a2)
                    {
                        fprintf@GLIBC_2.0(a2, "%4d", v9);
                        v29 = 0;
                        if (!a1[2 + 6 * v7] || !g_engfuncs.pfnEntOffsetOfPEntity(*(int *)(a1[2 + 6 * v7] + 520)))
                            v29 = 1;
                        if (!v29)
                        {
                            v30 = &v14->field_80;
                            if (!v14)
                                v30 = NULL;
                            v1 = (char *)v30->field_b8 + gpGlobals->field_98;
                            v31 = &v8->field_80;
                            if (!v8)
                                v31 = NULL;
                            v0 = *(int *)&v31->padding_1a7[35] + gpGlobals->field_98;
                            v32 = &v8->field_80;
                            if (!v8)
                                v32 = NULL;
                            fprintf@GLIBC_2.0(a2, "  Entity on connection: %s, name: %s  Model: %s", v32->field_0 + gpGlobals->field_98);
                        }
                        fprintf@GLIBC_2.0(a2, "\n", v9);
                    }
                    a1[1 + 6 * v7] = v9;
                    v6 += 1;
                    v7 += 1;
                    if (v6 == 128)
                    {
                        g_engfuncs.pfnAlertMessage(2, "**LinkVisibleNodes:\nNode %d has NodeLinks > MAX_NODE_INITIAL_LINKS", i);
                        v33 = i;
                        fprintf@GLIBC_2.0(a2, "** NODE %d HAS NodeLinks > MAX_NODE_INITIAL_LINKS **\n", v33);
                        *a3 = v33;
                        return 0;
                    }
                    else if ((int)v7 > a0->field_18 * 128)
                    {
                        g_engfuncs.pfnAlertMessage(2, "**LinkVisibleNodes:\nTotalLinks > MAX_NODE_INITIAL_LINKS * NUMNODES");
                        *a3 = i;
                        return 0;
                    }
                    else
                    {
                        if (!v6)
                            fprintf@GLIBC_2.0(a2, "**NO INITIAL LINKS**\n");
                        *(int *)(WorldGraph+12 + v2 * 8 + 32) = v6;
                        if (v6 > v5)
                            v5 = v6;
                    }
                } while ((v9 += 1, (int)v9 < a0->field_18));
            }
            if (a2)
                fprintf@GLIBC_2.0(a2, "----------------------------------------------------------------------------\n");
            i += 1;
        } while ((int)i < a0->field_18);
    }
    fprintf@GLIBC_2.0(a2, "\n%4d Total Initial Connections - %4d Maximum connections for a single node.\n", v7, v5);
    fprintf@GLIBC_2.0(a2, "----------------------------------------------------------------------------\n\n\n");
    return v7;
}

