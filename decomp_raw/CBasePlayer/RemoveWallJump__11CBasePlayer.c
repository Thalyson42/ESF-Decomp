// RemoveWallJump__11CBasePlayer @0xf6f40 size=109
typedef struct st_4f6f40_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f6f40_0;

typedef struct st_4f6f40_1 {
    unsigned int field_0;
} st_4f6f40_1;

extern st_4f6f40_1 *g_engfuncs.pfnIndexOfEdict;

void RemoveWallJump__11CBasePlayer(st_4f6f40_0 **a0)
{
    unsigned int v1;  // esi

    UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(*a0->field_208));
    v1 = a0 + 224;
    CPlayerMelee::RemoveAnim(v1, CPlayerMelee::GetCurrentAnim(v1));
    CBasePlayer::ResetWallJumpVars(a0);
    return;
}

