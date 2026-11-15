// StartSequence__12CCineMonsterP12CBaseMonsterii @0x115520 size=218
typedef struct st_515520_2 {
    char padding_0[244];
    struct st_515520_3 *field_f4;
} st_515520_2;

typedef struct st_515520_3 {
    unsigned int field_0;
} st_515520_3;

typedef struct st_515520_0 {
    char padding_0[296];
    unsigned int field_128;
    char padding_12c[4];
    unsigned int field_130;
    char padding_134[152];
    unsigned int field_1cc;
} st_515520_0;

typedef struct st_515520_1 {
    char padding_0[152];
    unsigned int field_98;
} st_515520_1;

extern st_515520_2 g_engfuncs;
extern st_515520_1 *gpGlobals;

unsigned int StartSequence__12CCineMonsterP12CBaseMonsterii(int a0, st_515520_0 **a1, unsigned int a2, unsigned int a3)
{
    unsigned int v1;  // eax
    st_515520_2 *v0;  // [bp-0x8]

    if (!a2 && a3)
    {
        CCineMonster::SequenceDone(a0, a1);
        return 0;
    }
    v1 = CBaseAnimating::LookupSequence(a1, a2 + gpGlobals->field_98);
    *a1->field_128 = v1;
    if (*a1->field_128 == 0xffffffff)
    {
        v0 = &g_engfuncs.padding_0[0];
        v0->field_f4(4, "%s: unknown scripted sequence \"%s\"\n", *a1->field_1cc + gpGlobals->field_98, a2 + gpGlobals->field_98);
        *a1->field_128 = 0;
    }
    *a1->field_130 = 0;
    CBaseAnimating::ResetSequenceInfo(a1);
    return 1;
}

