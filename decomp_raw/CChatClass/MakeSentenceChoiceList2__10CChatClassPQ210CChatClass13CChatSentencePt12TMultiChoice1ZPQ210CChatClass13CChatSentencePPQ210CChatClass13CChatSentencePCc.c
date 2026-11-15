// MakeSentenceChoiceList2__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentencePCc @0x149130 size=596
typedef struct st_549130_0 {
    char field_0;
    char padding_1[40];
    char field_29;
    char field_2a;
    char field_2b;
} st_549130_0;

typedef struct st_549130_5 {
    struct st_549130_3 *field_0;
    struct st_549130_3 *field_4;
} st_549130_5;

typedef struct st_549130_4 {
    unsigned int field_0;
    struct st_549130_5 *field_4;
} st_549130_4;

typedef struct st_549130_1 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_549130_0 *field_8;
} st_549130_1;

typedef struct st_549130_2 {
    struct st_549130_1 *field_0;
    unsigned int field_4;
    struct st_549130_3 *field_8;
} st_549130_2;

typedef struct st_549130_3 {
    struct st_549130_1 *field_0;
    struct st_549130_2 *field_4;
    unsigned int field_8;
} st_549130_3;

typedef struct st_549130_6 {
    unsigned int field_0;
} st_549130_6;

extern st_549130_6 *g_engfuncs.pfnRandomLong;
extern char BotManager+3396;

int MakeSentenceChoiceList2__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentencePCc(unsigned int a0, st_549130_0 *a1, st_549130_4 *a2, st_549130_0 **a3, int a4)
{
    int v6;  // eax
    int v7;  // eax
    int v8;  // eax
    int v9;  // eax
    st_549130_1 *v10;  // eax
    unsigned int v11;  // edx
    st_549130_3 **v12;  // esi
    st_549130_3 *v13;  // edi
    st_549130_2 *v14;  // edi
    st_549130_2 *v15;  // eax
    char v0;  // [bp-0x1d]
    st_549130_3 *v1;  // [bp-0x1c]
    char v2;  // [bp-0x15]
    st_549130_1 *v3;  // [bp-0x14]
    unsigned short v4;  // [bp-0x10]
    char v5;  // [bp-0xd]

    v6 = BotManager+3396 - 1;
    if (a1->field_2a > v6)
        return v6;
    v7 = _INSERT(v6, 0, a1->field_2b);
    if (a1->field_2b > BotManager+3396)
        return v7;
    v5 = 0;
    do
    {
        if (a1 == a3[v5])
        {
            v8 = g_engfuncs.pfnRandomLong(1, 100);
            if (v8 <= 80)
                return v8;
        }
    } while ((v5 += 1, v5 <= 4));
    a1->field_0 = 0;
    strcpy@GLIBC_2.0(a1, a4);
    v9 = a1->field_29;
    v4 = v9;
    if (!(unsigned short)v9)
        return v9;
    v10 = __builtin_new(12);
    v10->field_0 = 0;
    v10->field_4 = 0;
    v3 = v10;
    v11 = a2->field_0;
    v3->field_0 = v11;
    v3->field_4 = v4 + v11;
    v3->field_8 = a1;
    v12 = a2->field_4;
    if (!*v12)
    {
        v13 = __builtin_new(12);
        v2 = 1;
        v13->field_4 = NULL;
        v13->field_8 = 0;
        memset@GLIBC_2.0(v13, 0, 4);
        v2 = 0;
        *v12 = v13;
        if (v2)
            __builtin_delete(v13);
        *v12->field_0 = v3;
        *v12->field_4 = NULL;
        *v12->field_8 = 0;
        v12[1] = *v12;
    }
    else
    {
        v1 = v12[1];
        v14 = __builtin_new(12);
        v0 = 1;
        v14->field_4 = 0;
        v14->field_8 = NULL;
        memset@GLIBC_2.0(v14, 0, 4);
        v0 = 0;
        v1->field_4 = v14;
        if (v0)
            __builtin_delete(v14);
        v12[1]->field_4->field_8 = v12[1];
        v15 = v12[1]->field_4;
        v12[1] = v15;
        v15->field_0 = v3;
        v12[1]->field_4 = NULL;
    }
    a2->field_0 = a2->field_0 + v4;
    return v4;
}

