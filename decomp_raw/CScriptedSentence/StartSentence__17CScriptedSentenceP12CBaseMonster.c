// StartSentence__17CScriptedSentenceP12CBaseMonster @0x116ec0 size=381
typedef struct st_516ec0_4 {
    struct st_516ec0_3 *field_0;
    char padding_4[256];
    unsigned int field_104;
    char padding_108[4];
    float field_10c;
    float field_110;
    char padding_114[4];
    float field_118;
    float field_11c;
    char padding_120[4];
    unsigned int field_124;
} st_516ec0_4;

typedef struct st_516ec0_0 {
    char padding_0[364];
    struct st_516ec0_1 *field_16c;
} st_516ec0_0;

typedef struct st_516ec0_1 {
    unsigned int field_0;
} st_516ec0_1;

typedef struct st_516ec0_3 {
    char padding_0[416];
    char field_1a0;
} st_516ec0_3;

typedef struct st_516ec0_2 {
    unsigned int field_0;
    char padding_4[92];
    struct st_516ec0_0 *field_60;
} st_516ec0_2;

typedef struct st_516ec0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_516ec0_5;

extern st_516ec0_1 *g_6168b4;
extern st_516ec0_5 *gpGlobals;

unsigned int StartSentence__17CScriptedSentenceP12CBaseMonster(st_516ec0_4 *a0, st_516ec0_2 *a1)
{
    unsigned int v1;  // eax
    float v0;  // [bp-0x18]

    if (!a1)
    {
        g_6168b4(2, "Not Playing sentence %s\n", a0->field_104 + gpGlobals->field_98);
        return 0;
    }
    v1 = 0;
    if (a0->field_124)
    {
        v0 = a0->field_10c;
        if (!sub_488af0(a0->field_124 + gpGlobals->field_98, "player"))
            v0 = 4096.0f;
        v1 = sub_489dd0(a0->field_124 + gpGlobals->field_98, a1->field_0 + 8, v0);
    }
    a1->field_60->field_16c(a1, a0->field_104 + gpGlobals->field_98, a0->field_110, a0->field_11c, a0->field_118, !(a0->field_0->field_1a0 & 8), v1);
    g_6168b4(2, "Playing sentence %s (%.1f)\n", a0->field_104 + gpGlobals->field_98, (unsigned int)(a0->field_110 >> 0));
    sub_48d150(a0, 0, 3, 0);
    return 1;
}

