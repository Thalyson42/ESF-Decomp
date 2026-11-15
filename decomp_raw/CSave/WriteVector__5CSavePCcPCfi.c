// WriteVector__5CSavePCcPCfi @0x135840 size=71
int WriteVector__5CSavePCcPCfi(int a0, int a1, int a2, unsigned int a3)
{
    CSave::BufferHeader(a0, a1, a3 * 12);
    return CSave::BufferData(a0, a2, a3 * 12);
}

