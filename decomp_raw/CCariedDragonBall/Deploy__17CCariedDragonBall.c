// Deploy__17CCariedDragonBall @0xaec00 size=127
typedef struct st_4aec00_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4aec00_0;

extern unsigned int dragonball_pmodels[4];
extern st_4aec00_0 *gpGlobals;

int Deploy__17CCariedDragonBall(double a0, float idx)
{
    double v5;  // mm0
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    float v3;  // [bp-0x8]

    *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 192) = *(int *)((char *)&dragonball_pmodels[*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 1888)] - 4) - gpGlobals->field_98;
    sub_488640(v0, v1, v2);
    v3 = (float)(a0 + 0.75);
    v5 = v3;
    *(float *)(*(unsigned int *)&idx + 160) = (float)v5;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v5;
    return sub_489360(idx, "dragonball");
}

