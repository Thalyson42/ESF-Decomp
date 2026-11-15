// ClientPutInServer__FP7edict_s @0x9f760 size=91
typedef struct st_49f760_3 {
    struct st_49f760_0 *field_0;
    char padding_4[92];
    struct st_49f760_1 *field_60;
    char padding_64[1792];
    unsigned int field_764;
} st_49f760_3;

typedef struct st_49f760_0 {
    char padding_0[280];
    char field_118;
} st_49f760_0;

typedef struct st_49f760_2 {
    unsigned int field_0;
} st_49f760_2;

typedef struct st_49f760_1 {
    char padding_0[8];
    struct st_49f760_2 *field_8;
} st_49f760_1;

st_49f760_0 * ClientPutInServer__FP7edict_s(int a0)
{
    st_49f760_3 *v0;  // esi
    st_49f760_0 *v1;  // eax

    v0 = sub_48c260(a0 + 128);
    v0->field_764 = 0;
    sub_489b50(v0, -0x1);
    v0->field_60->field_8(v0);
    v1 = v0->field_0;
    v1->field_118 = v1->field_118 | 32;
    return v1;
}

