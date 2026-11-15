// EndSectionTouch__18CTriggerEndSectionP11CBaseEntity @0x12eed0 size=134
typedef struct st_52eed0_0 {
    char padding_0[164];
    struct st_52eed0_1 *field_a4;
} st_52eed0_0;

typedef struct st_52eed0_4 {
    struct st_52eed0_3 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_52eed0_4;

typedef struct st_52eed0_1 {
    unsigned int field_0;
} st_52eed0_1;

typedef struct st_52eed0_3 {
    char padding_0[468];
    unsigned int field_1d4;
} st_52eed0_3;

typedef struct st_52eed0_2 {
    char padding_0[96];
    struct st_52eed0_0 *field_60;
} st_52eed0_2;

typedef struct st_52eed0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_52eed0_5;

extern st_52eed0_1 *g_616944;
extern st_52eed0_5 *gpGlobals;

unsigned int EndSectionTouch__18CTriggerEndSectionP11CBaseEntity(st_52eed0_4 *a0, st_52eed0_2 *a1)
{
    unsigned int v0;  // eax

    v0 = a1->field_60->field_a4(a1);
    if (!v0)
        return v0;
    a0->field_14 = 0;
    a0->field_18 = 0;
    if (!a0->field_0->field_1d4)
        return sub_48cc00(a0);
    g_616944(a0->field_0->field_1d4 + gpGlobals->field_98);
    return sub_48cc00(a0);
}

