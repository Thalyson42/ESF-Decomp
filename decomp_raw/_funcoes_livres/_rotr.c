// _rotr @0x135410 size=45
unsigned int _rotr(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // ecx
    unsigned int v2;  // ecx
    unsigned int v3;  // edx

    v0 = a1 & 31;
    v1 = v0 - 1;
    if (v0 < 1)
        return a0;
    do
    {
        v2 = v1;
        v3 = a0 >> 1;
        if (a0 & 1)
            v3 |= 0x80000000;
    } while ((a0 = v3, v1 = v2 - 1, v2 >= 1));
    return a0;
}

