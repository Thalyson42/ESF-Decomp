// CreateResponseList__10CChatClassPQ210CChatClass12SOldChatTextPt12TMultiChoice1ZPQ210CChatClass13CChatSentence @0x145b40 size=1211
typedef struct st_545b40_4 {
    char padding_0[33];
    char field_21;
} st_545b40_4;

typedef struct st_545b40_1 {
    struct st_545b40_0 *field_0;
} st_545b40_1;

typedef struct st_545b40_2 {
    struct st_545b40_1 *field_0;
    struct st_545b40_2 *field_4;
} st_545b40_2;

typedef struct st_545b40_0 {
    unsigned int field_0;
    struct st_545b40_0 *field_4;
} st_545b40_0;

typedef struct st_545b40_3 {
    char padding_0[844];
    struct st_545b40_1 *field_34c;
} st_545b40_3;

extern unsigned int KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
extern unsigned int KeyTokenIsInNodeList__10CChatClassPQ210CChatClass9CChatNodec;
extern unsigned int MakeSentenceChoiceList2__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentencePCc;

char CreateResponseList__10CChatClassPQ210CChatClass12SOldChatTextPt12TMultiChoice1ZPQ210CChatClass13CChatSentence(st_545b40_3 *a0, st_545b40_4 *a1, unsigned int a2)
{
    st_545b40_1 **v31;  // edi
    st_545b40_2 *v42;  // esi
    st_545b40_2 *v43;  // esi
    st_545b40_2 *v44;  // esi
    unsigned int v46;  // eax
    st_545b40_2 *v47;  // esi
    st_545b40_2 *v48;  // esi
    st_545b40_1 **v49;  // edi
    st_545b40_2 *v50;  // esi
    unsigned int v33;  // eax
    st_545b40_0 *v52;  // esi
    st_545b40_0 *v53;  // esi
    st_545b40_0 *v54;  // esi
    st_545b40_2 *v56;  // esi
    st_545b40_2 *v57;  // esi
    st_545b40_2 *v58;  // esi
    char *v59;  // eax
    char *v60;  // ecx
    st_545b40_2 *v34;  // esi
    char *v61;  // edi
    char *v62;  // eax
    st_545b40_2 *v64;  // esi
    st_545b40_2 *v65;  // esi
    st_545b40_1 **v66;  // edi
    st_545b40_2 *v67;  // esi
    unsigned int v68;  // eax
    st_545b40_0 *v70;  // esi
    st_545b40_2 *v35;  // esi
    st_545b40_0 *v71;  // esi
    st_545b40_0 *v72;  // esi
    st_545b40_2 *v36;  // esi
    st_545b40_0 *v38;  // esi
    st_545b40_0 *v39;  // esi
    st_545b40_0 *v40;  // esi
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    unsigned int *v2;  // [bp-0xd0]
    st_545b40_3 *v3;  // [bp-0xcc]
    char v4;  // [bp-0xc5]
    unsigned int v5;  // [bp-0xc4]
    unsigned int *v6;  // [bp-0xc0]
    char *v7;  // [bp-0xbc]
    unsigned int v8;  // [bp-0xb8]
    st_545b40_3 *v9;  // [bp-0xb4]
    unsigned int v10;  // [bp-0xb0]
    unsigned int *v11;  // [bp-0xac]
    unsigned int v12;  // [bp-0xa8]
    unsigned int v13;  // [bp-0xa4]
    unsigned int *v14;  // [bp-0xa0]
    st_545b40_3 *v15;  // [bp-0x9c]
    unsigned int v16;  // [bp-0x98]
    unsigned int *v17;  // [bp-0x94]
    st_545b40_3 *v18;  // [bp-0x90]
    unsigned int v19;  // [bp-0x8c]
    unsigned int *v20;  // [bp-0x88]
    unsigned int v21;  // [bp-0x84]
    unsigned int v22;  // [bp-0x80]
    unsigned int *v23;  // [bp-0x7c]
    st_545b40_3 *v24;  // [bp-0x78]
    unsigned int v25;  // [bp-0x74]
    unsigned int *v26;  // [bp-0x70]
    char v27;  // [bp-0x69]
    unsigned int v28;  // [bp-0x68]
    char v29;  // [bp-0x64]
    char v30;  // [bp-0x63]

    v29 = 0;
    sub_48d0e0(&v30, 0, 79);
    v31 = NULL;
    v27 = 0;
    sub_48e110(&v29, &a1->field_21);
    v28 = sub_48d6b0(&v29, " ,.;:[](){}-=+*-/\\<>?!@#$%%^&\n\r\t");
    v33 = _INSERT(v28, 0, 0) | 0xffff0000;
    v25 = v33;
    v26 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
    v34 = *(int *)a0->field_34c;
    if (!*(int *)a0->field_34c)
        goto LABEL_545cdb;
    v24 = &a0->padding_0[(unsigned short)v25];
    do
    {
        v35 = v34;
        v31 = v35->field_0;
        v36 = v35->field_4;
        v33 = v26(v24, v35->field_0, v28);
        if ((char)v33)
            goto LABEL_545cdb;
    } while ((v34 = v36, v35->field_4));
    while (1)
    {
        v31 = NULL;
LABEL_545cdb:
        if (v28)
        {
            if (v31)
            {
                if (!v27)
                    v27 = 1;
                v22 = _INSERT(v33, 0, 0) | 0xffff0000;
                v23 = &MakeSentenceChoiceList2__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentencePCc;
                v21 = &a0[1].padding_0[8];
                v38 = *(int *)*v31;
                if (*(int *)*v31)
                {
                    do
                    {
                        v39 = v38;
                        v40 = v39->field_4;
                        v23(&a0->padding_0[(unsigned short)v22], v39->field_0, a2, v21, a1);
                        v38 = v40;
                    } while (v39->field_4);
                }
            }
            v28 = sub_48d6b0(0, " ,.;:[](){}-=+*-/\\<>?!@#$%%^&\n\r\t");
            v33 = _INSERT(v28, 0, 0) | 0xffff0000;
            v19 = v33;
            v20 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
            v42 = *(int *)a0->field_34c;
            if (*(int *)a0->field_34c)
            {
                v18 = &a0->padding_0[(unsigned short)v19];
                do
                {
                    v43 = v42;
                    v31 = v43->field_0;
                    v44 = v43->field_4;
                    v33 = v20(v18, v43->field_0, v28);
                    if ((char)v33)
                        goto LABEL_545cdb;
                } while ((v42 = v44, v43->field_4));
            }
        }
        else
        {
            sub_48e110(&v29, &a1->field_21);
            v28 = sub_48d6b0(&v29, " \n\r\t");
            v46 = _INSERT(v28, 0, 0) | 0xffff0000;
            v16 = v46;
            v17 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
            v47 = *(int *)a0->field_34c;
            if (*(int *)a0->field_34c)
            {
                v15 = &a0->padding_0[(unsigned short)v16];
                do
                {
                    v48 = v47;
                    v49 = v48->field_0;
                    v50 = v48->field_4;
                    v46 = v17(v15, v48->field_0, v28);
                    if ((char)v46)
                        goto LABEL_545e71;
                } while ((v47 = v50, v48->field_4));
            }
            while (1)
            {
                v49 = NULL;
LABEL_545e71:
                if (v28)
                {
                    if (v49)
                    {
                        if (!v27)
                            v27 = 1;
                        v13 = _INSERT(v46, 0, 0) | 0xffff0000;
                        v14 = &MakeSentenceChoiceList2__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentencePCc;
                        v12 = &a0[1].padding_0[8];
                        v52 = *(int *)*v49;
                        if (*(int *)*v49)
                        {
                            do
                            {
                                v53 = v52;
                                v54 = v53->field_4;
                                v14(&a0->padding_0[(unsigned short)v13], v53->field_0, a2, v12, a1);
                                v52 = v54;
                            } while (v53->field_4);
                        }
                    }
                    v28 = sub_48d6b0(0, " \n\r\t");
                    v46 = _INSERT(v28, 0, 0) | 0xffff0000;
                    v10 = v46;
                    v11 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
                    v56 = *(int *)a0->field_34c;
                    if (*(int *)a0->field_34c)
                    {
                        v9 = &a0->padding_0[(unsigned short)v10];
                        do
                        {
                            v57 = v56;
                            v49 = v57->field_0;
                            v58 = v57->field_4;
                            v46 = v11(v9, v57->field_0, v28);
                            if ((char)v46)
                                goto LABEL_545e71;
                        } while ((v56 = v58, v57->field_4));
                    }
                }
                else
                {
                    *(unsigned short *)((char *)&v8 + 2) = 0;
                    v59 = &a1->field_21;
                    v7 = v59;
                    v60 = 0xffffffff;
                    do
                    {
                        v61 = v59;
                    } while (v60 && (v60 -= 1, v59 = v61 + 1, *v61));
                    v62 = ~v60 - 1;
                    *(unsigned short *)&v8 = (unsigned short)v62;
                    if (*(unsigned short *)((void*)&v8 + 2) >= (unsigned short)v62)
                    {
                        return v27;
                    }
                    else if (a1->field_21)
                    {
                        while (1)
                        {
                            v5 = _INSERT(v62, 0, 0) | 0xffff0000;
                            v6 = &KeyTokenIsInNodeList__10CChatClassPQ210CChatClass9CChatNodec;
                            v4 = v7[*(unsigned short *)((void*)&v8 + 2)];
                            v64 = *(int *)a0->field_34c;
                            if (*(int *)a0->field_34c)
                            {
                                v3 = &a0->padding_0[(unsigned short)v5];
                                while (1)
                                {
                                    v65 = v64;
                                    v66 = v65->field_0;
                                    v67 = v65->field_4;
                                    v68 = v6(v3, v65->field_0, v4);
                                    if ((char)v68)
                                        break;
                                    v64 = v67;
                                    if (!v65->field_4)
                                    {
                                        v66 = NULL;
                                        break;
                                    }
                                }
                                if (v66)
                                {
                                    if (!v27)
                                        v27 = 1;
                                    v1 = _INSERT(v68, 0, 0) | 0xffff0000;
                                    v2 = &MakeSentenceChoiceList2__10CChatClassPQ210CChatClass13CChatSentencePt12TMultiChoice1ZPQ210CChatClass13CChatSentencePPQ210CChatClass13CChatSentencePCc;
                                    v0 = &a0[1].padding_0[8];
                                    v70 = *(int *)*v66;
                                    if (*(int *)*v66)
                                    {
                                        do
                                        {
                                            v71 = v70;
                                            v72 = v71->field_4;
                                            v2(&a0->padding_0[(unsigned short)v1], v71->field_0, a2, v0, a1);
                                            v70 = v72;
                                        } while (v71->field_4);
                                    }
                                }
                            }
                            *(unsigned short *)((char *)&v8 + 2) = *(unsigned short *)((void*)&v8 + 2) + 1;
                            if (*(unsigned short *)((void*)&v8 + 2) >= (int)(v8 & 0xffff))
                                return v27;
                            v62 = *(unsigned short *)((void*)&v8 + 2);
                            v7 = &a1->field_21;
                            if (!*(char *)(v62 + v7))
                                return v27;
                        }
                    }
                    else
                    {
                        return v27;
                    }
                }
            }
        }
    }
}

