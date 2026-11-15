// GetSoundEdict__12CPlayerMelee @0xffab0 size=59
typedef struct st_4ffab0_1 {
    char padding_0[292];
    struct st_4ffab0_2 *field_124;
} st_4ffab0_1;

typedef struct st_4ffab0_2 {
    struct st_4ffab0_0 *field_0;
} st_4ffab0_2;

typedef struct st_4ffab0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4ffab0_0;

int GetSoundEdict__12CPlayerMelee(st_4ffab0_1 *a0)
{
    st_4ffab0_0 **v0;  // eax

    v0 = sub_48b510(a0);
    if (!v0)
        v0 = a0->field_124;
    return *v0->field_208;
}

