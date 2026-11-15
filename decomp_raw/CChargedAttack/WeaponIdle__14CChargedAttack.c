// WeaponIdle__14CChargedAttack @0x9ed30 size=59
typedef struct st_49ed30_3 {
    char padding_0[96];
    struct st_49ed30_1 *field_60;
    char padding_64[28];
    struct st_49ed30_0 *field_80;
} st_49ed30_3;

typedef struct st_49ed30_1 {
    char padding_0[348];
    struct st_49ed30_2 *field_15c;
} st_49ed30_1;

typedef struct st_49ed30_2 {
    unsigned int field_0;
} st_49ed30_2;

typedef struct st_49ed30_0 {
    char padding_0[820];
    unsigned int field_334;
} st_49ed30_0;

st_49ed30_0 * WeaponIdle__14CChargedAttack(st_49ed30_3 *a0)
{
    st_49ed30_0 *v0;  // eax

    v0 = a0->field_80;
    if (a0->field_80->field_334)
        v0 = a0->field_60->field_15c(a0);
    return v0;
}

