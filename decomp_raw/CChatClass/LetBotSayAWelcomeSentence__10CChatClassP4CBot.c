// LetBotSayAWelcomeSentence__10CChatClassP4CBot @0x146000 size=1022
typedef struct st_546000_9 {
    struct st_546000_8 *field_0;
    char padding_4[2560];
    int field_a04;
    char padding_a08[572];
    char field_c44;
    char padding_c45[3];
    float field_c48;
} st_546000_9;

typedef struct st_546000_6 {
    char padding_0[36];
    unsigned int field_24;
    char field_28;
} st_546000_6;

typedef struct st_546000_4 {
    struct st_546000_3 *field_0;
} st_546000_4;

typedef struct st_546000_8 {
    char padding_0[464];
    unsigned int field_1d0;
} st_546000_8;

typedef struct st_546000_2 {
    struct st_546000_1 *field_0;
    struct st_546000_1 *field_4;
} st_546000_2;

typedef struct st_546000_3 {
    unsigned int field_0;
    struct st_546000_2 *field_4;
} st_546000_3;

typedef struct st_546000_5 {
    char padding_0[840];
    struct st_546000_4 *field_348;
} st_546000_5;

typedef struct st_546000_0 {
    char padding_0[8];
    struct st_546000_0 *field_8;
} st_546000_0;

typedef struct st_546000_1 {
    struct st_546000_0 *field_0;
    struct st_546000_1 *field_4;
    unsigned int field_8;
} st_546000_1;

typedef struct st_546000_10 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_546000_10;

typedef struct st_546000_7 {
    unsigned int field_0;
} st_546000_7;

extern unsigned int MakeSentenceChoiceList3__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentence;
extern unsigned int FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
extern st_546000_7 *g_616928;
extern st_546000_7 *g_61692c;
extern st_546000_10 *gpGlobals;

st_546000_0 * LetBotSayAWelcomeSentence__10CChatClassP4CBot(st_546000_5 *a0, st_546000_9 *a1)
{
    st_546000_3 *v14;  // esi
    st_546000_1 **v15;  // eax
    st_546000_1 *v24;  // esi
    st_546000_3 *v25;  // esi
    st_546000_1 **v26;  // edx
    st_546000_0 *v27;  // esi
    st_546000_1 *v28;  // ecx
    st_546000_1 *v29;  // eax
    st_546000_0 *v30;  // eax
    st_546000_1 **v31;  // edi
    st_546000_1 *iter;  // esi
    st_546000_1 *v33;  // eax
    st_546000_3 *v34;  // edx
    double v35;  // mm0
    st_546000_3 *v17;  // esi
    st_546000_3 *v18;  // esi
    st_546000_3 *v19;  // esi
    st_546000_0 *node;  // eax
    st_546000_1 *v22;  // esi
    st_546000_1 *v23;  // esi
    st_546000_3 *v0;  // [bp-0x17c]
    st_546000_0 *v1;  // [bp-0x178]
    unsigned int *v2;  // [bp-0x174]
    unsigned int v3;  // [bp-0x170]
    st_546000_6 **v4;  // [bp-0x16c]
    unsigned int v5;  // [bp-0x168]
    unsigned int *v6;  // [bp-0x164]
    char v7;  // [bp-0x15d]
    st_546000_3 *v8;  // [bp-0x15c]
    st_546000_0 *v9;  // [bp-0x158], Other Possible Types: st_546000_6 *
    char v10;  // [bp-0x154]
    char v11;  // [bp-0x153]
    char v12;  // [bp-0x54]
    char v13;  // [bp-0x53]

    v14 = sub_48d6a0(8);
    v7 = 1;
    v14->field_0 = 0;
    v15 = sub_48d6a0(8);
    *v15 = NULL;
    v15[1] = NULL;
    v14->field_4 = v15;
    v7 = 0;
    v8 = v14;
    if (v7)
        sub_48d4e0(v8);
    v5 = _INSERT(a0, 0, 0) | 0xffff0000;
    v6 = &MakeSentenceChoiceList3__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentence;
    v17 = *(int *)*(int *)a0->field_348;
    if (*(int *)*(int *)a0->field_348)
    {
        do
        {
            v18 = v17;
            v19 = v18->field_4;
            v6(&a0->padding_0[(unsigned short)v5], v18->field_0, v8);
            v17 = v19;
        } while (v18->field_4);
    }
    v9 = NULL;
    v4 = &v9;
    v3 = g_616928(0, v8->field_0);
    node = _INSERT(v3, 0, 0) | 0xffff0000;
    v1 = node;
    v2 = &FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
    v22 = v8->field_4->field_0;
    if (v8->field_4->field_0)
    {
        v0 = (unsigned short)v1 + (char *)v8;
        do
        {
            v23 = v22;
            v24 = v23->field_4;
            if ((char)v2(v0, v23->field_0, v3))
            {
                node = v23->field_0;
                goto LABEL_546183;
            }
        } while ((v22 = v24, v23->field_4));
        node = NULL;
LABEL_546183:
        if (node)
        {
            node = node->field_8;
            v9 = node;
        }
    }
    if (v8)
    {
        while (1)
        {
            v25 = v8;
            if (!v25->field_4->field_0 || !(v26 = v25->field_4, *v26))
                break;
            v27 = *v26->field_0;
            v28 = *v26;
            if (v28)
            {
                if (v28 == v26[1])
                    v26[1] = v28->field_4;
                v29 = *v26->field_4;
                *v26 = v29;
                if (v29)
                    v29->field_8 = 0;
                v28->field_4 = NULL;
                sub_48d4e0(v28);
            }
            v30 = v27;
            if (!v30)
                break;
            sub_48d4e0(v30);
        }
        if (v8->field_4)
        {
            v31 = v8->field_4;
            iter = *v31;
            if (*v31)
            {
                do
                {
                    v33 = iter;
                    iter = iter->field_4;
                    v33->field_4 = NULL;
                    v33->field_8 = 0;
                    sub_48d4e0(v33);
                } while (iter);
            }
            v31[1] = NULL;
            *v31 = NULL;
            sub_48d4e0(v31);
        }
        v34 = v8;
        v34->field_4 = NULL;
        node = sub_48d4e0(v34);
    }
    if (!v9)
        return node;
    a1->field_c44 = 1;
    g_61692c(0, 5.0f);
    a1->field_c48 = (float)(v35 + 5.0 + gpGlobals->field_0);
    v12 = 0;
    sub_48d0e0(&v13, 0, 32);
    sub_48e110(&v12, a1->field_0->field_1d0 + gpGlobals->field_98);
    v10 = 0;
    sub_48d0e0(&v11, 0, 0xff);
    if (v9->field_28)
        sub_48c290(a0, a1->field_a04, v9->field_24, &v10);
    else
        sub_48e110(&v10, v9->field_24);
    return sub_48c5d0(a0, a1, &v10, a1 + 1, &v12, a1->field_0->field_1d0 + gpGlobals->field_98);
}

