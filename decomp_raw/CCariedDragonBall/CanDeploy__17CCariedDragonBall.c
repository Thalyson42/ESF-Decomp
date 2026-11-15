// CanDeploy__17CCariedDragonBall @0xaebd0 size=34
typedef struct st_4aebd0_1 {
    char padding_0[128];
    struct st_4aebd0_0 *field_80;
} st_4aebd0_1;

typedef struct st_4aebd0_0 {
    char padding_0[1888];
    unsigned int field_760;
} st_4aebd0_0;

int CanDeploy__17CCariedDragonBall(st_4aebd0_1 *a0)
{
    return a0->field_80->field_760 - 1 <= 6;
}

