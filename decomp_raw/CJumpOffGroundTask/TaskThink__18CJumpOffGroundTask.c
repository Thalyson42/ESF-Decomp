// TaskThink__18CJumpOffGroundTask @0x1857b0 size=98
typedef struct st_5857b0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5857b0_2 *field_8;
    struct st_5857b0_0 *field_c;
    char padding_10[8];
    int field_18;
} st_5857b0_1;

typedef struct st_5857b0_0 {
    char padding_0[512];
    char field_200;
} st_5857b0_0;

typedef struct st_5857b0_2 {
    char padding_0[892];
    unsigned int field_37c;
    char padding_380[100];
    unsigned int field_3e4;
} st_5857b0_2;

unsigned int * TaskThink__18CJumpOffGroundTask(st_5857b0_1 *a0)
{
    unsigned int *v0;  // eax

    a0->field_c->field_200 = a0->field_c->field_200 | 2;
    sub_48d0d0(a0->field_8);
    sub_488e30(a0->field_8, a0->field_18);
    v0 = a0->field_8;
    if (v0[249] == 5 && v0[223])
        return v0;
    a0->field_4 = 2;
    return v0;
}

