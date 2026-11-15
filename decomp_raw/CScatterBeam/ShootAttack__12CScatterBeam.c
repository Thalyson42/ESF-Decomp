// ShootAttack__12CScatterBeam @0x1104d0 size=346
typedef struct st_5104d0_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_5104d0_0;

extern st_5104d0_0 *gpGlobals;

double ShootAttack__12CScatterBeam(float a0)
{
    unsigned int *v24;  // edx
    double v25;  // mm5
    double v34;  // mm2
    double v35;  // mm0
    double v26;  // mm5
    double v27;  // mm5
    double v28;  // mm5
    double v29;  // mm5
    double v30;  // mm5
    unsigned int *v31;  // edx
    double v32;  // mm2
    double v33;  // mm2
    unsigned int v0;  // [bp-0x90]
    unsigned int v1;  // [bp-0x8c]
    unsigned int v2;  // [bp-0x88]
    float v3;  // [bp-0x84]
    unsigned short v4;  // [bp-0x6c]
    unsigned short v5;  // [bp-0x6a]
    unsigned int v6;  // [bp-0x68]
    int v7;  // [bp-0x68]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    float v11;  // [bp-0x58]
    float v12;  // [bp-0x54]
    float v13;  // [bp-0x50]
    float v14;  // [bp-0x4c]
    float v15;  // [bp-0x48]
    char v16;  // [bp-0x44]
    float v17;  // [bp-0x44]
    float v18;  // [bp-0x40]
    float v19;  // [bp-0x3c]
    float v20;  // [bp-0x24]
    float v21;  // [bp-0x20]
    float v22;  // [bp-0x1c]

    sub_48a800(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v16, *(int *)(*(unsigned int *)&a0 + 128));
    v24 = &gpGlobals->field_28;
    v25 = 10.0 * gpGlobals->field_28;
    v8 = (float)v25;
    v26 = 10.0 * *(float *)&v24[1];
    v9 = (float)v26;
    v27 = 10.0 * *(float *)&v24[2];
    v10 = (float)v27;
    v28 = v25 + v17;
    v20 = (float)v28;
    v29 = v26 + v18;
    v21 = (float)v29;
    v30 = v27 + v19;
    v22 = (float)v30;
    v31 = &gpGlobals->field_28;
    v32 = 1500.0 * gpGlobals->field_28;
    v8 = (float)v32;
    v33 = 1500.0 * *(float *)&v31[1];
    v9 = (float)v33;
    v34 = 1500.0 * *(float *)&v31[2];
    v10 = (float)v34;
    v11 = (float)v28;
    v12 = (float)v29;
    v13 = (float)v30;
    v14 = (float)v32;
    v15 = (float)v33;
    v17 = (float)v34;
    v3 = (float)((double)*(int *)(*(unsigned int *)&a0 + 196) / 42.0);
    v2 = *(short *)(*(unsigned int *)&a0 + 468);
    v1 = *(short *)(*(unsigned int *)&a0 + 472);
    v0 = *(short *)(*(unsigned int *)&a0 + 470);
    sub_48aef0(a0);
    v6 = *(int *)(*(unsigned int *)&a0 + 196) * 3;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v7 = (int)(v35 * (double)(int)v6);
    sub_48cbc0(*(int *)*(int *)(*(unsigned int *)&a0 + 128), &v11, &v14, v7);
    return (double)(int)v6;
}

