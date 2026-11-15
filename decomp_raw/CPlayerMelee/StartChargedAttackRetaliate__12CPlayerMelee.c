// StartChargedAttackRetaliate__12CPlayerMelee @0x109c50 size=163
typedef struct st_509c50_1 {
    char padding_0[300];
    int field_12c;
    struct st_509c50_0 *field_130;
    char padding_134[24];
    int field_14c;
} st_509c50_1;

typedef struct st_509c50_0 {
    char padding_0[376];
    int field_178;
} st_509c50_0;

void StartChargedAttackRetaliate__12CPlayerMelee(double a0, double a1, st_509c50_1 *a2)
{
    int v0;  // 128

    sub_48caa0(a2);
    sub_48b7e0(a2, a2->field_12c);
    sub_487b30(a2);
    sub_48c900(a2, a2->field_130->field_178, a2->field_14c, v0);
    sub_48b280(a2->field_130, v0);
    sub_48b280(a2, 0);
    sub_48b4c0(a2);
    sub_48c6e0(a2, v0);
    return;
}

