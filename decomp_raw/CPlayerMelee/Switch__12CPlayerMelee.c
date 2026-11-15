// Switch__12CPlayerMelee @0x103450 size=229
unsigned int Switch__12CPlayerMelee(float idx)
{
    unsigned int *v3;  // esi
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v0;  // [bp-0xc]
    float v1;  // [bp-0x8]

    v3 = *(int *)(*(unsigned int *)&idx + 304);
    v1 = -1.0f;
    v0 = v3[60];
    if (!v3[60])
    {
        if (!v3[59])
            return sub_489040(idx);
LABEL_5034d2:
        v0 = v3[60];
    }
    else
    {
        if (v3[59])
            goto LABEL_5034d2;
        sub_487b30(v3);
        v1 = -1.0f;
        sub_48d580(idx, *(int *)(*(unsigned int *)&idx + 192), *(int *)(*(unsigned int *)&idx + 188));
        v1 = (float)(-1.0 * v1);
    }
    v4 = sub_489000(idx, v3, v1, 3);
    *(unsigned int *)(*(unsigned int *)&idx + 236) = 0;
    v3[59] = 0;
    if (!v0)
        return v4;
    v5 = sub_48a0b0(v3, v3[82], *(int *)(*(unsigned int *)&idx + 332));
    if (v5)
        return v5;
    return sub_489c80(v3);
}

