// MonsterInitDead__12CBaseMonster @0xd9eb0 size=223
typedef struct st_4d9eb0_0 {
    float field_0;
} st_4d9eb0_0;

extern char CorpseFallThink__12CBaseMonster;
extern int g_vecZero;
extern st_4d9eb0_0 *gpGlobals;

short MonsterInitDead__12CBaseMonster(float idx)
{
    sub_48a1b0(idx);
    *(unsigned int *)(*(int *)idx + 268) = 2;
    *(unsigned int *)(*(int *)idx + 264) = 6;
    *(unsigned int *)(*(int *)idx + 304) = 0;
    sub_488850(idx);
    *(unsigned int *)(*(int *)idx + 312) = 0;
    *(float *)(*(int *)idx + 432) = *(float *)(*(int *)idx + 352);
    *(unsigned int *)(*(int *)idx + 368) = 2;
    sub_48a0d0(*(int *)idx, &g_vecZero, &g_vecZero);
    sub_48db50(*(int *)idx, *(int *)idx + 8);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 268))(idx), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &CorpseFallThink__12CBaseMonster;
    *(float *)(*(int *)idx + 260) = (float)(0.5 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

