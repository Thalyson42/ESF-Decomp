// _._9type_info @0x197f34 size=52
typedef struct st_597f34_0 {
    char padding_0[514676];
    unsigned int field_7da74;
} st_597f34_0;

typedef struct st_597f34_1 {
    char padding_0[4];
    unsigned int field_4;
} st_597f34_1;

unsigned int _._9type_info(st_597f34_1 *a0, char a1)
{
    st_597f34_0 *v1;  // ebx
    unsigned int v2;  // eax
    int v0;  // [bp-0x1c]

    sub_597f30(v0);
    v2 = v1->field_7da74;
    a0->field_4 = v2;
    if (!(a1 & 1))
        return v2;
    return sub_48d4e0(a0);
}

