// Touch__6CCandyP11CBaseEntity @0x99d90 size=161
typedef struct st_499d90_4 {
    char padding_0[160];
    struct st_499d90_2 *field_a0;
} st_499d90_4;

typedef struct st_499d90_7 {
    unsigned int field_0;
    char padding_4[92];
    struct st_499d90_4 *field_60;
    char padding_64[1792];
    struct st_499d90_6 *field_764;
} st_499d90_7;

typedef struct st_499d90_1 {
    char padding_0[232];
    struct st_499d90_2 *field_e8;
} st_499d90_1;

typedef struct st_499d90_0 {
    char padding_0[408];
    unsigned int field_198;
} st_499d90_0;

typedef struct st_499d90_2 {
    unsigned int field_0;
} st_499d90_2;

typedef struct st_499d90_5 {
    char padding_0[52];
    struct st_499d90_2 *field_34;
} st_499d90_5;

typedef struct st_499d90_6 {
    char padding_0[4];
    struct st_499d90_5 *field_4;
} st_499d90_6;

typedef struct st_499d90_3 {
    struct st_499d90_0 *field_0;
    char padding_4[92];
    struct st_499d90_1 *field_60;
} st_499d90_3;

unsigned int Touch__6CCandyP11CBaseEntity(st_499d90_3 *a0, st_499d90_7 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if (a0->field_0->field_198 && a0->field_0->field_198)
        v0 = a0->field_0->field_198 + 128;
    else
        v0 = 0;
    if (v0 == a1->field_0)
        return v0;
    v1 = a1->field_60->field_a0(a1);
    if (!v1)
        return v1;
    v2 = a1->field_764->field_4->field_34(a1->field_764);
    if (v2 != 1)
        return v2;
    a0->field_60->field_e8(a0, a1);
    CBasePlayer::EmitClassSound(a1, "candyeat.wav");
    return UTIL_Remove(a0);
}

