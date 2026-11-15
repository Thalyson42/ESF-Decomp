// CorpseFallThink__12CBaseMonster @0xd9e30 size=113
typedef struct st_4d9e30_0 {
    float field_0;
} st_4d9e30_0;

extern st_4d9e30_0 *gpGlobals;

unsigned int * CorpseFallThink__12CBaseMonster(float idx)
{
    if (!(*(char *)(*(int *)idx + 421) & 2))
    {
        *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)gpGlobals);
        return gpGlobals;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    sub_488bf0(idx);
    return sub_48db50(*(int *)idx, *(int *)idx + 8);
}

