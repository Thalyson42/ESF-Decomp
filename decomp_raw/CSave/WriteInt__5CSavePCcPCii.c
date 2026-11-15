// WriteInt__5CSavePCcPCii @0x1355f0 size=50
int WriteInt__5CSavePCcPCii(int a0, int a1, int a2, unsigned int a3)
{
    int v0;  // [bp-0x1c]

    return CSave::BufferField(a0, a1, a3 * 4, a2, v0);
}

