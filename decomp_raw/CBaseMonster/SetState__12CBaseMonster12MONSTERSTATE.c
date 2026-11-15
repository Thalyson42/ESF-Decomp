// SetState__12CBaseMonster12MONSTERSTATE @0xdac30 size=116
typedef struct st_4dac30_0 {
    char padding_0[264];
    char field_108;
    char padding_109[119];
    unsigned int field_180;
    unsigned int field_184;
} st_4dac30_0;

typedef struct st_4dac30_1 {
    unsigned int field_0;
} st_4dac30_1;

extern st_4dac30_1 *g_6168b4;

st_4dac30_0 * SetState__12CBaseMonster12MONSTERSTATE(st_4dac30_0 *a0, unsigned int a1)
{
    unsigned int *v0;  // esi

    if (a1 == 1)
    {
        v0 = &a0->field_108;
        if (sub_48d8b0(v0))
        {
            sub_48d960(v0, 0);
            g_6168b4(2, "Stripped\n");
        }
    }
    a0->field_180 = a1;
    a0->field_184 = a1;
    return a0;
}

