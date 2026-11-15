// WinStruggle__12CPlayerMelee @0x10b5a0 size=580
typedef struct st_50b5a0_0 {
    unsigned int field_0;
} st_50b5a0_0;

extern st_50b5a0_0 *g_engfuncs.pfnIndexOfEdict;
extern st_50b5a0_0 *g_engfuncs.pfnRandomLong;

int WinStruggle__12CPlayerMelee(float idx)
{
    unsigned int *v13;  // eax
    unsigned int *v15;  // eax
    char *v0;  // [bp-0x15c]
    unsigned int v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x154]
    unsigned int v3;  // [bp-0x128], Other Possible Types: int
    char v4;  // [bp-0x124]
    char v5;  // [bp-0x24]
    float v6;  // [bp-0x18]
    float v7;  // [bp-0x14]
    float v8;  // [bp-0x10]

    *(unsigned int *)(*(unsigned int *)&idx + 260) = 1;
    CPlayerMelee::SetMode(idx, 7);
    UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520)));
    v2 = 11;
    v1 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 296) + 520));
    UTIL_Model_Connect(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    if (*(int *)(*(unsigned int *)&idx + 320))
    {
        v13 = *(unsigned int *)&idx + 272;
    }
    else
    {
        v6 = -*(float *)(*(unsigned int *)&idx + 272);
        v7 = -*(float *)(*(unsigned int *)&idx + 276);
        v8 = -*(float *)(*(unsigned int *)&idx + 280);
        v13 = &v6;
    }
    UTIL_VecToAngles(&v5, v13);
    v0 = &v5;
    UTIL_Model_MeleeStruggle_Anglefix(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520)));
    *(unsigned int *)(*(unsigned int *)&idx + 376) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 380) = 0;
    *(unsigned int *)(CPlayerMelee::AddExeMove(idx, CPlayerMelee::SetupCombo(idx, 1)) + 84) = 2;
    v3 = 0x800;
    v3 = (!g_engfuncs.pfnRandomLong(0, 1) ? _INSERT(v3, 1, *(char *)((void*)&v3 + 1) | 1) : 2176);
    CPlayerMelee::GetAnimForMove(idx, v3, 2, &v4);
    v15 = CPlayerMelee::AddExeMove(idx, CPlayerMelee::CreateExeMove(idx, v3, 0, 0.3499999940395355f, 1, 0, 2, &v4));
    v15[21] = 2;
    v15[18] = 0;
    *(int *)(*(unsigned int *)&idx + 380) = *(int *)(*(unsigned int *)&idx + 376);
    return CPlayerMelee::NewExeMovePost(idx);
}

