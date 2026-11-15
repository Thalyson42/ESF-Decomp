// decode_uleb128 @0x195de0 size=74
char * decode_uleb128(char *iter, unsigned int *a1)
{
    unsigned int v0;  // edi
    unsigned int v1;  // eax
    unsigned int v2;  // esi
    unsigned int v3;  // edx

    v0 = 0;
    v1 = *iter;
    iter += 1;
    v2 = v1 & 127;
    if ((char)v1 < 0)
    {
        do
        {
            v0 += 7;
            v3 = *iter;
            iter += 1;
            v2 |= (v3 & 127) << ((char)v0 & 31);
        } while ((char)v3 < 0);
    }
    *a1 = v2;
    return iter;
}

