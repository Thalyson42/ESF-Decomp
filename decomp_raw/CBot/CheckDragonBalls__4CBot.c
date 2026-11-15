// CheckDragonBalls__4CBot @0x169ed0 size=146
typedef struct st_569ed0_0 {
    float field_0;
} st_569ed0_0;

extern st_569ed0_0 *gpGlobals;

char CheckDragonBalls__4CBot(float a0)
{
    char v3;  // al
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    if (*(float *)(*(unsigned int *)&a0 + 2868) <= *(float *)gpGlobals)
    {
        *(float *)(*(unsigned int *)&a0 + 2868) = (float)(*(float *)gpGlobals + 0.75);
        if ((char)sub_488740(v0, v1))
        {
            v3 = sub_48bf30(a0);
            return v3;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 1888))
        {
            sub_4882d0(a0);
            return v3;
        }
        else if (!*(int *)(*(unsigned int *)&a0 + 2924))
        {
            sub_48ac20(a0);
            return v3;
        }
    }
    return v3;
}

