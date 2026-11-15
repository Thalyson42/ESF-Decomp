// KeyValue__10CFuncTrainP14KeyValueData_s @0xe9aa0 size=324
typedef struct st_4e9aa0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4e9aa0_0;

typedef struct st_4e9aa0_1 {
    char padding_0[272];
    unsigned int field_110;
} st_4e9aa0_1;

unsigned int KeyValue__10CFuncTrainP14KeyValueData_s(st_4e9aa0_1 *a0, st_4e9aa0_0 *a1)
{
    unsigned int v0;  // eax

    if (strcmp@GLIBC_2.0(a1->field_4, "sounds"))
        return CBasePlatTrain::KeyValue(a0, a1);
    v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
    a0->field_110 = v0;
    a1->field_c = 1;
    return v0;
}

