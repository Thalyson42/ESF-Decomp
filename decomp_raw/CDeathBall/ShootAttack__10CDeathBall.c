// ShootAttack__10CDeathBall @0xa9460 size=450
typedef struct st_4a9460_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4a9460_0;

extern st_4a9460_0 *gpGlobals;

double ShootAttack__10CDeathBall(float a0)
{
    unsigned int *v27;  // edx
    double v28;  // mm5
    double v37;  // mm2
    double v38;  // mm7
    double v39;  // mm0
    double v29;  // mm5
    double v30;  // mm5
    double v31;  // mm5
    double v32;  // mm5
    double v33;  // mm5
    unsigned int *v34;  // edx
    double v35;  // mm2
    double v36;  // mm2
    unsigned int v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    unsigned short v2;  // [bp-0xac]
    unsigned short v3;  // [bp-0xaa]
    int v4;  // [bp-0xa8]
    float v5;  // [bp-0xa4]
    float v6;  // [bp-0xa0]
    float v7;  // [bp-0x9c]
    float v8;  // [bp-0x98]
    float v9;  // [bp-0x94]
    float v10;  // [bp-0x90]
    float v11;  // [bp-0x8c]
    float v12;  // [bp-0x88]
    float v13;  // [bp-0x84]
    float v14;  // [bp-0x80]
    float v15;  // [bp-0x7c]
    char v16;  // [bp-0x64]
    float v17;  // [bp-0x64]
    float v18;  // [bp-0x60]
    float v19;  // [bp-0x5c]
    float v20;  // [bp-0x44]
    float v21;  // [bp-0x40]
    float v22;  // [bp-0x3c]
    float v23;  // [bp-0x24]
    float v24;  // [bp-0x20]
    float v25;  // [bp-0x1c]

    sub_48a800(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v16, *(int *)(*(unsigned int *)&a0 + 128));
    v13 = 0;
    v14 = 0;
    v15 = 30.0f;
    v20 = v17 + v13;
    v21 = v18 + v14;
    v22 = v19 + v15;
    v27 = &gpGlobals->field_28;
    v28 = 10.0 * gpGlobals->field_28;
    v5 = (float)v28;
    v29 = 10.0 * *(float *)&v27[1];
    v6 = (float)v29;
    v30 = 10.0 * *(float *)&v27[2];
    v7 = (float)v30;
    v31 = v28 + v20;
    v23 = (float)v31;
    v32 = v29 + v21;
    v24 = (float)v32;
    v33 = v30 + v22;
    v25 = (float)v33;
    v34 = &gpGlobals->field_28;
    v35 = 1900.0 * gpGlobals->field_28;
    v5 = (float)v35;
    v36 = 1900.0 * *(float *)&v34[1];
    v6 = (float)v36;
    v37 = 1900.0 * *(float *)&v34[2];
    v7 = (float)v37;
    v8 = (float)v31;
    v9 = (float)v32;
    v10 = (float)v33;
    v11 = (float)v35;
    v12 = (float)v36;
    v13 = (float)v37;
    v1 = *(short *)(*(unsigned int *)&a0 + 472);
    *(float *)&v0 = *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 468) + 324);
    sub_48aef0(a0);
    v38 = (double)*(int *)(*(unsigned int *)&a0 + 196);
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v4 = (int)(v39 * v38 * 4.0);
    sub_48a590(*(int *)*(int *)(*(unsigned int *)&a0 + 128), &v8, &v11, v4);
    return v38;
}

