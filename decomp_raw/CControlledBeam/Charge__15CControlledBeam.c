// Charge__15CControlledBeam @0xa8480 size=345
int Charge__15CControlledBeam(float idx)
{
    if (*(int *)(*(unsigned int *)&idx + 196) == 2)
        CControlledBeam::StopAiming(idx);
    if (*(int *)(*(unsigned int *)&idx + 196) != 1)
    {
        *(float *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = *(float *)(*(unsigned int *)&idx + 240);
        *(unsigned int *)(*(unsigned int *)&idx + 196) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 1;
        *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 356))(idx);
    }
    if (*(int *)(*(unsigned int *)&idx + 216) >= *(int *)(*(unsigned int *)&idx + 220))
    {
        return *(int *)(*(unsigned int *)&idx + 216);
    }
    else if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), *(int *)(*(unsigned int *)&idx + 228)))
    {
        return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 384))(idx);
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 216) == *(int *)(*(unsigned int *)&idx + 220) / 3)
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 368))(idx);
        if (*(int *)(*(unsigned int *)&idx + 216) > *(int *)(*(unsigned int *)&idx + 220) / 3)
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 376))(idx);
        *(unsigned int *)(*(unsigned int *)&idx + 216) = *(int *)(*(unsigned int *)&idx + 216) + 1;
        return CBasePlayer::DrawChargeBar(*(int *)(*(unsigned int *)&idx + 128), *(int *)(*(unsigned int *)&idx + 216) * 100 / *(int *)(*(unsigned int *)&idx + 220));
    }
}

