// Blocked__9CFuncPlatP11CBaseEntity @0xe9460 size=231
typedef struct st_4e9460_4 {
    struct st_4e9460_2 *field_0;
    char padding_4[92];
    struct st_4e9460_3 *field_60;
    char padding_64[28];
    unsigned int field_80;
} st_4e9460_4;

typedef struct st_4e9460_0 {
    char padding_0[244];
    struct st_4e9460_1 *field_f4;
} st_4e9460_0;

typedef struct st_4e9460_3 {
    char padding_0[240];
    struct st_4e9460_1 *field_f0;
    struct st_4e9460_1 *field_f4;
} st_4e9460_3;

typedef struct st_4e9460_1 {
    unsigned int field_0;
} st_4e9460_1;

typedef struct st_4e9460_2 {
    unsigned int field_0;
    char padding_4[484];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_4e9460_2;

typedef struct st_4e9460_6 {
    char padding_0[52];
    struct st_4e9460_1 *field_34;
} st_4e9460_6;

typedef struct st_4e9460_7 {
    struct st_4e9460_1 *field_0;
    char padding_4[92];
    struct st_4e9460_6 *field_60;
} st_4e9460_7;

typedef struct st_4e9460_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9460_5;

extern st_4e9460_0 g_engfuncs;
extern st_4e9460_5 *gpGlobals;

unsigned int * Blocked__9CFuncPlatP11CBaseEntity(st_4e9460_4 *a0, st_4e9460_7 *a1)
{
    st_4e9460_2 *v4;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    st_4e9460_0 *v3;  // [bp-0x8]

    v3 = &g_engfuncs.padding_0[0];
    v3->field_f4(2, "%s Blocked by %s\n", a0->field_0->field_0 + gpGlobals->field_98, *(int *)a1->field_0 + gpGlobals->field_98, v0, v1, v2);
    a1->field_60->field_34(a1, a0->field_0, a0->field_0, 0x3f800000, 1);
    v4 = a0->field_0;
    if (v4->field_1e8)
        v4 = EMIT_SOUND_DYN(v4->field_208, 6, v4->field_1e8 + gpGlobals->field_98, 0, 0, 32, 100);
    if (a0->field_80 == 2)
    {
        v4 = a0->field_60->field_f4(a0);
    }
    else if (a0->field_80 == 3)
    {
        v4 = a0->field_60->field_f0(a0);
    }
    return v4;
}

