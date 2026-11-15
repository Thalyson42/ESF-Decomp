// GetBodygroup__FPvP9entvars_si @0x8fa80 size=75
typedef struct st_48fa80_0 {
    char padding_0[204];
    int field_cc;
    unsigned int field_d0;
} st_48fa80_0;

typedef struct st_48fa80_2 {
    char padding_0[276];
    int field_114;
} st_48fa80_2;

typedef struct st_48fa80_1 {
    char padding_0[64];
    unsigned int field_40;
    int field_44;
} st_48fa80_1;

unsigned int GetBodygroup__FPvP9entvars_si(st_48fa80_0 *a0, st_48fa80_2 *a1, int a2)
{
    st_48fa80_1 *v0;  // esi

    if (a0 && a2 <= a0->field_cc)
    {
        v0 = &a0->padding_0[a0->field_d0 + 76 * a2];
        if ((int)v0->field_40 > 1)
            return (a1->field_114 / v0->field_44) % v0->field_40;
    }
    return 0;
}

