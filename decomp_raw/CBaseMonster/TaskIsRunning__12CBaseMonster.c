// TaskIsRunning__12CBaseMonster @0xd7aa0 size=38
typedef struct st_4d7aa0_0 {
    char padding_0[392];
    unsigned int field_188;
} st_4d7aa0_0;

unsigned int TaskIsRunning__12CBaseMonster(st_4d7aa0_0 *a0)
{
    if (a0->field_188 != 4 && a0->field_188 != 2)
        return 1;
    return 0;
}

