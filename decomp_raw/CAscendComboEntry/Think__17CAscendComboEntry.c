// Think__17CAscendComboEntry @0x15c530 size=133
typedef struct st_55c530_1 {
    char padding_0[804];
    unsigned int field_324;
    char padding_328[1096];
    unsigned int field_770;
} st_55c530_1;

typedef struct st_55c530_0 {
    unsigned int field_0;
    struct st_55c530_1 *field_4;
    char padding_8[12];
    float field_14;
} st_55c530_0;

typedef struct st_55c530_2 {
    unsigned int field_0;
} st_55c530_2;

extern st_55c530_2 *gpGlobals;

unsigned int Think__17CAscendComboEntry(st_55c530_0 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_4->field_324)
        sub_48dbc0(a0->field_4);
    if (!a0->field_4->field_770 && a0->field_14 >= *(float *)gpGlobals)
    {
        v0 = sub_48c130(a0->field_4);
        if ((char)v0)
        {
            sub_489400(a0->field_4);
            return v0;
        }
    }
    a0->field_0 = 2;
    return v0;
}

