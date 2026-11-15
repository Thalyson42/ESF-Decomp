// ShootShield__13CShieldAttack @0x119d60 size=332
typedef struct st_519d60_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_519d60_0;

extern st_519d60_0 *gpGlobals;

int ShootShield__13CShieldAttack(double a0, float a1)
{
    unsigned int *v16;  // edx
    double v17;  // mm5
    double v18;  // mm5
    double v19;  // mm5
    unsigned short v0;  // [bp-0x8c]
    unsigned short v1;  // [bp-0x8a]
    int v2;  // [bp-0x88]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    unsigned int v6;  // [bp-0x64]
    unsigned int v7;  // [bp-0x60]
    unsigned int v8;  // [bp-0x5c]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    char v12;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v13;  // [bp-0x20]
    unsigned int v14;  // [bp-0x1c]

    sub_48a800(*(int *)*(int *)(*(unsigned int *)&a1 + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a1 + 128) + 96) + 480))(&v12, *(int *)(*(unsigned int *)&a1 + 128));
    v16 = &gpGlobals->field_28;
    v17 = 900.0 * gpGlobals->field_28;
    v9 = (float)v17;
    v18 = 900.0 * *(float *)&v16[1];
    v10 = (float)v18;
    v19 = 900.0 * *(float *)&v16[2];
    v11 = (float)v19;
    v6 = v12;
    v7 = v13;
    v8 = v14;
    v3 = (float)v17;
    v4 = (float)v18;
    v5 = (float)v19;
    sub_48aef0(a1);
    v1 = __fnstcw();
    v0 = v1 | 0xc00;
    v2 = (int)(a0 * (double)*(int *)(*(unsigned int *)&a1 + 208));
    sub_48af20(*(int *)*(int *)(*(unsigned int *)&a1 + 128), &v6, &v3, v2);
    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&a1 + 128) + 520), 1, "weapons/shieldha.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return sub_48d4f0(*(int *)(*(unsigned int *)&a1 + 128), "shield.wav");
}

