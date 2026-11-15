// Holster__15CControlledBeami @0xa7500 size=312
int Holster__15CControlledBeami(float idx)
{
    if (*(int *)(*(unsigned int *)&idx + 196) == 2)
    {
        sub_4888d0(idx);
    }
    else if (*(int *)(*(unsigned int *)&idx + 196) == 1)
    {
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 372))(idx);
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        sub_48c680(*(int *)(*(unsigned int *)&idx + 128), 0);
    }
    else
    {
        return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 380))(idx);
    }
    return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 380))(idx);
}

