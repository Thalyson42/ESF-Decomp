// HandleGrabDefend__12CPlayerMelee @0x10ab20 size=140
unsigned int HandleGrabDefend__12CPlayerMelee(float a0)
{
    double v4;  // mm5
    unsigned int v5;  // eax
    int v0;  // [bp-0x1c]
    unsigned short v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0x16]

    v4 = *(float *)(*(int *)(*(unsigned int *)&a0 + 308) + 156) / 100.0;
    if (v4 < 0.333333)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(100.0 * -(3.0000030994415283 * v4));
        v5 = sub_48bcc0(a0, v0);
        return v5;
    }
    if (!*(int *)(*(unsigned int *)&a0 + 56))
        return v5;
    sub_48a130(a0);
    return v5;
}

