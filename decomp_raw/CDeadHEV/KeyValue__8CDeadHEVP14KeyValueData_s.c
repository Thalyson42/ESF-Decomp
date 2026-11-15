// KeyValue__8CDeadHEVP14KeyValueData_s @0xfe020 size=324
typedef struct st_4fe020_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4fe020_0;

typedef struct st_4fe020_1 {
    char padding_0[680];
    unsigned int field_2a8;
} st_4fe020_1;

unsigned int KeyValue__8CDeadHEVP14KeyValueData_s(st_4fe020_1 *a0, st_4fe020_0 *a1)
{
    unsigned int v0;  // eax

    if (strcmp@GLIBC_2.0(a1->field_4, "pose"))
        return CBaseMonster::KeyValue(a0, a1);
    v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
    a0->field_2a8 = v0;
    a1->field_c = 1;
    return v0;
}

