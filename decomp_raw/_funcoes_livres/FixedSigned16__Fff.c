// FixedSigned16__Fff @0x132040 size=69
int FixedSigned16__Fff(float a0, float a1)
{
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(a0 * a1);
    if (v0 > 0x7fff)
        v0 = 0x7fff;
    if (v0 < -0x8000)
        v0 = -0x8000;
    return (short)v0;
}

