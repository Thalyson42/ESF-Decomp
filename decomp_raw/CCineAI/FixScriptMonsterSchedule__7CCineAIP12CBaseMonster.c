// FixScriptMonsterSchedule__7CCineAIP12CBaseMonster @0x1157b0 size=140
typedef struct st_5157b0_1 {
    char padding_0[340];
    struct st_5157b0_2 *field_154;
} st_5157b0_1;

typedef struct st_5157b0_2 {
    unsigned int field_0;
} st_5157b0_2;

typedef struct st_5157b0_0 {
    char padding_0[696];
    unsigned int field_2b8;
} st_5157b0_0;

typedef struct st_5157b0_3 {
    char padding_0[96];
    struct st_5157b0_1 *field_60;
} st_5157b0_3;

extern st_5157b0_2 *g_6168b4;

int FixScriptMonsterSchedule__7CCineAIP12CBaseMonster(st_5157b0_0 *a0, st_5157b0_3 *a1)
{
    if (!a0->field_2b8)
    {
        return sub_489f60(a1);
    }
    else if (a0->field_2b8 == 1)
    {
        return sub_48b250(a1, a1->field_60->field_154(a1, 32));
    }
    else
    {
        g_6168b4(2, "FixScriptMonsterSchedule - no case!\n");
        return sub_489f60(a1);
    }
}

