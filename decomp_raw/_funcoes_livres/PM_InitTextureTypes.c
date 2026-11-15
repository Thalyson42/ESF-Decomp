// PM_InitTextureTypes @0x18e470 size=657
typedef struct st_58e470_1 {
    unsigned int field_0;
} st_58e470_1;

typedef struct st_58e470_0 {
    char padding_0[325024];
    struct st_58e470_1 *field_4f5a0;
    struct st_58e470_1 *field_4f5a4;
    struct st_58e470_1 *field_4f5a8;
    struct st_58e470_1 *field_4f5ac;
} st_58e470_0;

extern st_58e470_0 *pmove;
extern int gcTextures;
extern unsigned int bTextureTypeInit.204;
extern unsigned int grgszTextureName;
extern unsigned int grgchTextureType;

int PM_InitTextureTypes(void)
{
    unsigned int *node;  // edi
    unsigned int v10;  // ecx
    char *iter;  // ecx
    unsigned int *v20;  // eax
    char *v21;  // eax
    int v22;  // eax
    int v23;  // eax
    unsigned int *iter1;  // edi
    unsigned int v12;  // ecx
    unsigned int *iter2;  // edi
    unsigned int v14;  // ecx
    unsigned int *v15;  // eax
    unsigned int *v16;  // eax
    st_58e470_1 **v17;  // eax
    unsigned int *v18;  // eax
    int v0;  // [bp-0x24c]
    unsigned int v1;  // [bp-0x21c]
    char *v2;  // [bp-0x218]
    unsigned int v3;  // [bp-0x214]
    int v4;  // [bp-0x210]
    char *l;  // [bp-0x20c]
    unsigned int v6;  // [bp-0x208]
    char v7;  // [bp-0x204]

    if (bTextureTypeInit.204)
        return v23;
    node = &grgszTextureName;
    for (v10 = 1664; v10; node += 1)
    {
        v10 -= 1;
        *node = 0;
    }
    iter1 = &grgchTextureType;
    for (v12 = 128; v12; iter1 += 1)
    {
        v12 -= 1;
        *iter1 = 0;
    }
    gcTextures = 0;
    iter2 = &v7;
    for (v14 = 128; v14; iter2 += 1)
    {
        v14 -= 1;
        *iter2 = 0;
    }
    v3 = pmove->field_4f5a0("sound/materials.txt");
    v4 = pmove->field_4f5a4("sound/materials.txt", 5, 0);
    if (!v4)
        return v4;
    v6 = 0;
    v2 = &v7;
    while (pmove->field_4f5ac(v4, v3, &v6, v2, 0x1ff) && gcTextures <= 0x1ff)
    {
        for (l = NULL; *(char *)(l + &v7); l += 1)
        {
            v15 = sub_48dba0();
            if (!(*(char *)(*v15 + *(char *)(l + &v7) * 2 + 1) & 32))
            {
                if (*(char *)(l + &v7) && *(char *)(l + &v7) != 47)
                {
                    v16 = sub_48dba0();
                    v1 = *(char *)(l + &v7);
                    if (*(char *)(*v16 + v1 * 2 + 1) & 4)
                    {
                        v17 = sub_48c580();
                        l += 1;
                        for (*(gcTextures + (char *)&grgchTextureType) = *(int *)&(*v17)[v1]; *(char *)(l + &v7); l += 1)
                        {
                            v18 = sub_48dba0();
                            if (!(*(char *)(*v18 + *(char *)(iter + &v7) * 2 + 1) & 32))
                            {
                                if (*(char *)(iter + v2))
                                {
                                    for (iter = l; *(char *)(iter + &v7); iter += 1)
                                    {
                                        v20 = sub_48dba0();
                                        if (*(char *)(*v20 + *(char *)(iter + &v7) * 2 + 1) & 32)
                                        {
                                            if (*(char *)(iter + v2))
                                            {
                                                v21 = l + 12;
                                                if (v21 > iter)
                                                    v21 = iter;
                                                *(char *)(v21 + v2) = 0;
                                                v0 = 13 * gcTextures + (char *)&grgszTextureName;
                                                gcTextures = gcTextures + 1;
                                                sub_48e110(v0, v2 + l);
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
    }
    v0 = v4;
    pmove->field_4f5a8(v0);
    v22 = sub_48cc80(v0);
    bTextureTypeInit.204 = 1;
    return v22;
}

