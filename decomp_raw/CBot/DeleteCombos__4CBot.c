// DeleteCombos__4CBot @0x15ab00 size=70
typedef struct st_55ab00_0 {
    char padding_0[4208];
    int field_1070;
} st_55ab00_0;

unsigned int DeleteCombos__4CBot(st_55ab00_0 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a0->field_1070)
        return v1;
    if (a0->field_1070)
        v0 = sub_48dbd0(a0->field_1070, 3);
    a0->field_1070 = 0;
    return v0;
}

