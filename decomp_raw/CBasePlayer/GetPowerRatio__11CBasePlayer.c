// GetPowerRatio__11CBasePlayer @0xf3a50 size=94
typedef struct st_4f3a50_0 {
    int field_0;
} st_4f3a50_0;

extern st_4f3a50_0 *g_pGameRules;

double GetPowerRatio__11CBasePlayer(float a0)
{
    double v2;  // mm7
    int v0;  // [bp-0x8]

    if (!*(int *)g_pGameRules)
        return 0.0;
    v0 = sub_48bb90(a0);
    v2 = (double)v0 / (double)*(int *)g_pGameRules;
    if (v2 < 100.0)
        return v2;
    return 100.0;
}

