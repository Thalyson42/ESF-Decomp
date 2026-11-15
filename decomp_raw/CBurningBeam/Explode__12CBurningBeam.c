// Explode__12CBurningBeam @0x94bf0 size=149
int Explode__12CBurningBeam(float a0)
{
    unsigned int v4;  // ecx
    unsigned int *v5;  // eax
    unsigned int *v6;  // edx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (*(int *)(*(int *)a0 + 408) && *(int *)(*(int *)a0 + 408))
        v4 = *(int *)(*(int *)a0 + 408) + 128;
    else
        v4 = 0;
    v5 = *(int *)a0;
    v6 = v5 + 2;
    *(float *)&v0 = *(float *)&v5[2];
    *(float *)&v1 = *(float *)&v6[1];
    *(float *)&v2 = *(float *)&v6[2];
    RadiusDamage(&v0, v5, v4, *(float *)&v5[120], (float)(*(float *)&v5[120] * 5.0), 0, 0x1000000);
    return CExplodingAttack::Explode(a0);
}

