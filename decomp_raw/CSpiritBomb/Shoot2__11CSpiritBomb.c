// Shoot2__11CSpiritBomb @0x121240 size=728
typedef struct st_521240_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_521240_0;

extern st_521240_0 *gpGlobals;

double Shoot2__11CSpiritBomb(float idx)
{
    unsigned int *v21;  // edx
    unsigned int *v22;  // edx
    double v23;  // mm5
    double v24;  // mm5
    double v25;  // mm7
    double v26;  // mm6
    double v27;  // mm7
    double v0;  // [bp-0xac]
    float v1;  // [bp-0x98]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    float v5;  // [bp-0x78]
    float v6;  // [bp-0x74]
    float v7;  // [bp-0x70]
    float v8;  // [bp-0x6c]
    float v9;  // [bp-0x68]
    float v10;  // [bp-0x64]
    char v11;  // [bp-0x64]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    float v14;  // [bp-0x44]
    float v15;  // [bp-0x40]
    float v16;  // [bp-0x3c]
    float v17;  // [bp-0x24]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]

    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 824) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 208) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 216) = 0;
    sub_48c680(*(int *)(*(unsigned int *)&idx + 128), 0);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 356))(idx);
    if (*(int *)(*(unsigned int *)&idx + 196) <= 14)
    {
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        return 0.800000011920929;
    }
    sub_48d4f0(*(int *)(*(unsigned int *)&idx + 128), "spiritbomb_shoot.wav");
    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "weapons/spiritbomb_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    sub_48a800(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    v21 = &gpGlobals->field_28;
    v17 = gpGlobals->field_28;
    v18 = *(float *)&v21[1];
    v19 = *(float *)&v21[2];
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v11, *(int *)(*(unsigned int *)&idx + 128));
    v22 = &gpGlobals->field_28;
    v23 = 10.0 * gpGlobals->field_28;
    v2 = (float)v23;
    v24 = 10.0 * *(float *)&v22[1];
    v3 = (float)v24;
    v4 = (float)(10.0 * *(float *)&v22[2]);
    v14 = (float)(v23 + v10);
    v15 = (float)(v24 + v12);
    v16 = v13 + v4;
    sub_48d680(*(int *)(*(unsigned int *)&idx + 128), 6);
    v2 = v14;
    v3 = v15;
    v4 = v16;
    v25 = v17 * v17 + v18 * v18 + v19 * v19;
    v26 = sqrt(v25);
    if (isnan(v26))
        sub_487dc0(*(unsigned int *)&v25);
    else
        v25 = v26;
    v1 = (float)v25;
    if (v1 == 0.0f)
    {
        v8 = 0.0f;
        v9 = 0.0f;
        v10 = 1.0;
    }
    else
    {
        v27 = 1.0 / v1;
        v8 = (float)(v27 * v17);
        v9 = (float)(v27 * v18);
        v10 = (float)(v27 * v19);
    }
    v5 = (float)(1000.0 * v8);
    v6 = (float)(1000.0 * v9);
    v7 = (float)(1000.0 * v10);
    v0 = (float)((double)*(int *)(*(unsigned int *)&idx + 196) * 0.25 / 45.0);
    sub_48cfd0(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v2, &v5, *(int *)(*(unsigned int *)&idx + 196) * 3, v0, *(short *)(*(unsigned int *)&idx + 220));
    return v0;
}

