// MakeSentenceChoiceList3__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentence @0x149390 size=500
typedef struct st_549390_0 {
    char padding_0[41];
    char field_29;
    char field_2a;
    char field_2b;
} st_549390_0;

typedef struct st_549390_4 {
    unsigned int field_0;
    struct st_549390_5 *field_4;
} st_549390_4;

typedef struct st_549390_5 {
    struct st_549390_3 *field_0;
    struct st_549390_3 *field_4;
} st_549390_5;

typedef struct st_549390_3 {
    struct st_549390_1 *field_0;
    struct st_549390_2 *field_4;
    unsigned int field_8;
} st_549390_3;

typedef struct st_549390_2 {
    struct st_549390_1 *field_0;
    unsigned int field_4;
    struct st_549390_3 *field_8;
} st_549390_2;

typedef struct st_549390_1 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_549390_0 *field_8;
} st_549390_1;

extern char g_6253c4;

int MakeSentenceChoiceList3__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentence(unsigned int a0, st_549390_0 *a1, st_549390_4 *a2)
{
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    st_549390_1 *v8;  // eax
    unsigned int v9;  // edx
    st_549390_3 **v10;  // esi
    st_549390_3 *v11;  // edi
    st_549390_2 *v12;  // edi
    st_549390_2 *v13;  // eax
    char v0;  // [bp-0x15]
    st_549390_3 *v1;  // [bp-0x14]
    char v2;  // [bp-0xd]
    st_549390_1 *v3;  // [bp-0xc]
    unsigned short v4;  // [bp-0x6]

    v5 = g_6253c4 - 1;
    if (a1->field_2a > (int)v5)
        return v5;
    v6 = _INSERT(v5, 0, a1->field_2b);
    if (a1->field_2b > g_6253c4)
        return v6;
    v7 = a1->field_29;
    v4 = v7;
    if (!(unsigned short)v7)
        return v7;
    v8 = sub_48d6a0(12);
    v8->field_0 = 0;
    v8->field_4 = 0;
    v3 = v8;
    v9 = a2->field_0;
    v3->field_0 = v9;
    v3->field_4 = v4 + v9;
    v3->field_8 = a1;
    v10 = a2->field_4;
    if (!*v10)
    {
        v11 = sub_48d6a0(12);
        v2 = 1;
        v11->field_4 = NULL;
        v11->field_8 = 0;
        sub_48d0e0(v11, 0, 4);
        v2 = 0;
        *v10 = v11;
        if (v2)
            sub_48d4e0(v11);
        *v10->field_0 = v3;
        *v10->field_4 = NULL;
        *v10->field_8 = 0;
        v10[1] = *v10;
    }
    else
    {
        v1 = v10[1];
        v12 = sub_48d6a0(12);
        v0 = 1;
        v12->field_4 = 0;
        v12->field_8 = NULL;
        sub_48d0e0(v12, 0, 4);
        v0 = 0;
        v1->field_4 = v12;
        if (v0)
            sub_48d4e0(v12);
        v10[1]->field_4->field_8 = v10[1];
        v13 = v10[1]->field_4;
        v10[1] = v13;
        v13->field_0 = v3;
        v10[1]->field_4 = NULL;
    }
    a2->field_0 = a2->field_0 + v4;
    return v4;
}

