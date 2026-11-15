// ThrowBean__5CBeanP9entvars_sG6VectorT2 @0x117790 size=128
typedef struct st_517790_3 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[364];
    unsigned int field_198;
} st_517790_3;

typedef struct st_517790_1 {
    unsigned int field_0;
} st_517790_1;

typedef struct st_517790_4 {
    char padding_0[520];
    unsigned int field_208;
} st_517790_4;

typedef struct st_517790_2 {
    struct st_517790_3 *field_0;
    char padding_4[92];
    struct st_517790_0 *field_60;
} st_517790_2;

typedef struct st_517790_0 {
    char padding_0[8];
    struct st_517790_1 *field_8;
} st_517790_0;

st_517790_2 * ThrowBean__5CBeanP9entvars_sG6VectorT2(st_517790_4 *a0, int a1, unsigned int *a2)
{
    st_517790_2 *v0;  // edi
    unsigned int *v1;  // edx

    v0 = GetClassPtr__H1Z5CBean_PX01_PX01(0);
    v0->field_60->field_8(v0);
    v0->field_0->field_198 = a0->field_208;
    UTIL_SetOrigin(v0->field_0, a1);
    v1 = v0->field_0;
    v1[8] = *a2;
    v1[9] = a2[1];
    v1[10] = a2[2];
    *(float *)&v0->field_0->padding_2c[240] = 0.5f;
    return v0;
}

