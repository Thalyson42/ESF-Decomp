// WeaponIdle__13CRegeneration @0x10ddf0 size=123
typedef struct st_50ddf0_2 {
    char padding_0[128];
    struct st_50ddf0_1 *field_80;
} st_50ddf0_2;

typedef struct st_50ddf0_1 {
    struct st_50ddf0_0 *field_0;
    char padding_4[816];
    unsigned int field_334;
    char padding_338[1052];
    unsigned int field_754;
} st_50ddf0_1;

typedef struct st_50ddf0_0 {
    char padding_0[520];
    int field_208;
} st_50ddf0_0;

st_50ddf0_1 * WeaponIdle__13CRegeneration(st_50ddf0_2 *a0)
{
    st_50ddf0_1 *v0;  // eax

    v0 = a0->field_80;
    if (v0->field_334)
    {
        v0->field_334 = 0;
        a0->field_80->field_754 = 0x3f800000;
        v0 = EMIT_SOUND_DYN(a0->field_80->field_0->field_208, 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    return v0;
}

