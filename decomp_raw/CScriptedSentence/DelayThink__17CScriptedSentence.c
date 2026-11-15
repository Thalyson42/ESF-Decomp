// DelayThink__17CScriptedSentence @0x116bf0 size=90
typedef struct st_516bf0_1 {
    struct st_516bf0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[268];
    unsigned int field_120;
} st_516bf0_1;

typedef struct st_516bf0_0 {
    char padding_0[260];
    float field_104;
    char padding_108[196];
    unsigned int field_1cc;
} st_516bf0_0;

typedef struct st_516bf0_2 {
    float field_0;
} st_516bf0_2;

extern char FindThink__17CScriptedSentence;
extern st_516bf0_2 *gpGlobals;

short DelayThink__17CScriptedSentence(st_516bf0_1 *a0)
{
    float *v0;  // eax
    unsigned int v1;  // eax

    a0->field_120 = 1;
    if (!a0->field_0->field_1cc)
    {
        v0 = gpGlobals;
        a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    }
    v1 = _INSERT(v0, 0, 0);
    a0->field_c = v1 | 0xffff0000;
    a0->field_10 = &FindThink__17CScriptedSentence;
    return v1;
}

