// ItemPostFrame__11CBasePlayer @0xfd2e0 size=128
typedef struct st_4fd2e0_0 {
    float field_0;
} st_4fd2e0_0;

extern st_4fd2e0_0 *gpGlobals;

unsigned int ItemPostFrame__11CBasePlayer(float a0)
{
    unsigned int v1;  // eax

    if (sub_48d8b0(*(unsigned int *)&a0 + 2316))
    {
        return v1;
    }
    else if (*(float *)gpGlobals >= *(float *)(*(unsigned int *)&a0 + 612))
    {
        (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 520))(a0);
        if (!*(int *)(*(unsigned int *)&a0 + 2408))
            return v1;
        v1 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 2408) + 96) + 272))(*(int *)(*(unsigned int *)&a0 + 2408));
        return v1;
    }
    else
    {
        return v1;
    }
}

