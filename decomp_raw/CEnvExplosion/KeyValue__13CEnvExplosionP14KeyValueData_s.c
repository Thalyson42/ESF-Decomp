// KeyValue__13CEnvExplosionP14KeyValueData_s @0xb9f90 size=323
typedef struct st_4b9f90_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b9f90_0;

typedef struct st_4b9f90_1 {
    char padding_0[680];
    unsigned int field_2a8;
} st_4b9f90_1;

st_4b9f90_1 * KeyValue__13CEnvExplosionP14KeyValueData_s(st_4b9f90_1 *a0, st_4b9f90_0 *a1)
{
    st_4b9f90_1 *v0;  // eax

    v0 = sub_488af0(a1->field_4, "iMagnitude");
    if (v0)
    {
        a1->field_c = 0;
        return v0;
    }
    a0->field_2a8 = sub_48b500(a1->field_8, 0, 10, 0);
    a1->field_c = 1;
    return a0;
}

