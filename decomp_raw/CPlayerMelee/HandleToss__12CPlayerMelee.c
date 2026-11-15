// HandleToss__12CPlayerMelee @0x101e70 size=160
unsigned int HandleToss__12CPlayerMelee(float a0)
{
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (CPlayerMelee::DeaccelerateToss(a0))
        return CPlayerMelee::StopThrow(a0);
    v4 = CPlayerMelee::HandleRecover(a0);
    if (v4)
        return v4;
    v5 = CPlayerMelee::CheckForObsticales(a0);
    if (v5)
        return v5;
    CPlayerMelee::ApplyVelocity(a0);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)-((*(float *)(*(unsigned int *)&a0 + 8) - *(float *)(*(unsigned int *)&a0 + 12)) / (*(float *)(*(unsigned int *)&a0 + 4) - *(float *)(*(unsigned int *)&a0 + 12)) * 100.0);
    return CPlayerMelee::UpdateStruggleBar(a0, v0);
}

