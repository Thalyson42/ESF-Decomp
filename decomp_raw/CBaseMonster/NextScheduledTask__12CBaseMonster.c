// NextScheduledTask__12CBaseMonster @0x111de0 size=68
typedef struct st_511de0_0 {
    char padding_0[263];
    char field_107;
    char padding_108[128];
    unsigned int field_188;
    char padding_18c[4];
    unsigned int field_190;
} st_511de0_0;

void NextScheduledTask__12CBaseMonster(st_511de0_0 *a0)
{
    a0->field_188 = 0;
    a0->field_190 = a0->field_190 + 1;
    if (CBaseMonster::FScheduleDone(a0))
        a0->field_107 = a0->field_107 | 128;
    return;
}

