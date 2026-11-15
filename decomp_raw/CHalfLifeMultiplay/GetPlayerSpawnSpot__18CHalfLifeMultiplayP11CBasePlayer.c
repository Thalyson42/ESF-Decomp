// GetPlayerSpawnSpot__18CHalfLifeMultiplayP11CBasePlayer @0xdda80 size=117
typedef struct st_4dda80_0 {
    char padding_0[24];
    struct st_4dda80_1 *field_18;
} st_4dda80_0;

typedef struct st_4dda80_1 {
    unsigned int field_0;
} st_4dda80_1;

typedef struct st_4dda80_3 {
    char padding_0[584];
    unsigned int field_248;
} st_4dda80_3;

typedef struct st_4dda80_2 {
    char padding_0[68];
    struct st_4dda80_0 *field_44;
} st_4dda80_2;

typedef struct st_4dda80_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4dda80_4;

extern st_4dda80_4 *gpGlobals;

st_4dda80_3 * GetPlayerSpawnSpot__18CHalfLifeMultiplayP11CBasePlayer(st_4dda80_2 *a0, int a1)
{
    st_4dda80_3 *v0;  // edi

    v0 = sub_4898d0(a0, a1);
    if (!a0->field_44->field_18(a0))
        return v0;
    if (!v0->field_248)
        return v0;
    sub_48c1b0(v0->field_248 + gpGlobals->field_98, a1, a1, 3, 0);
    return v0;
}

