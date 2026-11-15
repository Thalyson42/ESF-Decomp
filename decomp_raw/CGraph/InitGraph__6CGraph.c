// InitGraph__6CGraph @0xdf100 size=239
typedef struct st_4df100_0 {
    char padding_0[12];
    int field_c;
    int field_10;
    int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    int field_24;
    char padding_28[8340];
    int field_20bc;
    char padding_20c0[4];
    unsigned int field_20c4;
    unsigned int field_20c8;
} st_4df100_0;

unsigned int InitGraph__6CGraph(st_4df100_0 *ptr)
{
    unsigned int v0;  // eax

    memset(ptr, 0, 12);
    if (ptr->field_10)
    {
        v0 = sub_48cf10(ptr->field_10);
        ptr->field_10 = 0;
    }
    if (ptr->field_c)
    {
        v0 = sub_48cf10(ptr->field_c);
        ptr->field_c = 0;
    }
    if (ptr->field_24)
    {
        v0 = sub_48cf10(ptr->field_24);
        ptr->field_24 = 0;
    }
    if (ptr->field_14)
    {
        v0 = sub_48cf10(ptr->field_14);
        ptr->field_14 = 0;
    }
    if (ptr->field_20bc)
    {
        v0 = sub_48cf10(ptr->field_20bc);
        ptr->field_20bc = 0;
    }
    ptr->field_18 = 0;
    ptr->field_1c = 0;
    ptr->field_20 = 0;
    ptr->field_20c4 = 0;
    ptr->field_20c8 = 0;
    return v0;
}

