// ResetAllDT__6CSwoop @0x1239d0 size=70
unsigned int ResetAllDT__6CSwoop(int a0)
{
    int i;  // esi
    unsigned int v1;  // eax

    i = 0;
    do
    {
        v1 = CSwoop::ResetDT(a0, a0 + i * 16 + 24);
        i += 1;
    } while (i <= 5);
    return v1;
}

