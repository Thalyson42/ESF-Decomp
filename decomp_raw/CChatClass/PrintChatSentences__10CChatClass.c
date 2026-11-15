// PrintChatSentences__10CChatClass @0x1495d0 size=421
typedef struct st_5495d0_3 {
    struct st_5495d0_2 *field_0;
} st_5495d0_3;

typedef struct st_5495d0_2 {
    unsigned int field_0;
    struct st_5495d0_2 *field_4;
} st_5495d0_2;

typedef struct st_5495d0_4 {
    char padding_0[840];
    struct st_5495d0_3 *field_348;
    struct st_5495d0_3 *field_34c;
    struct st_5495d0_3 *field_350;
    struct st_5495d0_3 *field_354;
} st_5495d0_4;

typedef struct st_5495d0_1 {
    unsigned int field_0;
} st_5495d0_1;

typedef struct st_5495d0_0 {
    char padding_0[20];
    struct st_5495d0_1 *field_14;
} st_5495d0_0;

extern unsigned int PrintChatNode__10CChatClassPQ210CChatClass9CChatNode;
extern unsigned int PrintChatSentence__10CChatClassPQ210CChatClass13CChatSentence;
extern char cout;
extern st_5495d0_0 *cout+512;

unsigned int PrintChatSentences__10CChatClass(st_5495d0_4 *a0)
{
    st_5495d0_2 *v9;  // esi
    st_5495d0_2 *v18;  // esi
    st_5495d0_2 *v19;  // esi
    unsigned int v20;  // eax
    st_5495d0_2 *v21;  // esi
    st_5495d0_2 *v22;  // esi
    st_5495d0_2 *v23;  // esi
    unsigned int v24;  // eax
    st_5495d0_2 *v10;  // esi
    st_5495d0_2 *v11;  // esi
    st_5495d0_2 *v13;  // esi
    st_5495d0_2 *v14;  // esi
    st_5495d0_2 *v15;  // esi
    st_5495d0_2 *v17;  // esi
    unsigned int v0;  // [bp-0x24]
    unsigned int *v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int *v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    unsigned int *v5;  // [bp-0x10]
    unsigned int v6;  // [bp-0xc]
    unsigned int *v7;  // [bp-0x8]

    cout+512->field_14(&cout, "Welecome sentences:\n\n");
    v6 = _INSERT(a0, 0, 0) | 0xffff0000;
    v7 = &PrintChatSentence__10CChatClassPQ210CChatClass13CChatSentence;
    v9 = *(int *)*(int *)a0->field_348;
    if (*(int *)*(int *)a0->field_348)
    {
        do
        {
            v10 = v9;
            v11 = v10->field_4;
            v7(&a0->padding_0[(unsigned short)v6], v10->field_0);
            v9 = v11;
        } while (v10->field_4);
    }
    v4 = _INSERT(cout+512->field_14(&cout, "\n\nNormal sentences\n\n"), 0, 0) | 0xffff0000;
    v5 = &PrintChatNode__10CChatClassPQ210CChatClass9CChatNode;
    v13 = *(int *)a0->field_34c;
    if (*(int *)a0->field_34c)
    {
        do
        {
            v14 = v13;
            v15 = v14->field_4;
            v5(&a0->padding_0[(unsigned short)v4], v14->field_0);
            v13 = v15;
        } while (v14->field_4);
    }
    v2 = _INSERT(cout+512->field_14(&cout, "\n\nTaunt sentences\n\n"), 0, 0) | 0xffff0000;
    v3 = &PrintChatNode__10CChatClassPQ210CChatClass9CChatNode;
    v17 = *(int *)a0->field_350;
    if (*(int *)a0->field_350)
    {
        do
        {
            v18 = v17;
            v19 = v18->field_4;
            v3(&a0->padding_0[(unsigned short)v2], v18->field_0);
            v17 = v19;
        } while (v18->field_4);
    }
    v20 = _INSERT(cout+512->field_14(&cout, "\n\nWhine sentences\n\n"), 0, 0);
    v0 = v20 | 0xffff0000;
    v1 = &PrintChatNode__10CChatClassPQ210CChatClass9CChatNode;
    v21 = *(int *)a0->field_354;
    if (!*(int *)a0->field_354)
        return v20 | 0xffff0000;
    do
    {
        v22 = v21;
        v23 = v22->field_4;
        v24 = v1(&a0->padding_0[(unsigned short)v0], v22->field_0);
        v21 = v23;
    } while (v22->field_4);
    return v24;
}

