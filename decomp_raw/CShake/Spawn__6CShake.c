// Spawn__6CShake @0xb5930 size=79
typedef struct st_4b5930_0 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[20];
    unsigned int field_130;
    char padding_134[108];
    char field_1a0;
    char padding_1a1[63];
    unsigned int field_1e0;
} st_4b5930_0;

st_4b5930_0 * Spawn__6CShake(st_4b5930_0 **a0)
{
    st_4b5930_0 *v0;  // eax

    *a0->field_10c = 0;
    *a0->field_108 = 0;
    *a0->field_118 = 0;
    *a0->field_130 = 0;
    v0 = *a0;
    if (v0->field_1a0 & 1)
        v0->field_1e0 = 0;
    return v0;
}

