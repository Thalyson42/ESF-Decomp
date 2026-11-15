// KeyTokenIsInNodeList__10CChatClassPQ210CChatClass9CChatNodec @0x148ec0 size=38
typedef struct st_548ec0_1 {
    char field_0;
} st_548ec0_1;

typedef struct st_548ec0_0 {
    char padding_0[4];
    struct st_548ec0_1 *field_4;
    unsigned int field_8;
} st_548ec0_0;

int KeyTokenIsInNodeList__10CChatClassPQ210CChatClass9CChatNodec(unsigned int a0, st_548ec0_0 *a1, char a2)
{
    return (a1->field_8 == 2 ? _INSERT(a1->field_4, 0, a2 == *(char *)a1->field_4) : _INSERT(a1, 0, 0));
}

