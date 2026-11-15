// TaskThink__17CAbsorbHealthTask @0x186240 size=276
unsigned int TaskThink__17CAbsorbHealthTask(float idx)
{
    unsigned int v6;  // eax
    int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x28]
    unsigned short v2;  // [bp-0x24]
    unsigned short v3;  // [bp-0x22]
    float v4;  // [bp-0x8]

    if ((double)*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 588) > *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 480))
    {
        v3 = __fnstcw();
        v2 = v3 | 0xc00;
        v1 = (int)*(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608);
        *(unsigned int *)&v4 = v1;
        if (v4 >= 100.0f && !*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 892))
        {
            *(unsigned short *)&v0 = 0;
            sub_48ab70(*(int *)(*(unsigned int *)&idx + 8), v0);
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 12) + 456) = 0;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 12) + 476) = 19;
            *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 460) = 25.0f;
            *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 464) = 125.0f;
            *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 468) = 255.0f;
            *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 472) = 255.0f;
            sub_48d0d0(*(int *)(*(unsigned int *)&idx + 8));
            v6 = sub_48a930(idx);
            if ((char)v6)
                return v6;
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return v6;
}

