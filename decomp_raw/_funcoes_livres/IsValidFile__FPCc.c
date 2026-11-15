// IsValidFile__FPCc @0x16d130 size=67
char IsValidFile__FPCc(int a0)
{
    int v0;  // eax

    v0 = fopen@GLIBC_2.1(a0, "r");
    if (v0)
    {
        fclose@GLIBC_2.1(v0);
        return 1;
    }
    return 0;
}

