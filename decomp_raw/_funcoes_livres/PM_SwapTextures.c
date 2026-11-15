// PM_SwapTextures @0x18e350 size=153
extern unsigned int grgszTextureName;
extern unsigned int grgchTextureType;

int PM_SwapTextures(unsigned int a0, unsigned int a1)
{
    int v5;  // edi
    int v6;  // esi
    unsigned int v0;  // [bp-0x34]
    char *v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    char v3;  // [bp-0x25]
    char v4;  // [bp-0x24]

    v2 = &grgszTextureName;
    v5 = 13 * a0 + (char *)&grgszTextureName;
    v1 = &v4;
    sub_48e110(&v4, v5);
    v0 = &grgchTextureType;
    v3 = *(a0 + (char *)&grgchTextureType);
    v6 = a1 * 13 + v2;
    sub_48e110(v5, v6);
    *(char *)(a0 + v0) = *(char *)(a1 + v0);
    sub_48e110(v6, v1);
    *(char *)(a1 + v0) = v3;
    return a1;
}

