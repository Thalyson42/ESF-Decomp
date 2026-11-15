// Drop__9CEnvModel @0xb96f0 size=161
int Drop__9CEnvModel(float idx)
{
    unsigned int *v4;  // edx
    unsigned int *v5;  // edx
    unsigned int *v6;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    sub_488f20(idx);
    v4 = *(int *)idx;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v4[8] = v0;
    v4[9] = v1;
    v4[10] = v2;
    v5 = *(int *)idx;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v5[23] = v0;
    v5[24] = v1;
    v5[25] = v2;
    v6 = *(int *)idx;
    *(float *)&v6[71] = 9.800000190734863f;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 680) = 0;
    return v6;
}

