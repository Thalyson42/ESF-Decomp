// TEXTURETYPE_Init__Fv @0x11da20 size=670
typedef struct st_51da20_0 {
    unsigned int field_0;
} st_51da20_0;

extern unsigned int fTextureTypeInit;
extern int gcTextures;
extern st_51da20_0 *g_engfuncs.pfnLoadFileForMe;
extern st_51da20_0 *g_engfuncs.pfnFreeFile;
extern int grgszTextureName;
extern int grgchTextureType;

unsigned int * TEXTURETYPE_Init__Fv(void)
{
    char *v8;  // eax
    char *v9;  // edx
    char v10;  // al
    char *node;  // esi
    char *v12;  // eax
    int v0;  // [bp-0x23c]
    char *v1;  // [bp-0x218]
    unsigned int *v2;  // [bp-0x214]
    char *iter;  // [bp-0x210]
    unsigned int v4;  // [bp-0x20c]
    unsigned int v5;  // [bp-0x208]
    char v6;  // [bp-0x204]

    v5 = 0;
    v4 = 0;
    if (fTextureTypeInit)
        return &fTextureTypeInit;
    memset@GLIBC_2.0(&grgszTextureName, 0, 0x1a00);
    memset@GLIBC_2.0(&grgchTextureType, 0, 0x200);
    gcTextures = 0;
    memset@GLIBC_2.0(&v6, 0, 0x200);
    v2 = g_engfuncs.pfnLoadFileForMe("sound/materials.txt", &v5);
    if (!v2)
        return v2;
    v1 = &v6;
    while (memfgets__FPUciRiPci(v2, v5, &v4, v1, 0x1ff) && gcTextures <= 0x1ff)
    {
        for (iter = NULL; *(char *)(iter + &v6); iter += 1)
        {
            if (!isspace@GLIBC_2.0(*(char *)(iter + &v6)))
            {
                v8 = iter;
                if (*(char *)(v8 + &v6) && *(char *)(v8 + &v6) != 47 && isalpha@GLIBC_2.0(*(char *)(v8 + &v6)))
                {
                    v9 = iter;
                    iter = v9 + 1;
                    v10 = toupper@GLIBC_2.0(*(char *)(v9 + &v6));
                    for (*(gcTextures + (char *)&grgchTextureType) = v10; *(char *)(iter + &v6); iter += 1)
                    {
                        if (!isspace@GLIBC_2.0(*(char *)(iter + &v6)))
                        {
                            if (*(char *)(iter + v1))
                            {
                                for (node = iter; *(char *)(node + &v6); node += 1)
                                {
                                    if (isspace@GLIBC_2.0(*(char *)(node + &v6)))
                                    {
                                        if (*(char *)(node + v1))
                                        {
                                            v12 = iter + 12;
                                            if (v12 > node)
                                                v12 = node;
                                            *(char *)(v12 + v1) = 0;
                                            v0 = 13 * gcTextures + (char *)&grgszTextureName;
                                            gcTextures = gcTextures + 1;
                                            strcpy@GLIBC_2.0(v0, v1 + iter);
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    g_engfuncs.pfnFreeFile(v2);
    fTextureTypeInit = 1;
    return &fTextureTypeInit;
}

