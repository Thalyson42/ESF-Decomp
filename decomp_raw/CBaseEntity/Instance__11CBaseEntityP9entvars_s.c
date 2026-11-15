// Instance__11CBaseEntityP9entvars_s @0x9e190 size=73
typedef struct st_49e190_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_49e190_0;

typedef struct st_49e190_1 {
    char padding_0[520];
    struct st_49e190_0 *field_208;
} st_49e190_1;

typedef struct st_49e190_2 {
    unsigned int field_0;
} st_49e190_2;

extern st_49e190_2 *g_6168d4;

unsigned int Instance__11CBaseEntityP9entvars_s(st_49e190_1 *a0)
{
    st_49e190_0 *v0;  // eax

    v0 = a0->field_208;
    if (!a0->field_208)
    {
        v0 = g_6168d4(0);
        if (!v0)
            return 0;
    }
    return v0->field_7c;
}

