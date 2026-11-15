// KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc @0x148e70 size=73
typedef struct st_548e70_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
} st_548e70_0;

char KeyWordIsInNodeList__10CChatClassPQ210CChatClass9CChatNodePCc(unsigned int a0, st_548e70_0 *a1, char *a2)
{
    if (a1->field_8 != 2 && a2 && *a2)
        return !strcasecmp@GLIBC_2.0(a2, a1->field_4);
    return 0;
}

