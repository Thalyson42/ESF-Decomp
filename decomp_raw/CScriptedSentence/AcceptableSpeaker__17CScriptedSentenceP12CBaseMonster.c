// AcceptableSpeaker__17CScriptedSentenceP12CBaseMonster @0x116c50 size=180
typedef struct st_516c50_0 {
    char padding_0[356];
    struct st_516c50_1 *field_164;
} st_516c50_0;

typedef struct st_516c50_1 {
    unsigned int field_0;
} st_516c50_1;

typedef struct st_516c50_3 {
    char padding_0[416];
    char field_1a0;
} st_516c50_3;

typedef struct st_516c50_2 {
    char padding_0[96];
    struct st_516c50_0 *field_60;
} st_516c50_2;

typedef struct st_516c50_4 {
    char padding_0[152];
    unsigned int field_98;
} st_516c50_4;

extern st_516c50_4 *gpGlobals;

unsigned int AcceptableSpeaker__17CScriptedSentenceP12CBaseMonster(st_516c50_3 **a0, st_516c50_2 *a1)
{
    unsigned int v0;  // esi
    st_516c50_1 **v1;  // eax

    if (a1 && (!(*a0->field_1a0 & 2) || (v0 = &a1[2].padding_0[72], sub_48d8b0(v0) && !(v1 = sub_489fd0(v0), sub_488af0(*(int *)*(int *)sub_489fd0(v0) + gpGlobals->field_98, "player")))) && a1->field_60->field_164(a1, (*a0->field_1a0 & 4) != 0))
        return 1;
    return 0;
}

