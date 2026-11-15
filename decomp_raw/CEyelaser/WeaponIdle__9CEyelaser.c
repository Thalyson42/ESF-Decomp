// WeaponIdle__9CEyelaser @0xbc7d0 size=139
void WeaponIdle__9CEyelaser(float idx)
{
    double v1;  // mm7
    double v2;  // mm0

    if (*(int *)(*(unsigned int *)&idx + 0xcc))
    {
        sub_48d7d0(idx, *(int *)(*(unsigned int *)&idx + 196));
        sub_48d7d0(idx, *(int *)(*(unsigned int *)&idx + 200));
        *(unsigned int *)(*(unsigned int *)&idx + 0xcc) = 0;
        sub_488640();
        v1 = (double)*(int *)(*(unsigned int *)&idx + 208);
        *(float *)(*(unsigned int *)&idx + 156) = (float)(v2 + (v1 + v1) / 5.0);
        *(unsigned int *)(*(unsigned int *)&idx + 208) = 0;
    }
    if (*(char *)(*(unsigned int *)&idx + 212))
        *(char *)(*(unsigned int *)&idx + 212) = 0;
    return;
}

