// anglemod @0x18d4d0 size=84
float anglemod(float a0)
{
    int v0;  // [bp-0x1c], Other Possible Types: unsigned int
    float v1;  // [bp-0x8]

    __fnstcw();
    v0 = (int)(182.04444444444445 * a0);
    v0 &= 0xffff;
    v1 = (float)((double)(int)v0 * 0.0054931640625);
    return v1;
}

