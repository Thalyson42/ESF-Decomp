// Use__8CMessageP11CBaseEntityT18USE_TYPEf @0xb66b0 size=315
typedef struct st_4b66b0_3 {
    char padding_0[124];
    struct st_4b66b0_2 *field_7c;
} st_4b66b0_3;

typedef struct st_4b66b0_0 {
    char padding_0[160];
    struct st_4b66b0_1 *field_a0;
} st_4b66b0_0;

typedef struct st_4b66b0_1 {
    unsigned int field_0;
} st_4b66b0_1;

typedef struct st_4b66b0_4 {
    char padding_0[324];
    float field_144;
    char padding_148[88];
    char field_1a0;
    char padding_1a1[51];
    unsigned int field_1d4;
    char padding_1d8[16];
    unsigned int field_1e8;
    char padding_1ec[12];
    float field_1f8;
    char padding_1fc[12];
    int field_208;
} st_4b66b0_4;

typedef struct st_4b66b0_2 {
    char padding_0[96];
    struct st_4b66b0_0 *field_60;
} st_4b66b0_2;

typedef struct st_4b66b0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4b66b0_5;

extern st_4b66b0_1 *g_6168d4;
extern st_4b66b0_1 *g_6168e0;
extern st_4b66b0_5 *gpGlobals;

int Use__8CMessageP11CBaseEntityT18USE_TYPEf(st_4b66b0_4 **a0, st_4b66b0_2 *a1)
{
    st_4b66b0_2 *v0;  // esi
    st_4b66b0_3 *v1;  // eax
    st_4b66b0_4 *v2;  // esi

    v0 = a1;
    if (*a0->field_1a0 & 2)
    {
        sub_48cb90(*a0->field_1d4 + gpGlobals->field_98);
    }
    else
    {
        if (!v0 || !v0->field_60->field_a0(v0))
        {
            v1 = g_6168e0(1);
            if (v1 || (v1 = g_6168d4(0), v1))
                v0 = v1->field_7c;
            else
                v0 = NULL;
        }
        if (!v0)
            goto LABEL_4b676c;
        sub_488380(*a0->field_1d4 + gpGlobals->field_98, v0);
    }
LABEL_4b676c:
    v2 = *a0;
    if (v2->field_1e8)
        sub_489390(v2->field_208, 4, v2->field_1e8 + gpGlobals->field_98, v2->field_144, v2->field_1f8, 0, 100);
    if (*a0->field_1a0 & 1)
        sub_48cc00(a0);
    return sub_48df80(a0, a0, 3, 0);
}

