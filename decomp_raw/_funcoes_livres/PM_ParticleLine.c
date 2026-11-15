// PM_ParticleLine @0x18cd90 size=240
typedef struct st_58cd90_1 {
    unsigned int field_0;
} st_58cd90_1;

typedef struct st_58cd90_0 {
    char padding_0[324952];
    struct st_58cd90_1 *field_4f558;
} st_58cd90_0;

extern st_58cd90_0 *pmove;

char PM_ParticleLine(double a0, float *a1, float *a2, unsigned int a3, unsigned int a4, float a5)
{
    int idx;  // edx
    float v0;  // [bp-0x58]
    float i;  // [bp-0x54]
    float v2;  // [bp-0x50]
    int v3;  // [bp-0x4c]
    unsigned short v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x46]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    char v9;  // [bp-0x24]

    v2 = 2.0f;
    v6 = *a2 - *a1;
    v7 = a2[1] - a1[1];
    v8 = a2[2] - a1[2];
    VectorNormalize(&v6);
    v0 = v8;
    i = 0;
    if (i > v0)
        return 0;
    do
    {
        idx = 0;
        do
        {
            *(float *)&(&v9)[4 * idx] = i * (&v6)[idx] + a1[idx];
            idx += 1;
        } while (idx <= 2);
        v5 = __fnstcw();
        v4 = v5 | 0xc00;
        v3 = (int)a5;
        pmove->field_4f558(&v9, a3, a4, 0, v3);
        i += v2;
    } while (i <= v0);
    return 0;
}

