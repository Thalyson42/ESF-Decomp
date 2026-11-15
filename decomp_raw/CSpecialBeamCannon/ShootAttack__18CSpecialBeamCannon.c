// ShootAttack__18CSpecialBeamCannon @0x11feb0 size=359
typedef struct st_51feb0_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_51feb0_0;

extern st_51feb0_0 *gpGlobals;

double ShootAttack__18CSpecialBeamCannon(float a0)
{
    unsigned int *v27;  // edx
    double v28;  // mm5
    double v37;  // mm2
    double v38;  // mm0
    double v29;  // mm5
    double v30;  // mm5
    double v31;  // mm5
    double v32;  // mm5
    double v33;  // mm5
    unsigned int *v34;  // edx
    double v35;  // mm2
    double v36;  // mm2
    unsigned int v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x9c]
    unsigned int v2;  // [bp-0x98]
    unsigned int v3;  // [bp-0x94]
    unsigned int v4;  // [bp-0x90]
    unsigned int v5;  // [bp-0x8c]
    unsigned int v6;  // [bp-0x88]
    unsigned short v7;  // [bp-0x6c]
    unsigned short v8;  // [bp-0x6a]
    unsigned int v9;  // [bp-0x68]
    int v10;  // [bp-0x68]
    float v11;  // [bp-0x64]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    float v14;  // [bp-0x58]
    float v15;  // [bp-0x54]
    float v16;  // [bp-0x50]
    float v17;  // [bp-0x4c]
    float v18;  // [bp-0x48]
    char v19;  // [bp-0x44]
    float v20;  // [bp-0x44]
    float v21;  // [bp-0x40]
    float v22;  // [bp-0x3c]
    float v23;  // [bp-0x24]
    float v24;  // [bp-0x20]
    float v25;  // [bp-0x1c]

    sub_48a800(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v19, *(int *)(*(unsigned int *)&a0 + 128));
    v27 = &gpGlobals->field_28;
    v28 = 10.0 * gpGlobals->field_28;
    v11 = (float)v28;
    v29 = 10.0 * *(float *)&v27[1];
    v12 = (float)v29;
    v30 = 10.0 * *(float *)&v27[2];
    v13 = (float)v30;
    v31 = v28 + v20;
    v23 = (float)v31;
    v32 = v29 + v21;
    v24 = (float)v32;
    v33 = v30 + v22;
    v25 = (float)v33;
    v34 = &gpGlobals->field_28;
    v35 = 1700.0 * gpGlobals->field_28;
    v11 = (float)v35;
    v36 = 1700.0 * *(float *)&v34[1];
    v12 = (float)v36;
    v37 = 1700.0 * *(float *)&v34[2];
    v13 = (float)v37;
    v14 = (float)v31;
    v15 = (float)v32;
    v16 = (float)v33;
    v17 = (float)v35;
    v18 = (float)v36;
    v20 = (float)v37;
    v6 = 4;
    v5 = *(short *)(*(unsigned int *)&a0 + 482);
    v4 = *(short *)(*(unsigned int *)&a0 + 480);
    v3 = *(short *)(*(unsigned int *)&a0 + 474);
    v2 = *(short *)(*(unsigned int *)&a0 + 478);
    v1 = *(short *)(*(unsigned int *)&a0 + 476);
    v0 = *(short *)(*(unsigned int *)&a0 + 472);
    sub_48aef0(a0);
    v9 = *(int *)(*(unsigned int *)&a0 + 196) * 6;
    v8 = __fnstcw();
    v7 = v8 | 0xc00;
    v10 = (int)(v38 * (double)(int)v9);
    sub_48c030(*(int *)*(int *)(*(unsigned int *)&a0 + 128), &v14, &v17, v10);
    return (double)(int)v9;
}

