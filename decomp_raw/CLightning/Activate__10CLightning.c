// Activate__10CLightning @0xb05b0 size=77
unsigned int Activate__10CLightning(float a0)
{
    unsigned int v1;  // ecx

    v1 = 0;
    if (*(float *)(*(unsigned int *)&a0 + 112) == 0.0f)
        v1 = !(*(char *)(*(int *)a0 + 416) & 8);
    return CLightning::BeamUpdateVars(a0);
}

