// LetBotCheckForReply__10CChatClassP4CBot @0x146400 size=3344
typedef struct st_546400_9 {
    char field_0;
    char padding_1[32];
    char field_21;
    char padding_22[130];
    float field_a4;
} st_546400_9;

typedef struct st_546400_7 {
    struct st_546400_6 *field_0;
    char padding_4[2560];
    int field_a04;
    char padding_a08[572];
    char field_c44;
    char padding_c45[3];
    float field_c48;
    char field_c4c;
    char padding_c4d[255];
    float field_d4c;
} st_546400_7;

typedef struct st_546400_14 {
    char field_0;
    char padding_1[35];
    int field_24;
    char field_28;
} st_546400_14;

typedef struct st_546400_6 {
    char padding_0[464];
    unsigned int field_1d0;
} st_546400_6;

typedef struct st_546400_3 {
    struct st_546400_2 *field_0;
    struct st_546400_2 *field_4;
} st_546400_3;

typedef struct st_546400_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_546400_1;

typedef struct st_546400_0 {
    unsigned int field_0;
    struct st_546400_1 *field_4;
} st_546400_0;

typedef struct st_546400_10 {
    char padding_0[8];
    unsigned int field_8;
} st_546400_10;

typedef struct st_546400_4 {
    struct st_546400_5 *field_0;
    struct st_546400_4 *field_4;
    struct st_546400_4 *field_8;
} st_546400_4;

typedef struct st_546400_2 {
    unsigned int field_0;
    struct st_546400_2 *field_4;
    unsigned int field_8;
} st_546400_2;

typedef struct st_546400_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_546400_5;

typedef struct st_546400_8 {
    float field_0;
    char padding_4[140];
    unsigned int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_546400_8;

typedef struct st_546400_13 {
    unsigned int field_0;
} st_546400_13;

extern unsigned int FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
extern unsigned int FindSelection__t12TMultiChoice1ZPt12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPt12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
extern st_546400_13 *g_engfuncs.pfnRandomLong;
extern st_546400_13 *g_engfuncs.pfnRandomFloat;
extern st_546400_8 *gpGlobals;

unsigned int * LetBotCheckForReply__10CChatClassP4CBot(st_546400_9 *a0, st_546400_7 *a1)
{
    st_546400_0 *node;  // esi
    unsigned int v40;  // edi
    unsigned int v49;  // eax
    st_546400_6 **v50;  // esi
    char v51;  // al
    unsigned int v52;  // esi
    unsigned int *v53;  // eax
    unsigned int v54;  // edx
    st_546400_4 **v55;  // edi
    st_546400_4 *v56;  // esi
    st_546400_4 *v57;  // esi
    st_546400_4 *v58;  // eax
    unsigned int i;  // edi
    st_546400_4 *v60;  // esi
    st_546400_4 *v61;  // esi
    st_546400_4 *v62;  // esi
    unsigned int *v63;  // eax
    st_546400_0 *v64;  // esi
    st_546400_4 **v65;  // edx
    unsigned int *v66;  // esi
    st_546400_4 *v67;  // ecx
    st_546400_4 *v68;  // eax
    unsigned int *v42;  // eax
    unsigned int *v69;  // eax
    st_546400_4 **v70;  // edi
    st_546400_4 *iter;  // esi
    st_546400_4 *v72;  // eax
    st_546400_0 *v73;  // edx
    st_546400_0 *v74;  // edi
    st_546400_3 *v76;  // esi
    st_546400_3 *v77;  // esi
    st_546400_3 *v78;  // esi
    st_546400_0 *v43;  // esi
    st_546400_10 *v79;  // eax
    st_546400_14 *v80;  // eax
    st_546400_3 *v81;  // edx
    unsigned int v82;  // esi
    st_546400_2 *v83;  // ecx
    st_546400_2 *v84;  // eax
    unsigned int v85;  // eax
    st_546400_3 *v86;  // edi
    st_546400_2 *iter1;  // esi
    st_546400_2 *v88;  // eax
    st_546400_4 **v44;  // eax
    unsigned int v45;  // eax
    unsigned int v46;  // edi
    unsigned int v47;  // ecx
    st_546400_9 *v48;  // edx
    char *v0;  // [bp-0x268]
    int v1;  // [bp-0x264]
    unsigned int *iter2;  // [bp-0x22c]
    st_546400_0 *v3;  // [bp-0x228]
    unsigned int v4;  // [bp-0x224]
    unsigned int *v5;  // [bp-0x220]
    unsigned int v6;  // [bp-0x21c]
    st_546400_14 **v7;  // [bp-0x218]
    st_546400_0 *v8;  // [bp-0x214]
    unsigned int v9;  // [bp-0x210]
    unsigned int *v10;  // [bp-0x20c]
    unsigned int v11;  // [bp-0x208]
    st_546400_0 **v12;  // [bp-0x204]
    char v13;  // [bp-0x1fd]
    st_546400_4 *v14;  // [bp-0x1fc]
    char v15;  // [bp-0x1f5]
    unsigned int *v16;  // [bp-0x1f4]
    unsigned short v17;  // [bp-0x1ee]
    unsigned int v18;  // [bp-0x1ec]
    char v19;  // [bp-0x1e5]
    short v20;  // [bp-0x1e4]
    char v21;  // [bp-0x1e2]
    char v22;  // [bp-0x1e1]
    st_546400_0 *v23;  // [bp-0x1e0]
    char *v24;  // [bp-0x1d8]
    st_546400_14 *v25;  // [bp-0x1d4], Other Possible Types: unsigned int
    st_546400_0 *v26;  // [bp-0x1d0], Other Possible Types: unsigned int
    char v27;  // [bp-0x1cc]
    char v28;  // [bp-0x1cb]
    unsigned short v29;  // [bp-0xcc]
    unsigned short v30;  // [bp-0xca]
    int v31;  // [bp-0xc8], Other Possible Types: unsigned int
    char v32;  // [bp-0xc4]
    char v33;  // [bp-0xc3]
    char v34;  // [bp-0x84]
    char v35;  // [bp-0x83]
    unsigned int v36;  // [bp-0x44]
    char v37;  // [bp-0x28]

    v24 = &v36;
    node = &v36;
    v40 = 4;
    do
    {
        i = v40;
        node->field_0 = 0;
        v42 = __builtin_new(8);
        *v42 = 0;
        v42[1] = 0;
        node->field_4 = v42;
        node += 1;
        v40 = i - 1;
    } while (i >= 1);
    v43 = __builtin_new(8);
    v22 = 1;
    v43->field_0 = 0;
    v44 = __builtin_new(8);
    *v44 = NULL;
    v44[1] = NULL;
    v43->field_4 = v44;
    v22 = 0;
    v23 = v43;
    if (v22)
        __builtin_delete(v23);
    v25 = 0;
    v34 = 0;
    memset@GLIBC_2.0(&v35, 0, 32);
    strcpy@GLIBC_2.0(&v34, a1->field_0->field_1d0 + gpGlobals->field_98);
    if (a0 != 0xffffffdf && a0->field_21 && gpGlobals->field_0 - 5.0 < a0->field_a4)
    {
        v21 = 0;
        do
        {
            v45 = v21;
            v46 = v45 * 5;
            v47 = (v45 + v46 * 4) * 8;
            v48 = &(&a0->field_0)[v47];
            if (v48 != 0xffffffdf && v48->field_21 && gpGlobals->field_0 - 5.0 < *(float *)&(&a0->field_0)[v47 + 164] && v48 && v48->field_0 && strcmp@GLIBC_2.0(&v34, v48))
            {
                v19 = 50 - (char)(v46 * 2);
                v20 = 1;
                if ((int)gpGlobals->field_90 > NULL)
                {
                    v49 = v21;
                    v18 = v49 * 21;
                    do
                    {
                        v50 = UTIL_PlayerByIndex(v20);
                        *(unsigned short *)&v1 = 0;
                        *(unsigned short *)&v0 = 0;
                        if (!(char)UTIL_IsValidPlayer(v50, v0, v1))
                            continue;
                        strcpy@GLIBC_2.0(&v32, *v50->field_1d0 + gpGlobals->field_98);
                        v0 = &v32;
                        if (strstr@GLIBC_2.0(&(&a0->field_0)[8 * v18 + 33], v0))
                        {
                            v31 = v19;
                            v30 = __fnstcw();
                            v29 = v30 | 0xc00;
                            v31 = (int)((double)(int)v31 * 0.1);
                            v51 = v31;
                        }
                        else
                        {
                            if (!strstr@GLIBC_2.0(&a0[v49].field_21, &v34))
                                continue;
                            v31 = v19;
                            v30 = __fnstcw();
                            v29 = v30 | 0xc00;
                            v31 = (int)((double)(int)v31 * 1.25);
                            v51 = v31;
                        }
                        v19 = v51;
                    } while ((v20 += 1, v20 <= (int)gpGlobals->field_90));
                }
                v52 = v21;
                if ((char)CChatClass::CreateResponseList(a0, &a0[v52], &(&v36)[2 * v52]))
                {
                    v17 = v19;
                    if (v17)
                    {
                        v53 = __builtin_new(12);
                        *v53 = 0;
                        v53[1] = 0;
                        v16 = v53;
                        v54 = v23->field_0;
                        *v16 = v54;
                        v16[1] = v17 + v54;
                        v16[2] = &(&v36)[2 * v52];
                        v55 = v23->field_4;
                        if (!*v55)
                        {
                            v56 = __builtin_new(12);
                            v15 = 1;
                            v56->field_4 = NULL;
                            v56->field_8 = NULL;
                            memset@GLIBC_2.0(v56, 0, 4);
                            v15 = 0;
                            *v55 = v56;
                            if (v15)
                                __builtin_delete(v56);
                            *v55->field_0 = v16;
                            *v55->field_4 = NULL;
                            *v55->field_8 = NULL;
                            v55[1] = *v55;
                        }
                        else
                        {
                            v14 = v55[1];
                            v57 = __builtin_new(12);
                            v13 = 1;
                            v57->field_4 = NULL;
                            v57->field_8 = NULL;
                            memset@GLIBC_2.0(v57, 0, 4);
                            v13 = 0;
                            v14->field_4 = v57;
                            if (v13)
                                __builtin_delete(v57);
                            v55[1]->field_4->field_8 = v55[1];
                            v58 = v55[1]->field_4;
                            v55[1] = v58;
                            v58->field_0 = v16;
                            v55[1]->field_4 = NULL;
                        }
                        v23->field_0 = v23->field_0 + v17;
                    }
                }
            }
        } while ((v21 += 1, v21 <= 4));
    }
    v26 = NULL;
    v12 = &v26;
    v11 = g_engfuncs.pfnRandomLong(0, v23->field_0);
    v9 = _INSERT(v11, 0, 0) | 0xffff0000;
    v10 = &FindSelection__t12TMultiChoice1ZPt12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPt12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
    v60 = v23->field_4->field_0;
    if (v23->field_4->field_0)
    {
        v8 = (unsigned short)v9 + (char *)v23;
        do
        {
            v61 = v60;
            v62 = v61->field_4;
            if ((char)v10(v8, v61->field_0, v11))
            {
                v63 = &v61->field_0->field_0;
                goto LABEL_546a53;
            }
        } while ((v60 = v62, v61->field_4));
        v63 = NULL;
LABEL_546a53:
        if (v63)
            v26 = v63[2];
    }
    if (v23)
    {
        while (1)
        {
            v64 = v23;
            if (!v64->field_4->field_0 || !(v65 = v64->field_4, *v65))
                break;
            v66 = &*v65->field_0->field_0;
            v67 = *v65;
            if (v67)
            {
                if (v67 == v65[1])
                    v65[1] = v67->field_4;
                v68 = *v65->field_4;
                *v65 = v68;
                if (v68)
                    v68->field_8 = NULL;
                v67->field_4 = NULL;
                __builtin_delete(v67);
            }
            v69 = v66;
            if (!v69)
                break;
            __builtin_delete(v69);
        }
        if (v23->field_4)
        {
            v70 = v23->field_4;
            iter = *v70;
            if (*v70)
            {
                do
                {
                    v72 = iter;
                    iter = iter->field_4;
                    v72->field_4 = NULL;
                    v72->field_8 = NULL;
                    __builtin_delete(v72);
                } while (iter);
            }
            v70[1] = NULL;
            *v70 = NULL;
            __builtin_delete(v70);
        }
        v73 = v23;
        v73->field_4 = NULL;
        __builtin_delete(v73);
    }
    v25 = NULL;
    if (v26)
    {
        v74 = v26;
        v7 = &v25;
        v6 = g_engfuncs.pfnRandomLong(0, v74->field_0);
        v4 = _INSERT(v6, 0, 0) | 0xffff0000;
        v5 = &FindSelection__t12TMultiChoice1ZPQ210CChatClass13CChatSentencePQ2t12TMultiChoice1ZPQ210CChatClass13CChatSentence12SMultiChoicei;
        v76 = v74->field_4->field_0;
        if (v74->field_4->field_0)
        {
            v3 = (char *)v74 + (unsigned short)v4;
            do
            {
                v77 = v76;
                v78 = v77->field_4;
                if ((char)v5(v3, v77->field_0, v6))
                {
                    v79 = v77->field_0;
                    goto LABEL_546bef;
                }
            } while ((v76 = v78, v77->field_4));
            v79 = NULL;
LABEL_546bef:
            if (v79)
                v25 = v79->field_8;
        }
    }
    if (v25)
    {
        CChatClass::StoreRecentUsedSentence(a0, &a0[5].padding_1[15], v25);
        a1->field_c44 = 1;
        g_engfuncs.pfnRandomFloat(0x3f800000, 2.5f);
        a1->field_c48 = (float)(2.5 + gpGlobals->field_0);
        g_engfuncs.pfnRandomFloat(10.0f, 20.0f);
        a1->field_d4c = (float)(10.0 + a1->field_d4c);
        v32 = 0;
        memset@GLIBC_2.0(&v33, 0, 32);
        if (v25->field_0)
            v80 = v25;
        else
            v80 = a1->field_0->field_1d0 + gpGlobals->field_98;
        strcpy@GLIBC_2.0(&v32, v80);
        v27 = 0;
        memset@GLIBC_2.0(&v28, 0, 0xff);
        if (v25->field_28)
            CChatClass::MakeChatSentence(a0, a1->field_a04, v25->field_24, &v27);
        else
            strcpy@GLIBC_2.0(&v27, v25->field_24);
        CChatClass::FillInNames(a0, a1, &v27, &a1->field_c4c, &v32, &v34);
    }
    iter2 = &v37 + 12;
    if (&v36 == &v37 + 12)
        return &v36;
    do
    {
        iter2 = (char *)iter2 - 8;
        while (*(int *)iter2[1] && (v81 = iter2[1], v81->field_0))
        {
            v82 = v81->field_0->field_0;
            v83 = v81->field_0;
            if (v83)
            {
                if (v83 == v81->field_4)
                    v81->field_4 = v83->field_4;
                v84 = v81->field_0->field_4;
                v81->field_0 = v84;
                if (v84)
                    v84->field_8 = 0;
                v83->field_4 = NULL;
                __builtin_delete(v83);
            }
            v85 = v82;
            if (!v85)
                break;
            __builtin_delete(v85);
        }
        if (iter2[1])
        {
            v86 = iter2[1];
            iter1 = v86->field_0;
            if (v86->field_0)
            {
                do
                {
                    v88 = iter1;
                    iter1 = iter1->field_4;
                    v88->field_4 = NULL;
                    v88->field_8 = 0;
                    __builtin_delete(v88);
                } while (iter1);
            }
            v86->field_4 = NULL;
            v86->field_0 = NULL;
            __builtin_delete(v86);
        }
        iter2[1] = NULL;
    } while (&v36 != iter2);
    return &v36;
}

