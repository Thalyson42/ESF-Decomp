// GetOwner__7CShieldP9entvars_s @0x118c30 size=73
typedef struct st_518c30_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_518c30_0;

typedef struct st_518c30_1 {
    char padding_0[520];
    struct st_518c30_0 *field_208;
} st_518c30_1;

typedef struct st_518c30_2 {
    unsigned int field_0;
} st_518c30_2;

extern st_518c30_2 *g_engfuncs.pfnPEntityOfEntOffset;

unsigned int GetOwner__7CShieldP9entvars_s(unsigned int a0, st_518c30_1 *a1)
{
    st_518c30_0 *v0;  // eax

    v0 = a1->field_208;
    if (!a1->field_208)
    {
        v0 = g_engfuncs.pfnPEntityOfEntOffset(0);
        if (!v0)
            return 0;
    }
    return v0->field_7c;
}

