// LoadBotNames__11CBotManager @0x13e1c0 size=453
typedef struct st_53e1c0_0 {
    char padding_0[62];
    short field_3e;
} st_53e1c0_0;

typedef struct st_53e1c0_1 {
    unsigned int field_0;
} st_53e1c0_1;

extern st_53e1c0_1 *g_engfuncs.pfnServerPrint;

int LoadBotNames__11CBotManager(st_53e1c0_0 *a0)
{
    char *v6;  // edi
    char *v7;  // ecx
    char *v8;  // edi
    char *v9;  // eax
    char *v10;  // edi
    char *v11;  // edx
    char *j;  // ecx
    char *v13;  // edx
    char *v0;  // [bp-0x174]
    char *i;  // [bp-0x170]
    char *v2;  // [bp-0x16c]
    int v3;  // [bp-0x168]
    char v4;  // [bp-0x164]
    char v5;  // [bp-0x104]

    BuildBotFileName(&v5, "bot_names.txt", 0);
    v3 = fopen@GLIBC_2.1(&v5, "r");
    g_engfuncs.pfnServerPrint("Reading bot_names file... ");
    if (!v3)
        return g_engfuncs.pfnServerPrint("file not found\n");
    for (i = &v4; a0->field_3e <= 99 && fgets@GLIBC_2.0(i, 80, v3); a0->field_3e = a0->field_3e + 1)
    {
        v6 = &v4;
        v7 = 0xffffffff;
        do
        {
            v8 = v6;
        } while (v7 && (v7 -= 1, v6 = v8 + 1, *v8));
        v9 = ~v7;
        v10 = v9 - 1;
        v11 = v9 - 2;
        if (*(char *)(v11 + &v4) == 10)
        {
            *(char *)(v11 + &v4) = 0;
            v10 = v11;
        }
        v2 = NULL;
        if (v2 < v10)
        {
            v0 = &v4;
            do
            {
                if (((char)(*(char *)(v2 + v0) - 32) > 94 || *(char *)(v2 + v0) == 0x22) && v2 < v10)
                {
                    j = v2;
                    do
                    {
                        v13 = j + 1;
                        *(char *)(j + &v4) = *(char *)(v13 + &v4);
                        j = v13;
                    } while (j < v10);
                }
            } while ((v2 += 1, v2 < v10));
        }
        if (*&v4)
            strncpy@GLIBC_2.0(&a0[1].padding_0[33 * a0->field_3e], i, 32);
    }
    fclose@GLIBC_2.1(v3);
    return g_engfuncs.pfnServerPrint("done\n");
}

