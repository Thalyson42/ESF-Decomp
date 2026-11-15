// TakeDamage__12CTalkMonsterP9entvars_sT1fi @0x126ab0 size=174
typedef struct st_526ab0_0 {
    char padding_0[140];
    struct st_526ab0_1 *field_8c;
} st_526ab0_0;

typedef struct st_526ab0_2 {
    char padding_0[96];
    struct st_526ab0_0 *field_60;
    char padding_64[284];
    unsigned int field_180;
} st_526ab0_2;

typedef struct st_526ab0_1 {
    unsigned int field_0;
} st_526ab0_1;

typedef struct st_526ab0_3 {
    char padding_0[420];
    char field_1a4;
} st_526ab0_3;

typedef struct st_526ab0_4 {
    char padding_0[96];
    struct st_526ab0_0 *field_60;
} st_526ab0_4;

extern int slIdleStopShooting;

int TakeDamage__12CTalkMonsterP9entvars_sT1fi(st_526ab0_2 *a0, int a1, st_526ab0_3 *a2, float a3, int a4)
{
    st_526ab0_4 *v0;  // esi

    if (a0->field_60->field_8c(a0) && a2 && a0->field_180 != 5 && a2->field_1a4 & 8)
    {
        v0 = sub_48a530(a0, 0);
        if (v0 && v0->field_60->field_8c(v0))
            sub_48b250(v0, &slIdleStopShooting);
    }
    return sub_48a8f0(a0, a1, a2, a3, a4);
}

