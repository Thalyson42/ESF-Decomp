// UTIL_SharedRandomFloat__FUiff @0x131260 size=172
double UTIL_SharedRandomFloat__FUiff(unsigned int a0, float a1, float a2)
{
    int v0;  // [bp-0x4c]
    float v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    long long v3;  // [bp-0x10], Other Possible Types: unsigned long long
    unsigned short v4;  // [bp-0x8]
    unsigned short v5;  // [bp-0x6]

    v0 = *(unsigned int *)&a1 + a0 + *(unsigned int *)&a2;
    sub_489200(v0);
    sub_48a890(v0);
    sub_48a890();
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v3 = (long long)(a2 - a1);
    if (!(unsigned int)v3)
        return a1;
    v2 = sub_48a890() & 0xffff;
    v1 = (float)((double)(int)v2 * 1.52587890625e-05);
    v3 = (unsigned int)v3;
    return v1 * (double)(long long)v3 + a1;
}

