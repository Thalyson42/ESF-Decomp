// ManageStruggleArrows__12CPlayerMelee @0x10b270 size=365
typedef struct st_50b270_0 {
    float field_0;
} st_50b270_0;

typedef struct st_50b270_1 {
    unsigned int field_0;
} st_50b270_1;

extern float melee_struggle_maxarrows+12;
extern float melee_struggle_arrowtime+12;
extern float melee_struggle_enddelay+12;
extern st_50b270_1 *g_engfuncs.pfnRandomLong;
extern st_50b270_0 *gpGlobals;

unsigned int ManageStruggleArrows__12CPlayerMelee(float idx)
{
    int v2;  // eax
    unsigned int v3;  // eax

    if (*(int *)(*(unsigned int *)&idx + 312) && *(float *)gpGlobals > *(float *)(*(unsigned int *)&idx + 112))
    {
        if (*(int *)(*(unsigned int *)&idx + 116))
            return CPlayerMelee::CheckStruggleArrows(idx);
        *(unsigned int *)(*(unsigned int *)&idx + 108) = *(int *)(*(unsigned int *)&idx + 108) + 1;
        if ((double)*(int *)(*(unsigned int *)&idx + 108) >= melee_struggle_maxarrows+12)
        {
            *(float *)(*(unsigned int *)&idx + 112) = *(float *)gpGlobals + melee_struggle_enddelay+12;
            *(unsigned int *)(*(unsigned int *)&idx + 116) = 1;
        }
        else
        {
            *(float *)(*(unsigned int *)&idx + 112) = *(float *)gpGlobals + melee_struggle_arrowtime+12;
        }
        *(unsigned int *)(*(unsigned int *)&idx + 120) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 120) = 1;
        CPlayerMelee::AddDirection(idx, CPlayerMelee::DirectionsToFlags(idx, g_engfuncs.pfnRandomLong(0, 7)));
        CPlayerMelee::LetGoDirection(idx, *(int *)(*(unsigned int *)&idx + 328));
        v2 = CPlayerMelee::DirectionsToFlags(idx, g_engfuncs.pfnRandomLong(0, 7));
        CPlayerMelee::AddDirection(*(int *)(*(unsigned int *)&idx + 304), v2);
        CPlayerMelee::LetGoDirection(*(int *)(*(unsigned int *)&idx + 304), *(int *)(*(int *)(*(unsigned int *)&idx + 304) + 328));
        *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 304) + 120) = 0;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 124) = 1;
    v3 = CPlayerMelee::SetBlockingDirections(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 124) = 0;
    return v3;
}

