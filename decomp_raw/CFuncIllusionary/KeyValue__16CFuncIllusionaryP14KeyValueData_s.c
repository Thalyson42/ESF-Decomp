// KeyValue__16CFuncIllusionaryP14KeyValueData_s @0x91450 size=356
typedef struct st_491450_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_491450_0;

typedef struct st_491450_1 {
    char padding_0[272];
    int field_110;
} st_491450_1;

int KeyValue__16CFuncIllusionaryP14KeyValueData_s(st_491450_1 **a0, st_491450_0 *a1)
{
    double v2;  // mm7
    unsigned short v0;  // [bp-0x8]
    unsigned short v1;  // [bp-0x6]

    if (strcmp@GLIBC_2.0(a1->field_4, "skin"))
        return CBaseToggle::KeyValue(a0, a1);
    __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    *a0->field_110 = (int)v2;
    a1->field_c = 1;
    return (int)v2;
}

