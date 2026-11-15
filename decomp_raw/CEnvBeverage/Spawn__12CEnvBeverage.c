// Spawn__12CEnvBeverage @0xb6b00 size=114
int Spawn__12CEnvBeverage(float a0)
{
    unsigned int *v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    *(unsigned int *)(*(int *)a0 + 268) = 0;
    *(unsigned int *)(*(int *)a0 + 280) = 128;
    v1 = *(int *)a0;
    v1[89] = 0;
    v2 = _INSERT(v1, 0, 0);
    v3 = _INSERT(v2, 1, (isnan(*(float *)(*(int *)a0 + 352)) ? 4 : 0.0 == *(float *)(*(int *)a0 + 352) ? 0 : 64));
    if (*(float *)(*(int *)a0 + 352) == 0.0f)
        *(float *)(*(int *)a0 + 352) = 10.0f;
    return v3;
}

