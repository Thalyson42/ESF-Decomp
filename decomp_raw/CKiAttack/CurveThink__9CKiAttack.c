// CurveThink__9CKiAttack @0xcc660 size=238
typedef struct st_4cc660_0 {
    float field_0;
} st_4cc660_0;

extern st_4cc660_0 *gpGlobals;

unsigned int * CurveThink__9CKiAttack(float idx)
{
    float v13;  // 128
    unsigned int *v14;  // edx
    unsigned int *v15;  // edx
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    float v3;  // [bp-0x64]
    float v4;  // [bp-0x60]
    float v5;  // [bp-0x5c]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]

    v13 = *(float *)gpGlobals - *(float *)(*(unsigned int *)&idx + 0x300);
    v14 = *(int *)idx;
    v3 = *(float *)(*(unsigned int *)&idx + 744) + *(float *)(*(unsigned int *)&idx + 732);
    v4 = *(float *)(*(unsigned int *)&idx + 748) + *(float *)(*(unsigned int *)&idx + 736);
    v5 = *(float *)(*(unsigned int *)&idx + 752) + *(float *)(*(unsigned int *)&idx + 740);
    v0 = v13 * *(float *)(*(unsigned int *)&idx + 756);
    v1 = v13 * *(float *)(*(unsigned int *)&idx + 760);
    v2 = v13 * *(float *)(*(unsigned int *)&idx + 764);
    v6 = v3 - v0;
    v7 = v4 - v1;
    v8 = v5 - v2;
    *(float *)&v14[8] = v6;
    *(float *)&v14[9] = v7;
    *(float *)&v14[10] = v8;
    v15 = *(int *)idx + 32;
    *(float *)&v9 = *(float *)(*(int *)idx + 32);
    *(float *)&v10 = *(float *)&v15[1];
    *(float *)&v11 = *(float *)&v15[2];
    sub_48ac10(idx);
    *(float *)(*(int *)idx + 260) = (float)(0.05 + *(float *)gpGlobals);
    return gpGlobals;
}

