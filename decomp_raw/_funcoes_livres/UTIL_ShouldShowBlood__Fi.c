// UTIL_ShouldShowBlood__Fi @0x133480 size=105
typedef struct st_533480_0 {
    unsigned int field_0;
} st_533480_0;

extern st_533480_0 *g_engfuncs.pfnCVarGetFloat;

unsigned int UTIL_ShouldShowBlood__Fi(unsigned int a0)
{
    double v0;  // mm0

    if (a0 != 0xffffffff)
    {
        g_engfuncs.pfnCVarGetFloat((a0 == 247 ? "violence_hblood" : "violence_ablood"));
        if (v0 != 0.0)
            return 1;
    }
    return 0;
}

