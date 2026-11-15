// FLSoundVolume__12CBaseMonsterP6CSound @0xd3ec0 size=133
typedef struct st_4d3ec0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4d3ec0_0;

typedef struct st_4d3ec0_1 {
    float field_0;
    float field_4;
    float field_8;
    char padding_c[4];
    int field_10;
} st_4d3ec0_1;

double FLSoundVolume__12CBaseMonsterP6CSound(st_4d3ec0_0 **a0, st_4d3ec0_1 *a1)
{
    unsigned int *v4;  // edx
    float v5;  // 112
    float v6;  // 112
    float v7;  // 112
    double v8;  // mm7
    double v9;  // mm6
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    v4 = &*a0->field_8;
    v5 = a1->field_0 - *a0->field_8;
    v1 = v5;
    v6 = a1->field_4 - *(float *)&v4[1];
    v2 = v6;
    v7 = a1->field_8 - *(float *)&v4[2];
    v3 = v7;
    v8 = v5 * v5 + v6 * v6 + v7 * v7;
    v9 = sqrt(v8);
    if (isnan(v9))
        sqrt(*(unsigned int *)&v8);
    else
        v8 = v9;
    v0 = (float)v8;
    return (double)a1->field_10 - v0;
}

