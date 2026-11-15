// KeyValue__17CFrictionModifierP14KeyValueData_s @0x12a890 size=326
typedef struct st_52a890_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_52a890_0;

typedef struct st_52a890_1 {
    char padding_0[100];
    float field_64;
} st_52a890_1;

double KeyValue__17CFrictionModifierP14KeyValueData_s(st_52a890_1 *a0, st_52a890_0 *a1)
{
    double v0;  // mm7
    double v1;  // mm7

    if (strcmp@GLIBC_2.0(a1->field_4, "modifier"))
    {
        a1->field_c = 0;
        return v1;
    }
    __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
    a0->field_64 = (float)(v0 / 100.0);
    a1->field_c = 1;
    return v0 / 100.0;
}

