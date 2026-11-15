// Instance__11CBaseEntityP7edict_s @0x9e150 size=63
typedef struct st_49e150_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_49e150_0;

typedef struct st_49e150_1 {
    unsigned int field_0;
} st_49e150_1;

extern st_49e150_1 *g_6168d4;

unsigned int Instance__11CBaseEntityP7edict_s(st_49e150_0 *a0)
{
    st_49e150_0 *v0;  // eax

    v0 = a0;
    if (!v0)
    {
        v0 = g_6168d4(0);
        if (!v0)
            return 0;
    }
    return v0->field_7c;
}

