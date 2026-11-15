// PrimaryAttack__12CTelekinesis @0x12a200 size=448
int PrimaryAttack__12CTelekinesis(float idx)
{
    int v19;  // eax
    int v0;  // [bp-0xbc]
    unsigned short v1;  // [bp-0xb8]
    unsigned short v2;  // [bp-0xb6]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x84]
    float v7;  // [bp-0x80]
    float v8;  // [bp-0x7c]
    char v9;  // [bp-0x64]
    float v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c]
    char v13;  // [bp-0x44]
    float v14;  // [bp-0x34]
    unsigned int v15;  // [bp-0x30]
    unsigned int v16;  // [bp-0x2c]
    unsigned int v17;  // [bp-0x28]

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
        return sub_48a400(idx);
    sub_48a800(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v9, *(int *)(*(unsigned int *)&idx + 128));
    *(char *)(*(unsigned int *)&idx + 516) = 1;
    v3 = 0;
    v4 = 0;
    v5 = -8096.0f;
    v6 = v10 + v3;
    v7 = v11 + v4;
    v8 = v12 + v5;
    sub_487b80(&v9, &v6, 1, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), &v13);
    if (1.0 > v14)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 496) = v15;
        *(unsigned int *)(*(unsigned int *)&idx + 500) = v16;
        *(unsigned int *)(*(unsigned int *)&idx + 504) = v17;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)((v12 - *(float *)(*(unsigned int *)&idx + 504)) * 3.0 / 20.0);
        v19 = v0 / 3 * 3 + 3;
        *(int *)(*(unsigned int *)&idx + 200) = v19;
        *(float *)(*(unsigned int *)&idx + 508) = 100.0f;
        if (v19 <= 8)
            goto LABEL_52a3a0;
        if (*(int *)(*(unsigned int *)&idx + 200) > 18)
        {
            *(float *)(*(unsigned int *)&idx + 508) = (float)((v12 - *(float *)(*(unsigned int *)&idx + 504)) * 3.0 / 3.6);
            *(unsigned int *)(*(unsigned int *)&idx + 200) = 18;
        }
    }
    else
    {
LABEL_52a3a0:
        *(unsigned int *)(*(unsigned int *)&idx + 200) = 9;
    }
    return sub_48a400(idx);
}

