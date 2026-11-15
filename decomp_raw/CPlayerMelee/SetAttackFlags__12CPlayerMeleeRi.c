// SetAttackFlags__12CPlayerMeleeRi @0x105ba0 size=65
typedef struct st_505ba0_1 {
    char padding_0[292];
    struct st_505ba0_2 *field_124;
} st_505ba0_1;

typedef struct st_505ba0_0 {
    char padding_0[384];
    char field_180;
    char field_181;
} st_505ba0_0;

typedef struct st_505ba0_2 {
    struct st_505ba0_0 *field_0;
} st_505ba0_2;

unsigned int SetAttackFlags__12CPlayerMeleeRi(st_505ba0_1 *a0, char *a1)
{
    if (*(char *)(*(int *)a0->field_124 + 385) & 8)
    {
        a1[1] = a1[1] | 8;
    }
    else
    {
        if (!(*(char *)(*(int *)a0->field_124 + 384) & 1))
            return 0;
        *a1 = *a1 | 1;
    }
    return 1;
}

