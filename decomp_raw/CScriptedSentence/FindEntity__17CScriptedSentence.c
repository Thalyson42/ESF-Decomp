// FindEntity__17CScriptedSentence @0x116d10 size=426
typedef struct st_516d10_4 {
    char padding_0[124];
    struct st_516d10_3 *field_7c;
} st_516d10_4;

typedef struct st_516d10_1 {
    unsigned int field_0;
} st_516d10_1;

typedef struct st_516d10_5 {
    unsigned int field_0;
    char padding_4[416];
    char field_1a4;
} st_516d10_5;

typedef struct st_516d10_2 {
    char padding_0[76];
    struct st_516d10_1 *field_4c;
} st_516d10_2;

typedef struct st_516d10_3 {
    char padding_0[96];
    struct st_516d10_2 *field_60;
} st_516d10_3;

typedef struct st_516d10_6 {
    struct st_516d10_5 *field_0;
    char padding_4[92];
    struct st_516d10_2 *field_60;
} st_516d10_6;

typedef struct st_516d10_0 {
    char padding_0[152];
    unsigned int field_98;
} st_516d10_0;

extern st_516d10_1 *g_6167f8;
extern st_516d10_1 *g_6168d4;
extern st_516d10_1 *g_6168d8;
extern st_516d10_0 *gpGlobals;

int FindEntity__17CScriptedSentence(float idx)
{
    unsigned int v4;  // esi
    st_516d10_4 *v5;  // eax
    st_516d10_3 *v6;  // edx
    int v8;  // esi
    st_516d10_6 *v9;  // edi
    st_516d10_4 *v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    v2 = *(int *)(*(unsigned int *)&idx + 264) + gpGlobals->field_98;
    v1 = "targetname";
    v0 = NULL;
    while (1)
    {
        v0 = g_6167f8(v0, v1, v2);
        v4 = 0;
        if (!v0 || !g_6168d8(v0))
            v4 = 1;
        if (!v4)
        {
            v5 = v0;
            if (v5 || (v5 = g_6168d4(0), v5))
                v6 = v5->field_7c;
            else
                v6 = NULL;
            v8 = (!v6 ? 0 : v6->field_60->field_4c(v6));
            if (v8 && sub_48afc0(idx, v8))
                break;
            v2 = *(int *)(*(unsigned int *)&idx + 264) + gpGlobals->field_98;
            v1 = "targetname";
        }
        else
        {
            v9 = NULL;
            do
            {
                v9 = sub_48bba0(v9, *(int *)idx + 8, *(float *)(*(unsigned int *)&idx + 268));
                if (!v9)
                    return 0;
            } while (sub_488af0(gpGlobals->field_98 + v9->field_0->field_0, gpGlobals->field_98 + *(int *)(*(unsigned int *)&idx + 264)) || !(v9->field_0->field_1a4 & 32) || !(v8 = v9->field_60->field_4c(v9), sub_48afc0(idx, v8)));
        }
    }
    return v8;
}

