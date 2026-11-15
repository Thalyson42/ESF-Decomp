// KeyValue__8CNodeEntP14KeyValueData_s @0xe1a00 size=593
typedef struct st_4e1a00_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4e1a00_0;

unsigned int KeyValue__8CNodeEntP14KeyValueData_s(unsigned short *a0, st_4e1a00_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "hinttype"))
    {
        a0[50] = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a1->field_c = 1;
    }
    v0 = strcmp@GLIBC_2.0(a1->field_4, "activity");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
    a0[0x33] = v1;
    a1->field_c = 1;
    return v1;
}

