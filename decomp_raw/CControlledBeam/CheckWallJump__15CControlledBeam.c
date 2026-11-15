// CheckWallJump__15CControlledBeam @0xa7980 size=290
unsigned int CheckWallJump__15CControlledBeam(float idx)
{
    if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 1736))
    {
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 372))(idx);
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        sub_48c680(*(int *)(*(unsigned int *)&idx + 128), 0);
        return 1;
    }
    return 0;
}

