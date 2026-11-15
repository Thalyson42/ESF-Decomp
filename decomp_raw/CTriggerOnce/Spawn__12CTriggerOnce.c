// Spawn__12CTriggerOnce @0x12cdf0 size=50
int Spawn__12CTriggerOnce(float a0)
{
    *(float *)(*(unsigned int *)&a0 + 140) = -1.0f;
    return CTriggerMultiple::Spawn(a0);
}

