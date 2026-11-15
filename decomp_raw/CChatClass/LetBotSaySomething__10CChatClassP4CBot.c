// LetBotSaySomething__10CChatClassP4CBot @0x147110 size=1278
typedef struct st_547110_6 {
    struct st_547110_5 *field_0;
    char padding_4[2560];
    int field_a04;
    char padding_a08[572];
    char field_c44;
    char padding_c45[3];
    float field_c48;
} st_547110_6;

typedef struct st_547110_4 {
    char field_0;
    char padding_1[35];
    int field_24;
    char field_28;
} st_547110_4;

typedef struct st_547110_8 {
    struct st_547110_3 *field_0;
} st_547110_8;

typedef struct st_547110_5 {
    char padding_0[464];
    unsigned int field_1d0;
} st_547110_5;

typedef struct st_547110_2 {
    struct st_547110_1 *field_0;
    struct st_547110_1 *field_4;
} st_547110_2;

typedef struct st_547110_3 {
    unsigned int field_0;
    struct st_547110_2 *field_4;
} st_547110_3;

typedef struct st_547110_9 {
    char padding_0[844];
    struct st_547110_8 *field_34c;
} st_547110_9;

typedef struct st_547110_0 {
    char padding_0[8];
    struct st_547110_0 *field_8;
} st_547110_0;

typedef struct st_547110_1 {
    struct st_547110_0 *field_0;
    struct st_547110_1 *field_4;
    unsigned int field_8;
} st_547110_1;

typedef struct st_547110_7 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_547110_7;

typedef struct st_547110_10 {
    unsigned int field_0;
} st_547110_10;

extern unsigned int KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
extern unsigned int MakeSentenceChoiceList__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentence;
extern unsigned int FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
extern st_547110_10 *g_616928;
extern st_547110_10 *g_61692c;
extern st_547110_7 *gpGlobals;

st_547110_0 * LetBotSaySomething__10CChatClassP4CBot(st_547110_9 *a0, st_547110_6 *a1)
{
    st_547110_3 *v21;  // esi
    st_547110_1 **v22;  // eax
    st_547110_3 *v31;  // esi
    st_547110_3 *v32;  // esi
    st_547110_0 *iter;  // eax
    st_547110_1 *v35;  // esi
    st_547110_1 *v36;  // esi
    st_547110_1 *v37;  // esi
    st_547110_3 *v38;  // esi
    st_547110_1 **v39;  // edx
    st_547110_0 *v40;  // esi
    st_547110_1 *v41;  // ecx
    st_547110_1 *v42;  // eax
    st_547110_0 *v43;  // eax
    st_547110_1 **v44;  // edi
    st_547110_1 *node;  // esi
    st_547110_1 *v46;  // eax
    st_547110_3 *v47;  // edx
    double v48;  // mm0
    st_547110_4 *v49;  // eax
    st_547110_2 *v24;  // esi
    st_547110_2 *v25;  // esi
    st_547110_2 *v26;  // esi
    unsigned int v27;  // eax
    st_547110_8 **v28;  // ecx
    st_547110_3 *v30;  // esi
    st_547110_3 *v0;  // [bp-0x1d0]
    st_547110_0 *v1;  // [bp-0x1cc]
    unsigned int *v2;  // [bp-0x1c8]
    unsigned int v3;  // [bp-0x1c4]
    st_547110_4 **v4;  // [bp-0x1c0]
    unsigned int v5;  // [bp-0x1bc]
    unsigned int v6;  // [bp-0x1b8]
    unsigned int *v7;  // [bp-0x1b4]
    st_547110_9 *v8;  // [bp-0x1b0]
    unsigned int v9;  // [bp-0x1ac]
    unsigned int v10;  // [bp-0x1a8]
    unsigned int *v11;  // [bp-0x1a4]
    char v12;  // [bp-0x19d]
    st_547110_3 *v13;  // [bp-0x19c]
    st_547110_0 *v14;  // [bp-0x198], Other Possible Types: st_547110_4 *
    char v15;  // [bp-0x194]
    char v16;  // [bp-0x193]
    char v17;  // [bp-0x94]
    char v18;  // [bp-0x93]
    char v19;  // [bp-0x44]
    char v20;  // [bp-0x43]

    v21 = sub_48d6a0(8);
    v12 = 1;
    v21->field_0 = 0;
    v22 = sub_48d6a0(8);
    *v22 = NULL;
    v22[1] = NULL;
    v21->field_4 = v22;
    v12 = 0;
    v13 = v21;
    if (v12)
        sub_48d4e0(v13);
    v14 = NULL;
    v19 = 0;
    sub_48d0e0(&v20, 0, 32);
    v10 = _INSERT(sub_48e110(&v19, a1->field_0->field_1d0 + gpGlobals->field_98), 0, 0) | 0xffff0000;
    v11 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
    v9 = "All";
    v24 = *(int *)a0->field_34c;
    if (*(int *)a0->field_34c)
    {
        v8 = &a0->padding_0[(unsigned short)v10];
        do
        {
            v25 = v24;
            v26 = v25->field_4;
            v27 = v11(v8, v25->field_0, v9);
            if ((char)v27)
            {
                v28 = v25->field_0;
                goto LABEL_54725c;
            }
        } while ((v24 = v26, v25->field_4));
        v28 = NULL;
LABEL_54725c:
        if (v28)
        {
            v6 = _INSERT(v27, 0, 0) | 0xffff0000;
            v7 = &MakeSentenceChoiceList__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentence;
            v5 = &a0[1].padding_0[8];
            v30 = *(int *)*v28;
            if (*(int *)*v28)
            {
                do
                {
                    v31 = v30;
                    v32 = v31->field_4;
                    v7(&a0->padding_0[(unsigned short)v6], v31->field_0, v13, v5);
                    v30 = v32;
                } while (v31->field_4);
            }
        }
    }
    v4 = &v14;
    v3 = g_616928(0, v13->field_0);
    iter = _INSERT(v3, 0, 0) | 0xffff0000;
    v1 = iter;
    v2 = &FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
    v35 = v13->field_4->field_0;
    if (v13->field_4->field_0)
    {
        v0 = (unsigned short)v1 + (char *)v13;
        do
        {
            v36 = v35;
            v37 = v36->field_4;
            if ((char)v2(v0, v36->field_0, v3))
            {
                iter = v36->field_0;
                goto LABEL_547363;
            }
        } while ((v35 = v37, v36->field_4));
        iter = NULL;
LABEL_547363:
        if (iter)
        {
            iter = iter->field_8;
            v14 = iter;
        }
    }
    if (v13)
    {
        while (1)
        {
            v38 = v13;
            if (!v38->field_4->field_0 || !(v39 = v38->field_4, *v39))
                break;
            v40 = *v39->field_0;
            v41 = *v39;
            if (v41)
            {
                if (v41 == v39[1])
                    v39[1] = v41->field_4;
                v42 = *v39->field_4;
                *v39 = v42;
                if (v42)
                    v42->field_8 = 0;
                v41->field_4 = NULL;
                sub_48d4e0(v41);
            }
            v43 = v40;
            if (!v43)
                break;
            sub_48d4e0(v43);
        }
        if (v13->field_4)
        {
            v44 = v13->field_4;
            node = *v44;
            if (*v44)
            {
                do
                {
                    v46 = node;
                    node = node->field_4;
                    v46->field_4 = NULL;
                    v46->field_8 = 0;
                    sub_48d4e0(v46);
                } while (node);
            }
            v44[1] = NULL;
            *v44 = NULL;
            sub_48d4e0(v44);
        }
        v47 = v13;
        v47->field_4 = NULL;
        iter = sub_48d4e0(v47);
    }
    if (!v14)
        return iter;
    sub_488d20(a0, &a0[1].padding_0[8], v14);
    a1->field_c44 = 1;
    g_61692c(0, 5.0f);
    a1->field_c48 = (float)(v48 + 5.0 + gpGlobals->field_0);
    v17 = 0;
    sub_48d0e0(&v18, 0, 32);
    if (v14->field_0)
        v49 = v14;
    else
        v49 = a1->field_0->field_1d0 + gpGlobals->field_98;
    sub_48e110(&v17, v49);
    v15 = 0;
    sub_48d0e0(&v16, 0, 0xff);
    if (v14->field_28)
        sub_48c290(a0, a1->field_a04, v14->field_24, &v15);
    else
        sub_48e110(&v15, v14->field_24);
    return sub_48c5d0(a0, a1, &v15, a1 + 1, &v17, &v19);
}

