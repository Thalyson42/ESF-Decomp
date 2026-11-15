// RadiusDamage__12CBaseMonsterP9entvars_sT1fii @0xa6560 size=114
typedef struct st_4a6560_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4a6560_0;

int RadiusDamage__12CBaseMonsterP9entvars_sT1fii(st_4a6560_0 **a0, int a1, int a2, float a3, int a4, int a5)
{
    unsigned int *v4;  // edx
    float v0;  // [bp-0x28]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    v4 = &*a0->field_8;
    v1 = *a0->field_8;
    v2 = *(float *)&v4[1];
    v3 = *(float *)&v4[2];
    v0 = (float)(2.5 * a3);
    return sub_48ab00(&v1, a1, a2, a3, v0, a4, a5);
}

