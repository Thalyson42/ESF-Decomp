// _._Q210CChatClass13CChatSentence @0x143d80 size=78
typedef struct st_543d80_0 {
    char padding_0[36];
    int field_24;
} st_543d80_0;

unsigned int _._Q210CChatClass13CChatSentence(st_543d80_0 *a0, unsigned int a1)
{
    unsigned int v0;  // eax

    if (a0->field_24)
    {
        if (a0->field_24)
            sub_48cc20(a0->field_24);
        a0->field_24 = 0;
    }
    v0 = a1;
    if ((char)v0 & 1)
        v0 = sub_48d4e0(a0);
    return v0;
}

