// ShouldManageEnemies__10CBlockTask @0x1864e0 size=23
typedef struct st_5864e0_0 {
    char padding_0[2588];
    unsigned int field_a1c;
} st_5864e0_0;

typedef struct st_5864e0_1 {
    char padding_0[8];
    struct st_5864e0_0 *field_8;
} st_5864e0_1;

int ShouldManageEnemies__10CBlockTask(st_5864e0_1 *a0)
{
    return _INSERT(a0->field_8, 0, a0->field_8->field_a1c == 3);
}

