// LetBotTaunt__10CChatClassP4CBotP11CBasePlayer @0x147610 size=1214
typedef struct st_547610_9 {
    struct st_547610_8 *field_0;
    char padding_4[2560];
    int field_a04;
    char padding_a08[572];
    char field_c44;
    char padding_c45[3];
    float field_c48;
} st_547610_9;

typedef struct st_547610_6 {
    char padding_0[36];
    int field_24;
    char field_28;
} st_547610_6;

typedef struct st_547610_4 {
    struct st_547610_3 *field_0;
} st_547610_4;

typedef struct st_547610_8 {
    char padding_0[464];
    unsigned int field_1d0;
} st_547610_8;

typedef struct st_547610_2 {
    struct st_547610_1 *field_0;
    struct st_547610_1 *field_4;
} st_547610_2;

typedef struct st_547610_3 {
    unsigned int field_0;
    struct st_547610_2 *field_4;
} st_547610_3;

typedef struct st_547610_5 {
    char padding_0[848];
    struct st_547610_4 *field_350;
} st_547610_5;

typedef struct st_547610_0 {
    char padding_0[8];
    struct st_547610_0 *field_8;
} st_547610_0;

typedef struct st_547610_1 {
    struct st_547610_0 *field_0;
    struct st_547610_1 *field_4;
    unsigned int field_8;
} st_547610_1;

typedef struct st_547610_10 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_547610_10;

typedef struct st_547610_7 {
    unsigned int field_0;
} st_547610_7;

extern unsigned int KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
extern unsigned int MakeSentenceChoiceList__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentence;
extern unsigned int FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
extern st_547610_7 *g_616928;
extern st_547610_7 *g_61692c;
extern st_547610_10 *gpGlobals;

st_547610_0 * LetBotTaunt__10CChatClassP4CBotP11CBasePlayer(st_547610_5 *a0, st_547610_9 *a1, st_547610_8 **a2)
{
    st_547610_2 *v22;  // esi
    st_547610_3 *v31;  // esi
    st_547610_3 *v32;  // esi
    st_547610_3 *v33;  // esi
    st_547610_0 *iter;  // eax
    st_547610_1 *v36;  // esi
    st_547610_1 *v37;  // esi
    st_547610_1 *v38;  // esi
    st_547610_3 *v39;  // esi
    st_547610_1 **v40;  // edx
    st_547610_2 *v23;  // esi
    st_547610_0 *v41;  // esi
    st_547610_1 *v42;  // ecx
    st_547610_1 *v43;  // eax
    st_547610_0 *v44;  // eax
    st_547610_1 **v45;  // edi
    st_547610_1 *node;  // esi
    st_547610_1 *v47;  // eax
    st_547610_3 *v48;  // edx
    double v49;  // mm0
    st_547610_4 **v24;  // edi
    st_547610_2 *v25;  // esi
    st_547610_0 *v26;  // eax
    st_547610_1 **v27;  // eax
    st_547610_3 *v28;  // eax
    st_547610_3 *v30;  // esi
    char v0;  // [bp-0x195]
    st_547610_3 *v1;  // [bp-0x194]
    st_547610_0 *v2;  // [bp-0x190]
    unsigned int *v3;  // [bp-0x18c]
    unsigned int v4;  // [bp-0x188]
    st_547610_6 **v5;  // [bp-0x184]
    unsigned int v6;  // [bp-0x180]
    unsigned int v7;  // [bp-0x17c]
    unsigned int *v8;  // [bp-0x178]
    st_547610_3 *v9;  // [bp-0x174]
    char v10;  // [bp-0x16d]
    st_547610_3 *v11;  // [bp-0x16c]
    st_547610_5 *v12;  // [bp-0x168]
    st_547610_0 *v13;  // [bp-0x164]
    unsigned int v14;  // [bp-0x160]
    unsigned int *v15;  // [bp-0x15c]
    st_547610_0 *v16;  // [bp-0x158], Other Possible Types: st_547610_6 *
    char v17;  // [bp-0x154]
    char v18;  // [bp-0x153]
    char v19;  // [bp-0x114]
    char v20;  // [bp-0x113]

    v14 = _INSERT(0, 0, 0) | 0xffff0000;
    v15 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
    v13 = "All";
    v22 = *(int *)a0->field_350;
    if (!*(int *)a0->field_350)
        return "All";
    v12 = &a0->padding_0[(unsigned short)v14];
    while (1)
    {
        v23 = v22;
        v24 = v23->field_0;
        v25 = v23->field_4;
        v26 = v15(v12, v23->field_0, v13);
        if ((char)v26)
            break;
        v22 = v25;
        if (!v23->field_4)
        {
            v24 = NULL;
            break;
        }
    }
    if (!v24)
        return v26;
    v10 = 1;
    v9 = sub_48d6a0(8);
    v9->field_0 = 0;
    v27 = sub_48d6a0(8);
    *v27 = NULL;
    v27[1] = NULL;
    v9->field_4 = v27;
    v10 = 0;
    v28 = v9;
    v11 = v28;
    if (v10)
        v28 = sub_48d4e0(v9);
    v7 = _INSERT(v28, 0, 0) | 0xffff0000;
    v8 = &MakeSentenceChoiceList__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentence;
    v6 = &a0[1].padding_0[44];
    v30 = *(int *)*v24;
    if (*(int *)*v24)
    {
        do
        {
            v31 = v30;
            v32 = v31->field_4;
            v8(&a0->padding_0[(unsigned short)v7], v31->field_0, v11, v6);
            v30 = v32;
        } while (v31->field_4);
    }
    v16 = NULL;
    v5 = &v16;
    v33 = v11;
    v4 = g_616928(0, v33->field_0);
    iter = _INSERT(v4, 0, 0) | 0xffff0000;
    v2 = iter;
    v3 = &FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
    v36 = v33->field_4->field_0;
    if (v33->field_4->field_0)
    {
        v1 = (unsigned short)v2 + (char *)v11;
        do
        {
            v37 = v36;
            v38 = v37->field_4;
            if ((char)v3(v1, v37->field_0, v4))
            {
                iter = v37->field_0;
                goto LABEL_547823;
            }
        } while ((v36 = v38, v37->field_4));
        iter = NULL;
LABEL_547823:
        if (iter)
        {
            iter = iter->field_8;
            v16 = iter;
        }
    }
    if (v11)
    {
        while (1)
        {
            v39 = v11;
            if (!v39->field_4->field_0 || !(v40 = v39->field_4, *v40))
                break;
            v41 = *v40->field_0;
            v42 = *v40;
            if (v42)
            {
                if (v42 == v40[1])
                    v40[1] = v42->field_4;
                v43 = *v40->field_4;
                *v40 = v43;
                if (v43)
                    v43->field_8 = 0;
                v42->field_4 = NULL;
                sub_48d4e0(v42);
            }
            v44 = v41;
            if (!v44)
                break;
            sub_48d4e0(v44);
        }
        if (v11->field_4)
        {
            v45 = v11->field_4;
            node = *v45;
            if (*v45)
            {
                do
                {
                    v47 = node;
                    node = node->field_4;
                    v47->field_4 = NULL;
                    v47->field_8 = 0;
                    sub_48d4e0(v47);
                } while (node);
            }
            v45[1] = NULL;
            *v45 = NULL;
            sub_48d4e0(v45);
        }
        v48 = v11;
        v48->field_4 = NULL;
        iter = sub_48d4e0(v48);
    }
    if (!v16)
        return iter;
    sub_488d20(a0, &a0[1].padding_0[44], v16);
    a1->field_c44 = 1;
    g_61692c(0, 5.0f);
    a1->field_c48 = (float)(v49 + 5.0 + gpGlobals->field_0);
    v0 = 0;
    v19 = 0;
    sub_48d0e0(&v20, 0, 0xff);
    v17 = v0;
    sub_48d0e0(&v18, 0, 32);
    sub_48a7c0(a0, a1->field_a04, *a2->field_1d0 + gpGlobals->field_98, &v17);
    if (v16->field_28)
        sub_48c290(a0, a1->field_a04, v16->field_24, &v19);
    else
        sub_48e110(&v19, v16->field_24);
    return sub_48c5d0(a0, a1, &v19, a1 + 1, &v17, gpGlobals->field_98 + a1->field_0->field_1d0);
}

