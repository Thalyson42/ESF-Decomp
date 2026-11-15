// ChangeSchedule__12CBaseMonsterP10Schedule_t @0x111d30 size=169
typedef struct st_511d30_0 {
    char padding_0[10];
    char field_a;
    char padding_b[1];
    unsigned int field_c;
} st_511d30_0;

typedef struct st_511d30_1 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[128];
    unsigned int field_188;
    struct st_511d30_0 *field_18c;
    unsigned int field_190;
    char padding_194[232];
    unsigned int field_27c;
} st_511d30_1;

typedef struct st_511d30_2 {
    unsigned int field_0;
} st_511d30_2;

extern st_511d30_2 *g_6168b4;

st_511d30_0 * ChangeSchedule__12CBaseMonsterP10Schedule_t(st_511d30_1 *a0, st_511d30_0 *a1)
{
    a0->field_18c = a1;
    a0->field_190 = 0;
    a0->field_188 = 0;
    a0->field_104 = 0;
    a0->field_27c = 0;
    if (a1->field_a & 2)
    {
        if (!a1->field_c)
            return g_6168b4(2, "COND_HEAR_SOUND with no sound mask!\n");
    }
    else
    {
        if (!a0->field_18c->field_c)
            return a0->field_18c;
    }
    if (a0->field_18c->field_a & 2)
        return a0->field_18c;
    return g_6168b4(2, "Sound mask without COND_HEAR_SOUND!\n");
}

