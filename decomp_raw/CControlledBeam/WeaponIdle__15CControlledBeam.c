// WeaponIdle__15CControlledBeam @0xa7d80 size=573
typedef struct st_4a7d80_0 {
    unsigned int field_0;
} st_4a7d80_0;

extern unsigned int gmsgPowerStruggle;
extern st_4a7d80_0 *g_engfuncs.pfnMessageBegin;
extern st_4a7d80_0 *g_engfuncs.pfnMessageEnd;
extern st_4a7d80_0 *g_engfuncs.pfnWriteChar;

double WeaponIdle__15CControlledBeam(float idx)
{
    double v5;  // mm7
    double v6;  // mm7
    unsigned int *v7;  // edx
    double v8;  // mm0
    int v0;  // [bp-0x4c]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    if (*(int *)(*(unsigned int *)&idx + 196) == 1 && !CControlledBeam::CheckWallJump(idx))
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 384))(idx);
    if (*(int *)(*(unsigned int *)&idx + 196) == 2)
    {
        if (!*(int *)(*(unsigned int *)&idx + 200))
        {
            CControlledBeam::StopAiming(idx);
            goto LABEL_4a7f8b;
        }
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 708) || *(int *)(*(int *)(*(unsigned int *)&idx + 200) + 732))
        {
            CControlledBeam::StopAiming(idx);
            v7 = *(int *)(*(unsigned int *)&idx + 200);
            if (v7[177])
                (*(int *)(v7[24] + 508))(v7);
            *(unsigned int **)(*(unsigned int *)&idx + 200) = NULL;
        }
        else
        {
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 684))
            {
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 852) = 1;
                *(int *)(*(int *)(*(unsigned int *)&idx + 128) + 876) = *(int *)(*(int *)(*(unsigned int *)&idx + 200) + 704);
                goto LABEL_4a7e93;
            }
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 688))
            {
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 860) = 1;
LABEL_4a7e93:
                UTIL_WeaponTimeBase();
                if (v5 <= *(float *)(*(unsigned int *)&idx + 164))
                    goto LABEL_4a7f8e;
                g_engfuncs.pfnMessageBegin(1, gmsgPowerStruggle, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520));
                v6 = *(float *)(*(int *)(*(unsigned int *)&idx + 200) + 696) * 100.0;
                v3 = __fnstcw();
                v2 = v3 | 0xc00;
                v1 = (int)v6;
                v0 = v1;
                g_engfuncs.pfnWriteChar(v0);
                g_engfuncs.pfnMessageEnd(v0);
                goto LABEL_4a7f8b;
            }
            else
            {
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 852) = 0;
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 876) = 0;
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 860) = 0;
                CControlledBeam::UpdateBeamJumpStatus(idx);
                if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 892))
                {
                    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 96) + 520))(*(int *)(*(unsigned int *)&idx + 200));
LABEL_4a7f8b:
                }
            }
        }
    }
LABEL_4a7f8e:
    UTIL_WeaponTimeBase();
    if (v6 <= *(float *)(*(unsigned int *)&idx + 164))
        return v6;
    UTIL_WeaponTimeBase();
    *(float *)(*(unsigned int *)&idx + 164) = (float)(v8 + 0.2);
    return 0.2;
}

