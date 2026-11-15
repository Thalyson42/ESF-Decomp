// copy_reg @0x194f70 size=97
int copy_reg(int a0, int a1, int a2)
{
    int v3;  // eax
    int v4;  // eax
    int v5;  // edx
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]

    sub_594f6c(v0, v1, v2);
    v3 = get_reg_addr(a0, a1, 0);
    v4 = get_reg_addr(a0, a2, 0);
    v5 = 4;
    if ((unsigned int)(a0 - 11) <= 7)
        v5 = 12;
    return sub_48c4b0(v4, v3, v5);
}

