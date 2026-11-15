// BarnacleVictimBitten__12CBaseMonsterP9entvars_s @0xd3c70 size=66
typedef struct st_4d3c70_0 {
    char padding_0[340];
    struct st_4d3c70_1 *field_154;
} st_4d3c70_0;

typedef struct st_4d3c70_1 {
    unsigned int field_0;
} st_4d3c70_1;

typedef struct st_4d3c70_2 {
    char padding_0[96];
    struct st_4d3c70_0 *field_60;
} st_4d3c70_2;

int BarnacleVictimBitten__12CBaseMonsterP9entvars_s(st_4d3c70_2 *a0)
{
    int v0;  // eax

    v0 = a0->field_60->field_154(a0, 39);
    if (!v0)
        return v0;
    return CBaseMonster::ChangeSchedule(a0, v0);
}

