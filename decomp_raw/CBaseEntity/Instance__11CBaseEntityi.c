// Instance__11CBaseEntityi @0x9e1e0 size=89
typedef struct st_49e1e0_1 {
    char padding_0[124];
    unsigned int field_7c;
} st_49e1e0_1;

typedef struct st_49e1e0_0 {
    unsigned int field_0;
} st_49e1e0_0;

extern st_49e1e0_0 *g_engfuncs.pfnPEntityOfEntOffset;

unsigned int Instance__11CBaseEntityi(unsigned int a0)
{
    st_49e1e0_1 *v0;  // eax

    v0 = g_engfuncs.pfnPEntityOfEntOffset(a0);
    if (!v0)
    {
        v0 = g_engfuncs.pfnPEntityOfEntOffset(0);
        if (!v0)
            return 0;
    }
    return v0->field_7c;
}

