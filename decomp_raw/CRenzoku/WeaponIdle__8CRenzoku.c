// WeaponIdle__8CRenzoku @0x10e7a0 size=191
double WeaponIdle__8CRenzoku(float idx)
{
    double v3;  // mm7
    double v4;  // mm0
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) || *(int *)(*(unsigned int *)&idx + 468) > 0)
    {
        sub_488640(v0, v1);
        if (v3 <= *(float *)(*(unsigned int *)&idx + 164))
            return v3;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 348))(idx);
    }
    else if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 828))
    {
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    sub_488640();
    *(float *)(*(unsigned int *)&idx + 164) = (float)(v4 + 0.1);
    return 0.1;
}

