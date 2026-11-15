// decode_sleb128 @0x195e2c size=72
char * decode_sleb128(char *a0, unsigned int *a1)
{
    unsigned int v0;  // esi
    unsigned int v1;  // edi
    unsigned int v2;  // esi
    unsigned int v3;  // edx

    v0 = 0;
    v1 = 0;
    do
    {
        v2 = v0 + 7;
        v3 = *a0;
        a0 += 1;
        v1 |= (v3 & 127) << ((char)v0 & 31);
        v0 = v2;
    } while ((char)v3 < 0);
    if (v2 <= 31 && (char)v3 & 64)
        v1 |= 0xffffffff << ((char)v2 & 31);
    *a1 = v1;
    return a0;
}

