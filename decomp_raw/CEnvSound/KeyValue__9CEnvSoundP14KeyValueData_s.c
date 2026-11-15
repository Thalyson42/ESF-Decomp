// KeyValue__9CEnvSoundP14KeyValueData_s @0x11c590 size=597
typedef struct st_51c590_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_51c590_0;

unsigned int KeyValue__9CEnvSoundP14KeyValueData_s(float *a0, st_51c590_0 *a1)
{
    double v0;  // mm7
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    if (!sub_488af0(a1->field_4, "radius"))
    {
        sub_487fc0(a1->field_8, 0, 0);
        a0[25] = (float)v0;
        a1->field_c = 1;
    }
    v1 = sub_488af0(a1->field_4, "roomtype");
    if (v1)
        return v1;
    v2 = sub_487fc0(a1->field_8, 0, 0);
    a0[26] = (float)v0;
    a1->field_c = 1;
    return v2;
}

