// ShouldSimplify__Fi @0xd4a70 size=31
unsigned int ShouldSimplify__Fi(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = _INSERT(a0, 0, (char)a0 & 127);
    if (v0 != 16 && !(*(char *)((void*)&v0 + 1) & 1))
        return 1;
    return 0;
}

