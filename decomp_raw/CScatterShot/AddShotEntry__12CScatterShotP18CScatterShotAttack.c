// AddShotEntry__12CScatterShotP18CScatterShotAttack @0x111400 size=35
typedef struct st_511400_0 {
    char padding_0[228];
    unsigned int field_e4;
} st_511400_0;

st_511400_0 * AddShotEntry__12CScatterShotP18CScatterShotAttack(st_511400_0 *a0, unsigned int a1)
{
    *(unsigned int *)&a0->padding_0[196 + 4 * a0->field_e4] = a1;
    a0->field_e4 = a0->field_e4 + 1;
    return a0;
}

