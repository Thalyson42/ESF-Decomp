// __eh_alloc @0x1956bc size=49
unsigned int __eh_alloc(int a0)
{
    unsigned int v1;  // eax
    int v0;  // [bp-0x1c]

    sub_5956b8(v0);
    v1 = malloc@GLIBC_2.0(a0);
    if (v1)
        return v1;
    return terminate();
}

