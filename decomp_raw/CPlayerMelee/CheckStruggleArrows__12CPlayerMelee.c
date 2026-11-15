// CheckStruggleArrows__12CPlayerMelee @0x10b3e0 size=444
extern float melee_struggle_maxextanges+12;

int CheckStruggleArrows__12CPlayerMelee(double a0, double a1, float idx)
{
    double v5;  // mm7
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    float v3;  // [bp-0xc]

    CPlayerMelee::PredictBlockRatio(idx, *(int *)(*(unsigned int *)&idx + 328), *(int *)(*(unsigned int *)&idx + 332), 0x3f800000, v0, v1, v2);
    v3 = (float)v5;
    CPlayerMelee::PredictBlockRatio(idx, *(int *)(*(int *)(*(unsigned int *)&idx + 304) + 328), *(int *)(*(int *)(*(unsigned int *)&idx + 304) + 332), 0x3f800000);
    if (v3 == a0)
    {
        CPlayerMelee::MeleeText(idx, 14, 0);
        CPlayerMelee::MeleeText(*(int *)(*(unsigned int *)&idx + 304), 14, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 196) = *(int *)(*(unsigned int *)&idx + 196) + 1;
        if ((double)*(int *)(*(unsigned int *)&idx + 196) < melee_struggle_maxextanges+12)
        {
            CPlayerMelee::MeleeHudDisable(idx);
            CPlayerMelee::MeleeHudDisable(*(int *)(*(unsigned int *)&idx + 304));
            CPlayerMelee::DelAllDirections(idx);
            CPlayerMelee::DelAllDirections(*(int *)(*(unsigned int *)&idx + 304));
            CPlayerMelee::RetryStruggleAttack(idx);
            return EMIT_SOUND_DYN(CPlayerMelee::GetSoundEdict(idx), 4, "weapons/meleestruggletie.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        return CPlayerMelee::StopMelee(idx);
    }
    else if (a0 < v3)
    {
        CPlayerMelee::MeleeText(idx, 12, 0);
        CPlayerMelee::MeleeText(*(int *)(*(unsigned int *)&idx + 304), 13, 0);
        CPlayerMelee::StopStruggleAttack(idx);
        return CPlayerMelee::WinStruggle(idx);
    }
    else
    {
        CPlayerMelee::MeleeText(idx, 13, 0);
        CPlayerMelee::MeleeText(*(int *)(*(unsigned int *)&idx + 304), 12, 0);
        CPlayerMelee::SimpleSwitch(idx, *(int *)(*(unsigned int *)&idx + 304), 0, 0);
        return CPlayerMelee::WinStruggle(*(int *)(*(unsigned int *)&idx + 304));
    }
}

