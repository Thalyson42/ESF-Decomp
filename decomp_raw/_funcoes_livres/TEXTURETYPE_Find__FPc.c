// TEXTURETYPE_Find__FPc @0x11dcc0 size=106
extern int gcTextures;
extern char grgszTextureName;
extern char grgchTextureType;

unsigned int TEXTURETYPE_Find__FPc(int a0)
{
    int i;  // esi

    for (i = 0; i < gcTextures; i += 1)
    {
        if (!strncasecmp@GLIBC_2.0(a0, &(&grgszTextureName)[13 * i], 12))
            return (&grgchTextureType)[i];
    }
    return 67;
}

