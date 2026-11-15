// GetNextTarget__11CBaseEntity @0x9d2d0 size=176
typedef struct st_49d2d0_3 {
    char padding_0[124];
    unsigned int field_7c;
} st_49d2d0_3;

typedef struct st_49d2d0_0 {
    char padding_0[456];
    unsigned int field_1c8;
} st_49d2d0_0;

typedef struct st_49d2d0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_49d2d0_1;

typedef struct st_49d2d0_2 {
    unsigned int field_0;
} st_49d2d0_2;

extern st_49d2d0_2 *g_6167f8;
extern st_49d2d0_2 *g_6168d4;
extern st_49d2d0_2 *g_6168d8;
extern st_49d2d0_1 *gpGlobals;

unsigned int GetNextTarget__11CBaseEntity(st_49d2d0_0 **a0)
{
    st_49d2d0_3 *v0;  // esi
    unsigned int v1;  // edi
    st_49d2d0_3 *v2;  // eax

    if (!*a0->field_1c8)
        return 0;
    v0 = g_6167f8(0, "targetname", *a0->field_1c8 + gpGlobals->field_98);
    v1 = 0;
    if (!v0 || !g_6168d8(v0))
        v1 = 1;
    if (!v1)
    {
        v2 = v0;
        if (!v2)
        {
            v2 = g_6168d4(0);
            if (!v2)
                return 0;
        }
        return v2->field_7c;
    }
    return 0;
}

