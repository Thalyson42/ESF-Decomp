// Think__22CSwoopAWhileComboEntry @0x15c8d0 size=87
typedef struct st_55c8d0_1 {
    unsigned int field_0;
    struct st_55c8d0_2 *field_4;
    char padding_8[12];
    float field_14;
} st_55c8d0_1;

typedef struct st_55c8d0_0 {
    char padding_0[264];
    unsigned int field_108;
} st_55c8d0_0;

typedef struct st_55c8d0_2 {
    struct st_55c8d0_0 *field_0;
} st_55c8d0_2;

typedef struct st_55c8d0_3 {
    unsigned int field_0;
} st_55c8d0_3;

extern st_55c8d0_3 *gpGlobals;

st_55c8d0_3 ** Think__22CSwoopAWhileComboEntry(st_55c8d0_1 *a0)
{
    if (*(int *)(*(int *)a0->field_4 + 264) == 11)
    {
        sub_48c350(a0->field_4);
        if (a0->field_14 >= *(float *)gpGlobals)
            return &gpGlobals;
    }
    a0->field_0 = 2;
    return &gpGlobals;
}

