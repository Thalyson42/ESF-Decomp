// NewExeMovePost__12CPlayerMelee @0x105430 size=242
typedef struct st_505430_2 {
    char padding_0[80];
    unsigned int field_50;
} st_505430_2;

typedef struct st_505430_0 {
    float field_0;
} st_505430_0;

typedef struct st_505430_1 {
    unsigned int field_0;
} st_505430_1;

extern st_505430_1 *g_engfuncs.pfnIndexOfEdict;
extern st_505430_0 *gpGlobals;

unsigned int NewExeMovePost__12CPlayerMelee(float idx)
{
    unsigned int v2;  // eax
    st_505430_2 *v3;  // eax
    unsigned int v0;  // [bp-0x38]

    if (!*(int *)(*(unsigned int *)&idx + 380))
        return (!CPlayerMelee::CanSwitch(idx) ? CPlayerMelee::StopMelee(idx) : CPlayerMelee::Switch(idx));
    v2 = CPlayerMelee::SetBlock(idx, *(int *)(*(unsigned int *)&idx + 380));
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 380) + 84) = v2;
    CPlayerMelee::SetBlockStun(idx, *(int *)(*(unsigned int *)&idx + 380));
    CPlayerMelee::AddAnimationExe(idx, *(float *)gpGlobals, *(int *)(*(unsigned int *)&idx + 380));
    v3 = *(int *)(*(unsigned int *)&idx + 380);
    if (v3->field_50 != 2)
        return v3;
    v0 = CBaseAnimating::LookupSequence(*(int *)(*(unsigned int *)&idx + 292), v3);
    return UTIL_Model_MotionBlur(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
}

