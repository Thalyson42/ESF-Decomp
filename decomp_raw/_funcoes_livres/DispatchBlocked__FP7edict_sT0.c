// DispatchBlocked__FP7edict_sT0 @0x9c430 size=77
typedef struct st_49c430_4 {
    char padding_0[124];
    unsigned int field_7c;
} st_49c430_4;

typedef struct st_49c430_3 {
    char padding_0[124];
    struct st_49c430_2 *field_7c;
} st_49c430_3;

typedef struct st_49c430_0 {
    char padding_0[188];
    struct st_49c430_1 *field_bc;
} st_49c430_0;

typedef struct st_49c430_1 {
    unsigned int field_0;
} st_49c430_1;

typedef struct st_49c430_2 {
    char padding_0[96];
    struct st_49c430_0 *field_60;
} st_49c430_2;

st_49c430_3 * DispatchBlocked__FP7edict_sT0(st_49c430_3 *a0, st_49c430_4 *a1)
{
    st_49c430_3 *v0;  // eax
    st_49c430_2 *v1;  // edx

    v0 = a0;
    v1 = (!v0 ? NULL : v0->field_7c);
    if (v1)
        v0 = v1->field_60->field_bc(v1, (!a1 ? 0 : a1->field_7c));
    return v0;
}

