// __eq__C9type_infoRC9type_info @0x197f6c size=64
char __eq__C9type_infoRC9type_info(int *a0, int *a1)
{
    int v0;  // [bp-0x1c]
    char v1;  // [bp-0x5]

    sub_597f68(v0);
    v1 = 0;
    if (a1 != a0 && strcmp@GLIBC_2.0(*a0, *a1))
        return v1;
    v1 = 1;
    return v1;
}

