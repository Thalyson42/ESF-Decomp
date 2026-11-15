// Touch__9CPushableP11CBaseEntity @0xc3920 size=90
typedef struct st_4c3920_0 {
    unsigned int field_0;
} st_4c3920_0;

typedef struct st_4c3920_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4c3920_1;

extern st_4c3920_1 *gpGlobals;

unsigned int Touch__9CPushableP11CBaseEntity(int a0, st_4c3920_0 **a1)
{
    unsigned int v0;  // eax

    v0 = sub_488af0(*(int *)*a1 + gpGlobals->field_98, "worldspawn");
    if (!v0)
        return v0;
    return sub_489580(a0, a1, 1);
}

