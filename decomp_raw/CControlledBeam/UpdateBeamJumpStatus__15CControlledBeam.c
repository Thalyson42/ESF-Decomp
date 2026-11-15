// UpdateBeamJumpStatus__15CControlledBeam @0xa7ab0 size=258
unsigned int UpdateBeamJumpStatus__15CControlledBeam(float a0)
{
    double v4;  // mm7
    unsigned int v5;  // eax
    unsigned short v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0xa]
    int v2;  // [bp-0x8]

    if (!(*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 388))(a0))
    {
        return v5;
    }
    else if (*(char *)(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 384) & 2)
    {
        if (!*(int *)(*(unsigned int *)&a0 + 516))
            CControlledBeam::EnableBeamJump(a0);
        if (*(int *)(*(unsigned int *)&a0 + 520))
        {
            UTIL_WeaponTimeBase();
            if (v4 <= *(float *)(*(unsigned int *)&a0 + 164))
                return v5;
            v1 = __fnstcw();
            v0 = v1 | 0xc00;
            v2 = (int)((double)*(int *)(*(unsigned int *)&a0 + 228) * 0.33);
            if (CBasePlayer::UseKi(*(int *)(*(unsigned int *)&a0 + 128), v2))
                return v5;
            v5 = CControlledBeam::DisableBeamJump(a0);
            return v5;
        }
        else if (!*(int *)(*(int *)(*(unsigned int *)&a0 + 200) + 716))
        {
            return v5;
        }
        else if (!*(int *)(*(unsigned int *)&a0 + 520))
        {
            CControlledBeam::StartBeamJump(a0);
            return v5;
        }
        else
        {
            return v5;
        }
    }
    else
    {
        if (!*(int *)(*(unsigned int *)&a0 + 516))
            return v5;
        CControlledBeam::DisableBeamJump(a0);
        return v5;
    }
}

