// CheckStunTime__12CPlayerMelee @0x108360 size=140
typedef struct st_508360_0 {
    float field_0;
} st_508360_0;

extern st_508360_0 *gpGlobals;

unsigned int CheckStunTime__12CPlayerMelee(float idx)
{
    int v0;  // [bp-0x38]

    if (*(int *)(*(unsigned int *)&idx + 220) && *(float *)(*(unsigned int *)&idx + 0x88) < *(float *)gpGlobals)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 220) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 0x88) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 224) = 0;
        if (*(int *)(*(unsigned int *)&idx + 316))
            *(unsigned short *)&v0 = 1;
    }
    return sub_48b670(idx, v0, *(float *)gpGlobals, 1, "ref_stance");
}

