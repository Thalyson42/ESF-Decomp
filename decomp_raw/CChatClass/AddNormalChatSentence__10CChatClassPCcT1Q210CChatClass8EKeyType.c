// AddNormalChatSentence__10CChatClassPCcT1Q210CChatClass8EKeyType @0x145300 size=763
typedef struct st_545300_1 {
    struct st_545300_0 *field_0;
    struct st_545300_0 *field_4;
} st_545300_1;

typedef struct st_545300_2 {
    char padding_0[844];
    struct st_545300_1 *field_34c;
} st_545300_2;

typedef struct st_545300_0 {
    int field_0;
    struct st_545300_0 *field_4;
    struct st_545300_0 *field_8;
} st_545300_0;

extern unsigned int KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
extern unsigned int KeyTokenIsInNodeList__10CChatClassPQ210CChatClass9CChatNodec;

st_545300_0 * AddNormalChatSentence__10CChatClassPCcT1Q210CChatClass8EKeyType(st_545300_2 *a0, int a1, char *a2, int a3)
{
    st_545300_0 *v13;  // esi
    st_545300_0 **v22;  // esi
    st_545300_0 *v23;  // edi
    st_545300_0 *v24;  // eax
    st_545300_0 *v25;  // edi
    st_545300_0 *v26;  // eax
    st_545300_0 *v27;  // eax
    st_545300_0 *v14;  // esi
    unsigned int v15;  // edi
    st_545300_0 *v16;  // esi
    st_545300_0 *v18;  // esi
    st_545300_0 *v19;  // esi
    st_545300_0 *v20;  // esi
    int v21;  // esi
    char v0;  // [bp-0x2d]
    st_545300_0 *v1;  // [bp-0x2c]
    char v2;  // [bp-0x26]
    char v3;  // [bp-0x25]
    st_545300_2 *v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int *v6;  // [bp-0x1c]
    st_545300_2 *v7;  // [bp-0x18]
    char v8;  // [bp-0x11]
    unsigned int v9;  // [bp-0x10]
    unsigned int *v10;  // [bp-0xc]
    int v11;  // [bp-0x8], Other Possible Types: unsigned int

    if (a3 == 2)
    {
        v9 = _INSERT(0, 0, 0) | 0xffff0000;
        v10 = &KeyTokenIsInNodeList__10CChatClassPQ210CChatClass9CChatNodec;
        v8 = *a2;
        v13 = a0->field_34c->field_0;
        if (a0->field_34c->field_0)
        {
            v7 = &a0->padding_0[(unsigned short)v9];
            do
            {
                v14 = v13;
                v15 = v14->field_0;
                v16 = v14->field_4;
                if ((char)v10(v7, v14->field_0, v8))
                    goto LABEL_5453a0;
            } while ((v13 = v16, v14->field_4));
        }
    }
    else
    {
        v5 = _INSERT(0, 0, 0) | 0xffff0000;
        v6 = &KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc;
        v18 = a0->field_34c->field_0;
        if (a0->field_34c->field_0)
        {
            v4 = &a0->padding_0[(unsigned short)v5];
            while (1)
            {
                v19 = v18;
                v15 = v19->field_0;
                v20 = v19->field_4;
                if ((char)v6(v4, v19->field_0, a2))
                    break;
                v18 = v20;
                if (!v19->field_4)
                {
                    v11 = 0;
                    goto LABEL_5453d8;
                }
            }
LABEL_5453a0:
            v11 = v15;
LABEL_5453d8:
            if (v11)
                return sub_488b40(v11, a1);
        }
    }
    v21 = sub_48d6a0(20);
    v3 = 1;
    v3 = 0;
    v11 = sub_489cd0(v21, a2, a3);
    if (v3)
        sub_48d4e0(v21);
    sub_488b40(v11, a1);
    v22 = a0->field_34c;
    if (!*v22)
    {
        v23 = sub_48d6a0(12);
        v2 = 1;
        v23->field_4 = NULL;
        v23->field_8 = NULL;
        sub_48d0e0(v23, 0, 4);
        v2 = 0;
        *v22 = v23;
        if (v2)
            sub_48d4e0(v23);
        *v22->field_0 = v11;
        *v22->field_4 = NULL;
        *v22->field_8 = NULL;
        v24 = *v22;
        v22[1] = v24;
        return v24;
    }
    else
    {
        v1 = v22[1];
        v25 = sub_48d6a0(12);
        v0 = 1;
        v25->field_4 = NULL;
        v25->field_8 = NULL;
        sub_48d0e0(v25, 0, 4);
        v0 = 0;
        v1->field_4 = v25;
        if (v0)
            sub_48d4e0(v25);
        v22[1]->field_4->field_8 = v22[1];
        v26 = v22[1]->field_4;
        v22[1] = v26;
        v26->field_0 = v11;
        v27 = v22[1];
        v27->field_4 = NULL;
        return v27;
    }
}

