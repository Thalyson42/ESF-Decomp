// FixedUnsigned16__Fff @0x131ff0 size=67
unsigned int FixedUnsigned16__Fff(float a0, float a1)
{
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(a0 * a1);
    if (v0 < 0)
        v0 = 0;
    if (v0 > 0xffff)
        v0 = 0xffff;
    return v0 & 0xffff;
}

