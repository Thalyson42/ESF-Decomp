// GetLowerBodyAnimation__11CBasePlayer @0xf53f0 size=753
typedef struct st_4f53f0_0 {
    float field_0;
} st_4f53f0_0;

extern st_4f53f0_0 *gpGlobals;

unsigned int GetLowerBodyAnimation__11CBasePlayer(float idx)
{
    double v6;  // mm7
    double v7;  // mm6
    int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v0;  // [bp-0x78]
    double v1;  // [bp-0x4c]
    double v2;  // [bp-0x44]
    float v3;  // [bp-0x3c]
    int v4;  // [bp-0x38]

    v6 = *(float *)(*(int *)idx + 32) * *(float *)(*(int *)idx + 32) + *(float *)(*(int *)idx + 36) * *(float *)(*(int *)idx + 36);
    v7 = sqrt(v6);
    if (isnan(v7))
        sqrt(*(unsigned int *)&v6);
    else
        v6 = v7;
    v3 = (float)v6;
    if (*(int *)(*(unsigned int *)&idx + 800))
    {
        v8 = (!(*(char *)(*(int *)idx + 384) & 16) ? (!(*(char *)(*(int *)idx + 384) & 8) ? "fly_idle" : "fly_forward") : "fly_backward");
        goto LABEL_4f56b2;
    }
    if (*(int *)(*(int *)idx + 448) > 1)
    {
        v2 = v3;
        v4 = CBasePlayer::GetMaxSpeed(idx);
        if ((double)v4 / 1.6 >= v2)
        {
            v0 = 50;
            goto LABEL_4f5558;
        }
        else if (*(char *)(*(int *)idx + 384) & 16)
        {
            v8 = "swim_backwards";
            goto LABEL_4f56b2;
        }
        else
        {
            v0 = 6;
            goto LABEL_4f5558;
        }
    }
    if (!(*(char *)(*(int *)idx + 421) & 2))
    {
        if (0.0 > *(float *)(*(int *)idx + 40))
        {
            v8 = "fly_fall";
            goto LABEL_4f56b2;
        }
        else if (*(int *)(*(unsigned int *)&idx + 1912) == 2)
        {
            v0 = 8;
            goto LABEL_4f5558;
        }
        else if (*(int *)(*(unsigned int *)&idx + 1912) == 3)
        {
            v8 = "back_flip";
            goto LABEL_4f56b2;
        }
        else
        {
            if (*(int *)(*(unsigned int *)&idx + 1912) != 1)
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 7;
            v0 = 7;
LABEL_4f5558:
            v9 = CBaseAnimating::LookupActivity(idx);
            goto LABEL_4f56d0;
        }
    }
    v1 = v3;
    v4 = CBasePlayer::GetMaxSpeed(idx);
    if ((double)v4 / 1.3 < v1 || *(int *)(*(unsigned int *)&idx + 804) && 0.0 < v3)
    {
        if (*(char *)(*(int *)idx + 384) & 16)
        {
LABEL_4f55f4:
            v8 = "run_backward";
            goto LABEL_4f56b2;
        }
        else if (*(int *)(*(unsigned int *)&idx + 804) && *(int *)(*(int *)idx + 384) & 1544)
        {
            v8 = "turbo_run";
            goto LABEL_4f56b2;
        }
        else
        {
            if (!CBasePlayer::CanPlayForwardWalk(idx))
                goto LABEL_4f55f4;
            v8 = "run";
            goto LABEL_4f56b2;
        }
    }
    if (0.0 >= v3)
    {
        v10 = CBaseAnimating::LookupSequence(idx, "idle");
        if (*(int *)(*(int *)idx + 296) != v10)
        {
            v11 = CBaseAnimating::LookupSequence(idx, "deep_idle");
            if (*(int *)(*(int *)idx + 296) != v11)
                *(float *)(*(unsigned int *)&idx + 1420) = *(float *)gpGlobals;
        }
        if (*(float *)gpGlobals - 5.0 > *(float *)(*(unsigned int *)&idx + 1420))
        {
            v8 = "deep_idle";
LABEL_4f56b2:
            v9 = CBaseAnimating::LookupSequence(idx, v8);
        }
        else
        {
            v9 = CBaseAnimating::LookupSequence(idx, "idle");
        }
    }
    else if (!(*(char *)(*(int *)idx + 384) & 16) && CBasePlayer::CanPlayForwardWalk(idx))
    {
        v8 = "walk2handed";
        goto LABEL_4f56b2;
    }
    else
    {
        v8 = "walk_backward";
        goto LABEL_4f56b2;
    }
LABEL_4f56d0:
    if (v9 == 0xffffffff)
        v9 = 0;
    return v9;
}

