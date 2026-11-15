// CanLetGo__12CPlayerMeleeP12melee_move_s @0x105e90 size=91
typedef struct st_505e90_0 {
    char padding_0[12];
    struct st_505e90_1 *field_c;
} st_505e90_0;

typedef struct st_505e90_2 {
    char padding_0[384];
    struct st_505e90_0 *field_180;
} st_505e90_2;

typedef struct st_505e90_1 {
    unsigned int field_0;
} st_505e90_1;

unsigned int CanLetGo__12CPlayerMeleeP12melee_move_s(double a0, st_505e90_2 *a1, int a2)
{
    double v0;  // mm7

    sub_48b4e0(a1, a2);
    return (float)v0 >= *(float *)a1->field_180->field_c(a1);
}

