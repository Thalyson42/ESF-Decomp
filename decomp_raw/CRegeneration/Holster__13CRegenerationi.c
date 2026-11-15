// Holster__13CRegenerationi @0x10de70 size=123
typedef struct st_50de70_2 {
    char padding_0[128];
    struct st_50de70_1 *field_80;
} st_50de70_2;

typedef struct st_50de70_1 {
    struct st_50de70_0 *field_0;
    char padding_4[816];
    unsigned int field_334;
    char padding_338[1052];
    unsigned int field_754;
} st_50de70_1;

typedef struct st_50de70_0 {
    char padding_0[520];
    unsigned int field_208;
} st_50de70_0;

st_50de70_1 * Holster__13CRegenerationi(st_50de70_2 *a0)
{
    st_50de70_1 *v0;  // eax

    v0 = a0->field_80;
    if (v0->field_334)
    {
        v0->field_334 = 0;
        a0->field_80->field_754 = 0x3f800000;
        v0 = sub_489390(a0->field_80->field_0->field_208, 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    return v0;
}

