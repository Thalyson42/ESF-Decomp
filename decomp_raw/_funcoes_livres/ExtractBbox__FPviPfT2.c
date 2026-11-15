// ExtractBbox__FPviPfT2 @0x8ee80 size=93
typedef struct st_48ee80_0 {
    char padding_0[168];
    unsigned int field_a8;
} st_48ee80_0;

unsigned int ExtractBbox__FPviPfT2(st_48ee80_0 *a0, unsigned int a1, unsigned int *a2, unsigned int *a3)
{
    st_48ee80_0 *v0;  // edx
    unsigned int v1;  // eax

    if (!a0)
        return 0;
    v0 = &a0->padding_0[a0->field_a8];
    v1 = a1 * 176;
    *(float *)a2 = *(float *)&v0->padding_0[96 + v1];
    *(float *)&a2[1] = *(float *)&v0->padding_0[100 + v1];
    *(float *)&a2[2] = *(float *)&v0->padding_0[104 + v1];
    *(float *)a3 = *(float *)&v0->padding_0[108 + v1];
    *(float *)&a3[1] = *(float *)&v0->padding_0[112 + v1];
    *(float *)&a3[2] = *(float *)&v0->padding_0[116 + v1];
    return 1;
}

