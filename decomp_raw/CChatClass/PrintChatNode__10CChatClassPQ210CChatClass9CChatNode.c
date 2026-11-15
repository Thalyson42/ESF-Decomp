// PrintChatNode__10CChatClassPQ210CChatClass9CChatNode @0x149780 size=460
typedef struct st_549780_4 {
    char padding_0[20];
    struct st_549780_5 *field_14;
} st_549780_4;

typedef struct st_549780_2 {
    struct st_549780_0 *field_0;
} st_549780_2;

typedef struct st_549780_5 {
    unsigned int field_0;
} st_549780_5;

typedef struct st_549780_0 {
    unsigned int field_0;
    struct st_549780_0 *field_4;
} st_549780_0;

typedef struct st_549780_3 {
    char field_0;
} st_549780_3;

typedef struct st_549780_1 {
    struct st_549780_2 *field_0;
    struct st_549780_3 *field_4;
    unsigned int field_8;
} st_549780_1;

extern unsigned int PrintChatSentence__10CChatClassPQ210CChatClass13CChatSentence;
extern unsigned int cout;
extern st_549780_4 *g_625f80;

int PrintChatNode__10CChatClassPQ210CChatClass9CChatNode(unsigned int a0, st_549780_1 *a1)
{
    st_549780_4 *v6;  // edx
    st_549780_0 *v8;  // esi
    st_549780_0 *v9;  // esi
    st_549780_0 *v10;  // esi
    unsigned int v0;  // [bp-0x5c]
    unsigned int v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x2c]
    unsigned int *v3;  // [bp-0x28]
    char v4;  // [bp-0x24]
    char v5;  // [bp-0x23]

    if (!a1->field_8)
    {
        g_625f80->field_14(&cout, "Node using keyword: ");
        g_625f80->field_14(&cout, a1->field_4);
        v6 = g_625f80;
        v1 = "\n";
        v0 = &cout;
    }
    else if (a1->field_8 == 1)
    {
        g_625f80->field_14(&cout, "Node using keyword2: ");
        g_625f80->field_14(&cout, a1->field_4);
        v6 = g_625f80;
        v1 = "\n";
        v0 = &cout;
    }
    else
    {
        g_625f80->field_14(&cout, "Node using key token: ");
        v4 = 0;
        sub_48d0e0(&v5, 0, 24);
        sub_48d990(&v4, "%d", *(char *)a1->field_4);
        g_625f80->field_14(&cout, &v4);
        v6 = g_625f80;
        v1 = "\n";
        v0 = &cout;
    }
    v6->field_14(v0, v1);
    v2 = _INSERT(g_625f80->field_14(&cout, "Sentences of this node: \n\n"), 0, 0) | 0xffff0000;
    v3 = &PrintChatSentence__10CChatClassPQ210CChatClass13CChatSentence;
    v8 = *(int *)a1->field_0;
    if (*(int *)a1->field_0)
    {
        do
        {
            v9 = v8;
            v10 = v9->field_4;
            v3(a0 + (short)v2, v9->field_0);
            v8 = v10;
        } while (v9->field_4);
    }
    return g_625f80->field_14(&cout, "\nEnd node\n");
}

