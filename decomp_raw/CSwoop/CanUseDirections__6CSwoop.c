// CanUseDirections__6CSwoop @0x123f20 size=156
typedef struct st_523f20_0 {
    char padding_0[140];
    struct st_523f20_1 *field_8c;
} st_523f20_0;

typedef struct st_523f20_2 {
    char padding_0[96];
    struct st_523f20_0 *field_60;
    char padding_64[708];
    unsigned int field_328;
    unsigned int field_32c;
    unsigned int field_330;
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    unsigned int field_340;
    char padding_344[32];
    unsigned int field_364;
    char padding_368[64];
    unsigned int field_3a8;
    char padding_3ac[784];
    unsigned int field_6bc;
    char padding_6c0[176];
    unsigned int field_770;
} st_523f20_2;

typedef struct st_523f20_1 {
    unsigned int field_0;
} st_523f20_1;

typedef struct st_523f20_3 {
    char padding_0[120];
    struct st_523f20_2 *field_78;
} st_523f20_3;

unsigned int CanUseDirections__6CSwoop(st_523f20_3 *a0)
{
    st_523f20_2 *v0;  // edx
    st_523f20_2 *v1;  // eax

    v0 = a0->field_78;
    if (!v0->field_364 && !v0->field_330 && !v0->field_334 && !v0->field_33c && v0->field_60->field_8c(v0))
    {
        v1 = a0->field_78;
        if (!v1->field_328 && !v1->field_340 && !v1->field_770 && !v1->field_6bc && !v1->field_3a8 && !v1->field_32c)
            return 1;
    }
    return 0;
}

