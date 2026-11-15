// Think__19CFallDownComboEntry @0x15c3b0 size=125
typedef struct st_55c3b0_2 {
    unsigned int field_0;
    struct st_55c3b0_1 *field_4;
    char padding_8[12];
    float field_14;
} st_55c3b0_2;

typedef struct st_55c3b0_1 {
    struct st_55c3b0_0 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[1772];
    char field_a10;
    char padding_a11[3];
    float field_a14;
} st_55c3b0_1;

typedef struct st_55c3b0_0 {
    char padding_0[421];
    char field_1a5;
} st_55c3b0_0;

typedef struct st_55c3b0_3 {
    unsigned int field_0;
} st_55c3b0_3;

extern st_55c3b0_3 *gpGlobals;

st_55c3b0_0 * Think__19CFallDownComboEntry(st_55c3b0_2 *a0)
{
    st_55c3b0_0 *v0;  // eax

    if (a0->field_4->field_320)
        sub_48c5a0(a0->field_4);
    a0->field_4->field_a10 = 0;
    a0->field_4->field_a14 = (float)(1.2 + *(float *)gpGlobals);
    if (a0->field_14 >= *(float *)gpGlobals)
    {
        v0 = a0->field_4->field_0;
        if (!(v0->field_1a5 & 2))
            return v0;
    }
    a0->field_0 = 2;
    return v0;
}

