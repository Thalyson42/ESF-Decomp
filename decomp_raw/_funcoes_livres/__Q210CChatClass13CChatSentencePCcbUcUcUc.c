// __Q210CChatClass13CChatSentencePCcbUcUcUc @0x143d00 size=126
typedef struct st_543d00_0 {
    char field_0;
    char padding_1[35];
    int field_24;
    char field_28;
    char field_29;
    char field_2a;
    char field_2b;
} st_543d00_0;

st_543d00_0 * __Q210CChatClass13CChatSentencePCcbUcUcUc(st_543d00_0 *a0, char *a1, char a2, char a3, char a4, char a5)
{
    int v0;  // ecx
    char *v1;  // edi
    char *v2;  // edi
    int v3;  // eax

    v0 = -0x1;
    v1 = a1;
    do
    {
        v2 = v1;
    } while (v0 && (v0 -= 1, v1 = v2 + 1, *v2));
    v3 = sub_48c340(~v0);
    a0->field_24 = v3;
    a0->field_28 = a2;
    a0->field_29 = a3;
    a0->field_2a = a4;
    a0->field_2b = a5;
    sub_48e110(v3, a1);
    a0->field_0 = 0;
    return a0;
}

