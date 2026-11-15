// MakerThink__13CMonsterMaker @0xd39b0 size=59
typedef struct st_4d39b0_0 {
    float field_0;
} st_4d39b0_0;

extern st_4d39b0_0 *gpGlobals;

int MakerThink__13CMonsterMaker(float a0)
{
    *(float *)(*(int *)a0 + 260) = *(float *)gpGlobals + *(float *)(*(unsigned int *)&a0 + 100);
    return CMonsterMaker::MakeMonster(a0);
}

