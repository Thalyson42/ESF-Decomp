// GetSequenceFlags__FPvP9entvars_s @0x8f370 size=63
typedef struct st_48f370_0 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
} st_48f370_0;

typedef struct st_48f370_1 {
    char padding_0[296];
    int field_128;
} st_48f370_1;

unsigned int GetSequenceFlags__FPvP9entvars_s(st_48f370_0 *a0, st_48f370_1 *a1)
{
    if (a0 && a1->field_128 < a0->field_a4)
        return *(int *)&a0->padding_0[176 * a1->field_128 + a0->field_a8 + 36];
    return 0;
}

