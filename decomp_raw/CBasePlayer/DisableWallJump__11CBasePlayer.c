// DisableWallJump__11CBasePlayer @0xf6e00 size=313
typedef struct st_4f6e00_0 {
    float field_0;
} st_4f6e00_0;

extern st_4f6e00_0 *gpGlobals;

int DisableWallJump__11CBasePlayer(float idx)
{
    unsigned int *v8;  // edi
    float *v11;  // edx
    int v0;  // [bp-0xa8]
    char *v1;  // [bp-0x94]
    float v2;  // [bp-0x68]
    unsigned int v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x60]
    unsigned int v5;  // [bp-0x5c]
    char v6;  // [bp-0x44]

    v8 = *(unsigned int *)&idx + 896;
    if (CPlayerMelee::CanPlayAnimation(v8))
    {
        v1 = &v6;
        CBasePlayer::GetWallJumpAnim(idx, CPlayerMelee::GetCurrentAnim(v8));
        *(float *)&v3 = *(float *)(*(unsigned int *)&idx + 972);
        *(float *)&v4 = *(float *)(*(unsigned int *)&idx + 976);
        *(float *)&v5 = *(float *)(*(unsigned int *)&idx + 980);
        *(unsigned short *)&v0 = 0;
        CPlayerMelee::SetAnimPriority(v8, 3, CPlayerMelee::AddAnimationAFix(v8, &v3, v0, *(float *)gpGlobals, &v6));
    }
    EMIT_SOUND_DYN(*(int *)(*(int *)idx + 520), 4, "weapons/walljumps.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    if (*(int *)(*(unsigned int *)&idx + 2408))
    {
        v11 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 2408) + 96) + 300))(*(int *)(*(unsigned int *)&idx + 2408));
        if (v11)
        {
            v2 = (float)(0.2 + *(float *)gpGlobals);
            v11[40] = v2;
            v11[39] = v2;
        }
    }
    return CBasePlayer::ResetWallJumpVars(idx);
}

