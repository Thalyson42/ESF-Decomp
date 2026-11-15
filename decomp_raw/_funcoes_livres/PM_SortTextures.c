// PM_SortTextures @0x18e3f0 size=127
extern int gcTextures;
extern char grgszTextureName;

void PM_SortTextures(void)
{
    int v2;  // edi
    int v3;  // esi
    unsigned int v0;  // [bp-0x8]

    v2 = 0;
    if (0 >= gcTextures)
        return;
    do
    {
        v3 = v2 + 1;
        if (v3 < gcTextures)
        {
            v0 = v2 * 13;
            do
            {
                if ((int)sub_48cac0(&(&grgszTextureName)[v0], &(&grgszTextureName)[13 * v3]) > 0)
                    sub_48a110(v2, v3);
            } while ((v3 += 1, v3 < gcTextures));
        }
    } while ((v2 += 1, v2 < gcTextures));
    return;
}

