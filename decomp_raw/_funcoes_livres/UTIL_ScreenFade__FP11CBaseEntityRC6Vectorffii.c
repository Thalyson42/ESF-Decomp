// UTIL_ScreenFade__FP11CBaseEntityRC6Vectorffii @0x132530 size=89
int UTIL_ScreenFade__FP11CBaseEntityRC6Vectorffii(int a0, int a1, float a2, float a3, int a4, int a5)
{
    char v0;  // [bp-0x24]

    UTIL_ScreenFadeBuild(&v0, a1, a2, a3, a4, a5);
    return UTIL_ScreenFadeWrite(&v0, a0);
}

