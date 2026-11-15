// EntityUpdate__12CGlobalStateii @0x13a030 size=81
typedef struct st_53a030_0 {
    char padding_0[152];
    unsigned int field_98;
} st_53a030_0;

extern st_53a030_0 *gpGlobals;

int EntityUpdate__12CGlobalStateii(int a0, int a1, unsigned int a2)
{
    int v0;  // ecx

    v0 = sub_48d370(a0, a1);
    if (!v0)
        return v0;
    return sub_48e110(v0 + 64, a2 + gpGlobals->field_98);
}

