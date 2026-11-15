// PM_DrawBBox @0x18d2b0 size=304
extern unsigned int PM_boxpnt[4];
extern unsigned int PM_boxpnt+4[4];
extern unsigned int PM_boxpnt+8[4];
extern unsigned int PM_boxpnt+12[4];

unsigned int PM_DrawBBox(float *a0, float *a1, float *a2, int a3, int a4)
{
    int i;  // edi
    float *v9;  // eax
    int j;  // edi
    unsigned int v11;  // eax
    char *v0;  // [bp-0x8c]
    char *v1;  // [bp-0x88]
    float v2;  // [bp-0x84]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x7c]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    i = 0;
    v1 = &v3;
    v0 = &v4;
    do
    {
        v5 = (float)(!(i & 1) ? 0.0 + *a1 : *a0 - 0.0);
        v6 = (float)(!(i & 2) ? 0.0 + a1[1] : a0[1] - 0.0);
        v7 = (float)(!(i & 4) ? 0.0 + a1[2] : a0[2] - 0.0);
        v5 += *a2;
        v6 += a2[1];
        v7 += a2[2];
        v9 = i * 12;
        *(float *)(&v2 + v9) = v5;
        *(float *)(v9 + v1) = v6;
        *(float *)(v9 + v0) = v7;
        i += 1;
    } while (i <= 7);
    j = 0;
    do
    {
        v11 = PM_DrawRectangle(&(&v2)[3 * PM_boxpnt+4[4 * j]], &(&v2)[3 * PM_boxpnt[4 * j]], &(&v2)[3 * PM_boxpnt+8[4 * j]], &(&v2)[3 * PM_boxpnt+12[4 * j]], a3, a4);
        j += 1;
    } while (j <= 5);
    return v11;
}

