// KeyValue__8CSpeakerP14KeyValueData_s @0x11e8f0 size=320
typedef struct st_51e8f0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_51e8f0_0;

typedef struct st_51e8f0_1 {
    char padding_0[100];
    unsigned int field_64;
} st_51e8f0_1;

st_51e8f0_1 * KeyValue__8CSpeakerP14KeyValueData_s(st_51e8f0_1 *a0, st_51e8f0_0 *a1)
{
    st_51e8f0_1 *v0;  // eax

    v0 = strcmp@GLIBC_2.0(a1->field_4, "preset");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    a0->field_64 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
    a1->field_c = 1;
    return a0;
}

