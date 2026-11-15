// InStruggle__14CPowerStruggleP9entvars_s @0x10da40 size=45
typedef struct st_50da40_1 {
    unsigned int field_0;
} st_50da40_1;

typedef struct st_50da40_2 {
    char padding_0[684];
    struct st_50da40_0 *field_2ac;
} st_50da40_2;

typedef struct st_50da40_0 {
    struct st_50da40_0 *field_0;
    struct st_50da40_1 *field_4;
} st_50da40_0;

unsigned int InStruggle__14CPowerStruggleP9entvars_s(st_50da40_2 *a0, unsigned int a1)
{
    st_50da40_0 *v0;  // edx
    st_50da40_0 *v1;  // edx

    v0 = a0->field_2ac;
    if (a0->field_2ac)
    {
        do
        {
            v1 = v0;
            if (*(int *)v1->field_4 == a1)
                return 1;
        } while ((v0 = v1->field_0, v1->field_0));
    }
    return 0;
}

