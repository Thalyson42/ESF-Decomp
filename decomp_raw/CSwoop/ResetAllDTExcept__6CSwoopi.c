// ResetAllDTExcept__6CSwoopi @0x123a20 size=75
unsigned int ResetAllDTExcept__6CSwoopi(int a0, int a1)
{
    int v0;  // esi
    unsigned int v1;  // eax

    v0 = 0;
    do
    {
        if (v0 != a1)
            v1 = sub_48d4a0(a0, a0 + v0 * 16 + 24);
    } while ((v0 += 1, v0 <= 5));
    return v1;
}

