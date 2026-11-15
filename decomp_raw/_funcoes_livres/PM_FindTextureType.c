// PM_FindTextureType @0x18e710 size=191
extern unsigned int pm_shared_initialized;
extern unsigned int gcTextures;
extern char grgszTextureName;
extern char grgchTextureType;

unsigned int PM_FindTextureType(int a0)
{
    int v1;  // edi
    int v2;  // esi
    int v3;  // eax
    unsigned int v4;  // 4101
    int v0;  // [bp-0x8]

    if (!pm_shared_initialized)
    {
        sub_4892a0("pm_shared_initialized", "../pm_shared/pm_shared.c", 325, "PM_FindTextureType");
    }
    else
    {
        v0 = 0;
        v1 = gcTextures - 1;
        while (1)
        {
            if (v0 > v1)
                return 67;
            v2 = (v0 + v1) / 2;
            v3 = sub_48d130(a0, &(&grgszTextureName)[13 * v2], 12);
            if (!v3)
                break;
            v4 = _ccall(14, 15, v3, 0, 0);
            if (!(v4 & 1))
            {
                v0 = v2 + 1;
            }
            else if (v3 < 0)
            {
                v1 = v2 - 1;
            }
        }
    }
    return (&grgchTextureType)[v2];
}

