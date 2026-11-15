// SecondaryAttack__15CControlledBeam @0xa8950 size=117
unsigned int SecondaryAttack__15CControlledBeam(double a0, float idx)
{
    unsigned int v4;  // eax
    double v5;  // mm0
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    float v2;  // [bp-0x8]

    if (*(int *)(*(unsigned int *)&idx + 200) && *(int *)(*(unsigned int *)&idx + 196) == 2 && !*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 684) && !*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 688))
        sub_4888d0(idx);
    v4 = sub_488640(v0, v1);
    v2 = (float)(a0 + 0.2);
    v5 = v2;
    *(float *)(*(unsigned int *)&idx + 160) = (float)v5;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v5;
    return v4;
}

