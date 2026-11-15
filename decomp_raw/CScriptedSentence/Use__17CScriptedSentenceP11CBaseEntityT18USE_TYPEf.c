// Use__17CScriptedSentenceP11CBaseEntityT18USE_TYPEf @0x116a00 size=71
typedef struct st_516a00_0 {
    char padding_0[260];
    unsigned int field_104;
} st_516a00_0;

typedef struct st_516a00_1 {
    struct st_516a00_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[268];
    unsigned int field_120;
} st_516a00_1;

typedef struct st_516a00_2 {
    float field_0;
} st_516a00_2;

extern char FindThink__17CScriptedSentence;
extern st_516a00_2 *gpGlobals;

short Use__17CScriptedSentenceP11CBaseEntityT18USE_TYPEf(st_516a00_1 *a0)
{
    unsigned short v1;  // ax

    if (a0->field_120)
    {
        a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
        a0->field_10 = &FindThink__17CScriptedSentence;
        v1 = (unsigned short)gpGlobals;
        *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    }
    return v1;
}

