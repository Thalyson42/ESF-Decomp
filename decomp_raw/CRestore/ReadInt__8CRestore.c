// ReadInt__8CRestore @0x136a20 size=54
int ReadInt__8CRestore(int a0)
{
    unsigned int v0;  // [bp-0x8]

    v0 = 0;
    CRestore::BufferReadBytes(a0, &v0, 4);
    return v0;
}

