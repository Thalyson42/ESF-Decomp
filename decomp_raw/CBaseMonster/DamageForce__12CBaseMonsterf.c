// DamageForce__12CBaseMonsterf @0xa61c0 size=91
typedef struct st_4a61c0_0 {
    char padding_0[244];
    float field_f4;
    float field_f8;
    float field_fc;
} st_4a61c0_0;

double DamageForce__12CBaseMonsterf(st_4a61c0_0 **a0, float a1)
{
    float *v1;  // eax
    double v2;  // mm7
    float v0;  // [bp-0x8]

    v1 = *a0;
    v0 = (float)(1152.0 / (v1[61] * v1[62] * v1[63]) * a1 * 5.0);
    v2 = v0;
    if (v2 > 1000.0)
        v2 = 1000.0;
    return v2;
}

