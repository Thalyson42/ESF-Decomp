// FixPlayerCrouchStuck__FP7edict_s @0xf8c40 size=106
unsigned int FixPlayerCrouchStuck__FP7edict_s(float a0)
{
    unsigned int v4;  // eax
    int i;  // [bp-0x48]
    char v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]

    for (i = 0; i <= 0x11; i += 1)
    {
        v4 = sub_488460(*(unsigned int *)&a0 + 0x88, *(unsigned int *)&a0 + 0x88, 0, 3, a0, &v1);
        if (!v2)
            return v4;
        *(float *)(*(unsigned int *)&a0 + 144) = (float)(1.0 + *(float *)(*(unsigned int *)&a0 + 144));
    }
    return v4;
}

