// execute_cfa_insn @0x1964d4 size=937
typedef struct st_5964d4_0 {
    char padding_0[16];
    unsigned int field_10;
} st_5964d4_0;

unsigned int execute_cfa_insn(char *a0, st_5964d4_0 *a1, unsigned int *a2, unsigned int *a3)
{
    unsigned int v5;  // eax
    unsigned int v6;  // ebx
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    unsigned int idx;  // [bp-0xc]
    char v4;  // [bp-0x8], Other Possible Types: unsigned int

    sub_5964d0(v0, v1, v2);
    v5 = *a0;
    a0 += 1;
    if ((char)v5 & 64)
    {
        *a3 = *a3 + a2[2] * (v5 & 63);
        return a0;
    }
    if ((char)v5 < 0)
    {
        idx = v5 & 63;
        a0 = decode_uleb128(a0, &v4);
        v4 *= a2[3];
        a1[4].padding_0[12 + idx] = 1;
        (&a1->field_10)[idx] = v4;
        return a0;
    }
    if ((char)v5 & 192)
    {
        idx = v5 & 63;
        a1[4].padding_0[12 + idx] = 0;
        return a0;
    }
    if (v5 > 46)
    {
        abort@GLIBC_2.0();
        return a0;
    }
    goto *((void *)(v6 + 513530 - *(int *)(v6 + 513530 + v5 * 4 - 513372)));
}

