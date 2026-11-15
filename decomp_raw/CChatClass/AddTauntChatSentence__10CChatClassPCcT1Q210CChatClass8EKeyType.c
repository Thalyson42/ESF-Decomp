// AddTauntChatSentence__10CChatClassPCcT1Q210CChatClass8EKeyType @0x145600 size=667
typedef struct st_545600_1 {
    struct st_545600_0 *field_0;
    struct st_545600_0 *field_4;
} st_545600_1;

typedef struct st_545600_2 {
    char padding_0[848];
    struct st_545600_1 *field_350;
} st_545600_2;

typedef struct st_545600_0 {
    int field_0;
    struct st_545600_0 *field_4;
    struct st_545600_0 *field_8;
} st_545600_0;

extern unsigned int KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;

st_545600_0 * AddTauntChatSentence__10CChatClassPCcT1Q210CChatClass8EKeyType(st_545600_2 *a0, int a1, int a2, int a3)
{
    st_545600_0 *v9;  // esi
    st_545600_0 *v18;  // eax
    st_545600_0 *v10;  // esi
    st_545600_0 *v11;  // esi
    int v12;  // esi
    st_545600_0 **v13;  // esi
    st_545600_0 *v14;  // edi
    st_545600_0 *v15;  // eax
    st_545600_0 *v16;  // edi
    st_545600_0 *v17;  // eax
    char v0;  // [bp-0x1d]
    st_545600_0 *v1;  // [bp-0x1c]
    char v2;  // [bp-0x16]
    char v3;  // [bp-0x15]
    st_545600_2 *v4;  // [bp-0x14]
    unsigned int v5;  // [bp-0x10]
    unsigned int *v6;  // [bp-0xc]
    int v7;  // [bp-0x8], Other Possible Types: unsigned int

    v5 = _INSERT(0, 0, 0) | 0xffff0000;
    v6 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
    v9 = a0->field_350->field_0;
    if (a0->field_350->field_0)
    {
        v4 = &a0->padding_0[(unsigned short)v5];
        do
        {
            v10 = v9;
            v11 = v10->field_4;
            if ((char)v6(v4, v10->field_0, a2))
            {
                v7 = v10->field_0;
                goto LABEL_545678;
            }
        } while ((v9 = v11, v10->field_4));
        v7 = 0;
LABEL_545678:
        if (v7)
            return AddSentence__Q210CChatClass9CChatNodePCc(v7, a1);
    }
    v12 = __builtin_new(20);
    v3 = 1;
    v3 = 0;
    v7 = __Q210CChatClass9CChatNodePCcQ210CChatClass8EKeyType(v12, a2, a3);
    if (v3)
        __builtin_delete(v12);
    AddSentence__Q210CChatClass9CChatNodePCc(v7, a1);
    v13 = a0->field_350;
    if (!*v13)
    {
        v14 = __builtin_new(12);
        v2 = 1;
        v14->field_4 = NULL;
        v14->field_8 = NULL;
        memset@GLIBC_2.0(v14, 0, 4);
        v2 = 0;
        *v13 = v14;
        if (v2)
            __builtin_delete(v14);
        *v13->field_0 = v7;
        *v13->field_4 = NULL;
        *v13->field_8 = NULL;
        v15 = *v13;
        v13[1] = v15;
        return v15;
    }
    else
    {
        v1 = v13[1];
        v16 = __builtin_new(12);
        v0 = 1;
        v16->field_4 = NULL;
        v16->field_8 = NULL;
        memset@GLIBC_2.0(v16, 0, 4);
        v0 = 0;
        v1->field_4 = v16;
        if (v0)
            __builtin_delete(v16);
        v13[1]->field_4->field_8 = v13[1];
        v17 = v13[1]->field_4;
        v13[1] = v17;
        v17->field_0 = v7;
        v18 = v13[1];
        v18->field_4 = NULL;
        return v18;
    }
}

