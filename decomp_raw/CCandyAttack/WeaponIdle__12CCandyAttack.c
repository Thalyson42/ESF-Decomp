// WeaponIdle__12CCandyAttack @0x9a9e0 size=134
typedef struct st_49a9e0_2 {
    char padding_0[128];
    struct st_49a9e0_3 *field_80;
    char padding_84[64];
    struct st_49a9e0_3 *field_c4;
    int field_c8;
    char field_cc;
} st_49a9e0_2;

typedef struct st_49a9e0_1 {
    char padding_0[280];
    char field_118;
} st_49a9e0_1;

typedef struct st_49a9e0_3 {
    struct st_49a9e0_0 *field_0;
} st_49a9e0_3;

typedef struct st_49a9e0_0 {
    char padding_0[520];
    int field_208;
} st_49a9e0_0;

st_49a9e0_1 * WeaponIdle__12CCandyAttack(st_49a9e0_2 *a0)
{
    st_49a9e0_1 *v0;  // eax

    CSprite::TurnOff(a0->field_c8);
    v0 = *(int *)a0->field_c4;
    v0->field_118 = v0->field_118 | 128;
    if (!a0->field_cc)
        return v0;
    a0->field_cc = 0;
    return EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

