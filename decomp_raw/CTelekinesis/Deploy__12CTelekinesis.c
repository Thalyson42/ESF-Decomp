// Deploy__12CTelekinesis @0x129ec0 size=67
int Deploy__12CTelekinesis(float idx)
{
    *(unsigned int *)(*(unsigned int *)&idx + 492) = 0;
    *(float *)(*(unsigned int *)&idx + 508) = 100.0f;
    *(char *)(*(unsigned int *)&idx + 516) = 0;
    return CChargedAttack::Deploy(idx);
}

