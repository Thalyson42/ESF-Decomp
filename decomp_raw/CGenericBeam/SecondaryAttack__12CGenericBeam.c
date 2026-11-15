// SecondaryAttack__12CGenericBeam @0xc6060 size=99
double SecondaryAttack__12CGenericBeam(float idx)
{
    double v2;  // mm0
    double v3;  // mm0
    double v4;  // mm7
    float v0;  // [bp-0x8]

    if (*(int *)(*(unsigned int *)&idx + 196) == 2)
    {
        sub_489cf0(idx);
        return v4;
    }
    *(char *)(*(unsigned int *)&idx + 528) = 1;
    sub_48a630(idx);
    sub_488640(idx);
    v0 = (float)(v2 + 0.2);
    v3 = v0;
    *(float *)(*(unsigned int *)&idx + 160) = (float)v3;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v3;
    return 0.2;
}

