// __8bad_cast @0x1982cc size=41
typedef struct st_5982cc_0 {
    char padding_0[505863];
    char field_7b807;
    char padding_7b808[8283];
    unsigned int field_7d863;
    char padding_7d867[2312];
    unsigned int field_7e16f;
} st_5982cc_0;

unsigned int * __8bad_cast(unsigned int *a0)
{
    st_5982cc_0 *v2;  // ebx
    unsigned int *v3;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5982c8(v0, &v1);
    v3 = &v2->field_7b807;
    *a0 = v3[2650];
    *a0 = v3[2071];
    return a0;
}

