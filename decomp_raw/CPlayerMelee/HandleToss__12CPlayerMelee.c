// HandleToss__12CPlayerMelee @0x101e70 size=160
unsigned int HandleToss__12CPlayerMelee(float a0)
{
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    if (sub_488d30(a0))
        return sub_48d400(a0);
    v4 = sub_488db0(a0);
    if (v4)
        return v4;
    v5 = sub_48b9f0(a0);
    if (v5)
        return v5;
    sub_48d8d0(a0);
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)-((*(float *)(*(unsigned int *)&a0 + 8) - *(float *)(*(unsigned int *)&a0 + 12)) / (*(float *)(*(unsigned int *)&a0 + 4) - *(float *)(*(unsigned int *)&a0 + 12)) * 100.0);
    return sub_48bcc0(a0, v0);
}

