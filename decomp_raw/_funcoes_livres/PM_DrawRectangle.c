// PM_DrawRectangle @0x18ce80 size=128
int PM_DrawRectangle(int a0, int a1, int a2, int a3, int a4, int a5)
{
    sub_48dcf0(a0, a1, a4, a5, 0);
    sub_48dcf0(a1, a3, a4, a5, 0);
    sub_48dcf0(a3, a2, a4, a5, 0);
    return sub_48dcf0(a2, a0, a4, a5, 0);
}

