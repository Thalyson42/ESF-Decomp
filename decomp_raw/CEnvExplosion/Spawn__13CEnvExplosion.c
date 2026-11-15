// Spawn__13CEnvExplosion @0xba0e0 size=145
typedef struct st_4ba0e0_1 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
} st_4ba0e0_1;

typedef struct st_4ba0e0_0 {
    struct st_4ba0e0_1 *field_0;
    char padding_4[676];
    unsigned int field_2a8;
    unsigned int field_2ac;
} st_4ba0e0_0;

int Spawn__13CEnvExplosion(st_4ba0e0_0 *a0)
{
    double v2;  // mm7
    float v0;  // [bp-0xc]
    int v1;  // [bp-0x8], Other Possible Types: unsigned int

    a0->field_0->field_10c = 0;
    a0->field_0->field_118 = 128;
    a0->field_0->field_108 = 0;
    v1 = a0->field_2a8 - 50;
    v0 = (float)((double)(int)v1 * 0.6);
    v2 = v0;
    if (10.0 > v2)
        v2 = 10.0;
    __fnstcw();
    v1 = (int)v2;
    a0->field_2ac = v1;
    return v1;
}

