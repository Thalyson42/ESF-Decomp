// GetBestEnemyFromList__4CBot @0x154230 size=95
typedef struct st_554230_0 {
    float field_0;
} st_554230_0;

extern st_554230_0 *gpGlobals;

unsigned int GetBestEnemyFromList__4CBot(float a0)
{
    sub_4882b0(a0);
    if (*(int *)(*(unsigned int *)&a0 + 2888))
    {
        sub_48b720(a0, *(int *)(*(unsigned int *)&a0 + 2888));
        *(float *)(*(unsigned int *)&a0 + 2880) = *(float *)gpGlobals;
        return *(int *)(*(unsigned int *)&a0 + 2888);
    }
    return 0;
}

