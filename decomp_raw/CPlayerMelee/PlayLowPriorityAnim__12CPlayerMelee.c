// PlayLowPriorityAnim__12CPlayerMelee @0xffeb0 size=124
typedef struct st_4ffeb0_2 {
    char padding_0[292];
    struct st_4ffeb0_1 *field_124;
} st_4ffeb0_2;

typedef struct st_4ffeb0_0 {
    char padding_0[420];
    unsigned int field_1a4;
} st_4ffeb0_0;

typedef struct st_4ffeb0_1 {
    struct st_4ffeb0_0 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[12];
    unsigned int field_330;
} st_4ffeb0_1;

unsigned int PlayLowPriorityAnim__12CPlayerMelee(st_4ffeb0_2 *a0)
{
    unsigned int v0;  // [bp-0x8]

    v0 = sub_487fb0(a0);
    if (sub_48b3f0(a0) && !a0->field_124->field_330 && !a0->field_124->field_320 && *(int *)(v0 + 672) == (a0->field_124->field_0->field_1a4 & 0x200))
        return 1;
    return 0;
}

