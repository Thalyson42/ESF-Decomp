// set_unexpected__FPFv_v @0x1955f8 size=37
typedef struct st_5955f8_0 {
    char padding_0[227319];
    unsigned int field_377f7;
} st_5955f8_0;

unsigned int set_unexpected__FPFv_v(unsigned int a0)
{
    st_5955f8_0 *v2;  // ebx
    unsigned int v3;  // ebx
    unsigned int v4;  // edx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_5955f4(v0, &v1);
    v3 = &v2[2].padding_0[62691];
    v4 = *(int *)(v3 - 290020);
    *(unsigned int *)(v3 - 290020) = a0;
    return v4;
}

