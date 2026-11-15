// MonsterInit__12CBaseMonster @0xd7550 size=353
typedef struct st_4d7550_1 {
    unsigned int field_0;
} st_4d7550_1;

typedef struct st_4d7550_0 {
    char padding_0[232];
    struct st_4d7550_1 *field_e8;
} st_4d7550_0;

typedef struct st_4d7550_3 {
    float field_0;
} st_4d7550_3;

typedef struct st_4d7550_2 {
    char padding_0[68];
    struct st_4d7550_0 *field_44;
} st_4d7550_2;

extern char MonsterUse__12CBaseMonsterP11CBaseEntityT18USE_TYPEf;
extern char MonsterInitThink__12CBaseMonster;
extern st_4d7550_2 *g_pGameRules;
extern st_4d7550_3 *gpGlobals;

int MonsterInit__12CBaseMonster(float idx)
{
    unsigned int *v1;  // eax
    unsigned int *v2;  // eax
    unsigned int v4;  // eax

    if (!g_pGameRules->field_44->field_e8(g_pGameRules))
    {
        v1 = *(int *)idx;
        *((char *)&v1[105] + 3) = *((char *)&v1[105] + 3) | 64;
        return v1;
    }
    *(unsigned int *)(*(int *)idx + 280) = 0;
    *(float *)(*(int *)idx + 364) = 2.0f;
    *(float *)(*(int *)idx + 172) = *(float *)(*(int *)idx + 84);
    *(float *)(*(int *)idx + 432) = *(float *)(*(int *)idx + 352);
    *(unsigned int *)(*(int *)idx + 368) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 388) = 1;
    *(unsigned int *)(*(unsigned int *)&idx + 376) = 1;
    *(char *)(*(int *)idx + 420) = *(char *)(*(int *)idx + 420) | 32;
    v2 = *(int *)idx;
    if ((char)v2[104] & 4)
        *((char *)&v2[105] + 2) = *((char *)&v2[105] + 2) | 128;
    sub_489f60(idx);
    sub_48bce0(idx);
    sub_48a1b0(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 580) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 584) = 0;
    sub_48d960(*(unsigned int *)&idx + 264, 0);
    *(float *)(*(unsigned int *)&idx + 644) = 1024.0f;
    *(float *)(*(unsigned int *)&idx + 648) = 2048.0f;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(sub_4896e0(idx), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &MonsterInitThink__12CBaseMonster;
    *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)gpGlobals);
    v4 = _INSERT(gpGlobals, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 28) = v4 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 32) = &MonsterUse__12CBaseMonsterP11CBaseEntityT18USE_TYPEf;
    return v4 | 0xffff0000;
}

