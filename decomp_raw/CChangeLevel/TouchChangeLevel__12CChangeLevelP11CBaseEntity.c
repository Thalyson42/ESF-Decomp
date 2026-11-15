// TouchChangeLevel__12CChangeLevelP11CBaseEntity @0x12dcd0 size=88
typedef struct st_52dcd0_0 {
    unsigned int field_0;
} st_52dcd0_0;

typedef struct st_52dcd0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_52dcd0_1;

extern st_52dcd0_1 *gpGlobals;

unsigned int TouchChangeLevel__12CChangeLevelP11CBaseEntity(int a0, st_52dcd0_0 **a1)
{
    unsigned int v0;  // eax

    v0 = sub_488af0(*(int *)*a1 + gpGlobals->field_98, "player");
    if (v0)
        return v0;
    return sub_48d090(a0, a1);
}

