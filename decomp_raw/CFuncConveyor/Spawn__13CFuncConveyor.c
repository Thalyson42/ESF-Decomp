// Spawn__13CFuncConveyor @0x91280 size=166
int Spawn__13CFuncConveyor(float a0)
{
    unsigned int *v1;  // edx

    SetMovedir(*(int *)a0);
    CFuncWall::Spawn(a0);
    v1 = *(int *)a0;
    if (!((char)v1[104] & 1))
        *(char *)&v1[105] = (char)v1[105] | 4;
    if (*(char *)(*(int *)a0 + 416) & 2)
    {
        *(unsigned int *)(*(int *)a0 + 268) = 0;
        *(unsigned int *)(*(int *)a0 + 272) = 0;
    }
    if (*(float *)(*(int *)a0 + 504) == 0.0f)
        *(float *)(*(int *)a0 + 504) = 100.0f;
    return CFuncConveyor::UpdateSpeed(a0, *(float *)(*(int *)a0 + 504));
}

