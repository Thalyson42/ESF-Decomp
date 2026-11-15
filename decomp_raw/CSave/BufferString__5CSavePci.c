// BufferString__5CSavePci @0x136200 size=68
int BufferString__5CSavePci(int a0, int a1, int a2)
{
    char v0;  // [bp-0x5]

    v0 = 0;
    CSave::BufferData(a0, a1, a2);
    return CSave::BufferData(a0, &v0, 1);
}

