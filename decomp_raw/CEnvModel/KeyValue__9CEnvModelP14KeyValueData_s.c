// KeyValue__9CEnvModelP14KeyValueData_s @0xb8740 size=356
typedef struct st_4b8740_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b8740_0;

typedef struct st_4b8740_1 {
    char padding_0[268];
    unsigned int field_10c;
} st_4b8740_1;

st_4b8740_1 * KeyValue__9CEnvModelP14KeyValueData_s(st_4b8740_1 **a0, st_4b8740_0 *a1)
{
    st_4b8740_1 *v0;  // eax

    if (strcmp@GLIBC_2.0(a1->field_4, "boundingbox"))
        return CBaseMonster::KeyValue(a0, a1);
    if (__strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0) == 1)
    {
        v0 = *a0;
        v0->field_10c = 0;
    }
    else
    {
        v0 = *a0;
        v0->field_10c = 2;
    }
    a1->field_c = 1;
    return v0;
}

