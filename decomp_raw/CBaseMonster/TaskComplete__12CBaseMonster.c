// TaskComplete__12CBaseMonster @0xda830 size=60
typedef struct st_4da830_0 {
    char padding_0[392];
    unsigned int field_188;
} st_4da830_0;

void TaskComplete__12CBaseMonster(st_4da830_0 *a0)
{
    if (!CBaseMonster::HasConditions(a0, 0x40000000))
        a0->field_188 = 4;
    return;
}

