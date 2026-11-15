// Spectator_HandleButtons__11CBasePlayer @0xeff70 size=322
typedef struct st_4eff70_0 {
    float field_0;
} st_4eff70_0;

extern st_4eff70_0 *gpGlobals;

unsigned int * Spectator_HandleButtons__11CBasePlayer(float idx)
{
    int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x38]

    if (*(float *)(*(unsigned int *)&idx + 1936) > *(float *)gpGlobals)
        return gpGlobals;
    if (*(char *)(*(unsigned int *)&idx + 712) & 2)
    {
        v0 = (*(int *)(*(int *)idx + 580) == 1 ? 2 : *(int *)(*(int *)idx + 580) == 2 ? 3 : *(int *)(*(int *)idx + 580) == 3 ? 4 : *(int *)(*(int *)idx + 580) == 4 ? 5 : *(int *)(*(int *)idx + 580) == 5 ? 6 : 1);
        v1 = (*(int *)(*(int *)idx + 580) == 1 ? 2 : *(int *)(*(int *)idx + 580) == 2 ? 3 : *(int *)(*(int *)idx + 580) == 3 ? 4 : *(int *)(*(int *)idx + 580) == 4 ? 5 : *(int *)(*(int *)idx + 580) == 5 ? 6 : 1);
        sub_48dce0(idx);
        *(float *)(*(unsigned int *)&idx + 1936) = (float)(0.2 + *(float *)gpGlobals);
    }
    if (*(char *)(*(unsigned int *)&idx + 712) & 1 && *(int *)(*(int *)idx + 580) != 3)
    {
        *(unsigned short *)&v0 = 0;
        sub_4898a0(idx, v0);
        *(float *)(*(unsigned int *)&idx + 1936) = (float)(0.2 + *(float *)gpGlobals);
    }
    if (*(char *)(*(unsigned int *)&idx + 713) & 8 && *(int *)(*(int *)idx + 580) != 3)
    {
        *(unsigned short *)&v0 = 1;
        sub_4898a0(idx, v0);
        *(float *)(*(unsigned int *)&idx + 1936) = (float)(0.2 + *(float *)gpGlobals);
    }
    return gpGlobals;
}

