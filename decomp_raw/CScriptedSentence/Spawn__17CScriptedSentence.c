// Spawn__17CScriptedSentence @0x116a50 size=231
typedef struct st_516a50_1 {
    struct st_516a50_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[264];
    unsigned int field_11c;
    unsigned int field_120;
} st_516a50_1;

typedef struct st_516a50_0 {
    char padding_0[260];
    float field_104;
    char padding_108[4];
    unsigned int field_10c;
    char padding_110[116];
    unsigned int field_184;
    char padding_188[68];
    unsigned int field_1cc;
} st_516a50_0;

typedef struct st_516a50_2 {
    float field_0;
} st_516a50_2;

extern char FindThink__17CScriptedSentence;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_516a50_2 *gpGlobals;

int Spawn__17CScriptedSentence(void)
{
    st_516a50_1 *v1;  // ecx
    st_516a50_0 *v2;  // eax
    st_516a50_0 *v3;  // esi
    st_516a50_0 *v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    st_516a50_1 *v0;  // [bp+0x4]

    v1 = v0;
    v2 = v1->field_0;
    v2->field_10c = 0;
    v1->field_120 = 1;
    v3 = v1->field_0;
    if (!v3->field_1cc)
    {
        v1->field_c = _INSERT(v2, 0, 0) | 0xffff0000;
        v1->field_10 = &FindThink__17CScriptedSentence;
        v3->field_104 = (float)(1.0 + *(float *)gpGlobals);
    }
    if (v1->field_0->field_184 <= 3)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v1->field_0->field_184] - 1036300)]));
    }
    else
    {
        *(float *)&v1->padding_14[260] = 2.0f;
        v5 = v1->field_0;
        v5->field_184 = 0;
        v6 = _INSERT(v5, 0, 0);
        v7 = _INSERT(v6, 1, (isnan(*(float *)&v1->field_11c) ? 5 : 0.0 < *(float *)&v1->field_11c));
        if (0.0 < *(float *)&v1->field_11c)
            return v7;
        v1->field_11c = 0x3f800000;
        return v7;
    }
}

