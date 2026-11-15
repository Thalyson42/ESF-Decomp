// DispatchUse__FP7edict_sT0 @0x9c350 size=93
typedef struct st_49c350_4 {
    char padding_0[124];
    unsigned int field_7c;
} st_49c350_4;

typedef struct st_49c350_0 {
    char padding_0[184];
    struct st_49c350_1 *field_b8;
} st_49c350_0;

typedef struct st_49c350_1 {
    unsigned int field_0;
} st_49c350_1;

typedef struct st_49c350_3 {
    char padding_0[124];
    struct st_49c350_2 *field_7c;
    char padding_80[295];
    char field_1a7;
} st_49c350_3;

typedef struct st_49c350_2 {
    struct st_49c350_3 *field_0;
    char padding_4[92];
    struct st_49c350_0 *field_60;
} st_49c350_2;

st_49c350_3 * DispatchUse__FP7edict_sT0(st_49c350_3 *a0, st_49c350_4 *a1)
{
    st_49c350_3 *v0;  // eax
    st_49c350_2 *v1;  // edx
    unsigned int v2;  // ecx

    v0 = a0;
    v1 = (!v0 ? NULL : v0->field_7c);
    v2 = (!a1 ? 0 : a1->field_7c);
    if (v1)
    {
        v0 = v1->field_0;
        if (!(v1->field_0->field_1a7 & 64))
            v0 = v1->field_60->field_b8(v1, v2, v2, 3, 0);
    }
    return v0;
}

