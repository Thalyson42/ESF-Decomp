// Use__9CGameTextP11CBaseEntityT18USE_TYPEf @0xcfe20 size=164
typedef struct st_4cfe20_1 {
    char padding_0[164];
    struct st_4cfe20_2 *field_a4;
} st_4cfe20_1;

typedef struct st_4cfe20_2 {
    unsigned int field_0;
} st_4cfe20_2;

typedef struct st_4cfe20_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[51];
    unsigned int field_1d4;
} st_4cfe20_0;

typedef struct st_4cfe20_3 {
    char padding_0[96];
    struct st_4cfe20_1 *field_60;
} st_4cfe20_3;

typedef struct st_4cfe20_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4cfe20_4;

extern st_4cfe20_4 *gpGlobals;

unsigned int Use__9CGameTextP11CBaseEntityT18USE_TYPEf(st_4cfe20_0 **a0, st_4cfe20_3 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    v0 = sub_48aa30(a0, a1);
    if (!v0)
    {
        return v0;
    }
    else if (*a0->field_1a0 & 1)
    {
        return sub_48af60(a0 + 26, *a0->field_1d4 + gpGlobals->field_98);
    }
    else
    {
        v1 = a1->field_60->field_a4(a1);
        if (!v1)
            return v1;
        return sub_48dcb0(a1, a0 + 26, *a0->field_1d4 + gpGlobals->field_98);
    }
}

