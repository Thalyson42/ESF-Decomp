// PlayerPostThink__FP7edict_s @0xa1030 size=60
typedef struct st_4a1030_3 {
    char padding_0[124];
    struct st_4a1030_2 *field_7c;
} st_4a1030_3;

typedef struct st_4a1030_1 {
    unsigned int field_0;
} st_4a1030_1;

typedef struct st_4a1030_0 {
    char padding_0[512];
    struct st_4a1030_1 *field_200;
} st_4a1030_0;

typedef struct st_4a1030_2 {
    char padding_0[96];
    struct st_4a1030_0 *field_60;
} st_4a1030_2;

st_4a1030_3 * PlayerPostThink__FP7edict_s(st_4a1030_3 *a0)
{
    st_4a1030_3 *v0;  // eax
    st_4a1030_2 *v1;  // edx

    v0 = a0;
    v1 = (!v0 ? NULL : v0->field_7c);
    if (v1)
        v0 = v1->field_60->field_200(v1);
    return v0;
}

