// ShootAttack__8CBigBang @0x90b00 size=478
typedef struct st_490b00_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_490b00_0;

extern st_490b00_0 *gpGlobals;

double ShootAttack__8CBigBang(float a0)
{
    unsigned int *v30;  // edx
    unsigned int *v31;  // edx
    double v40;  // mm2
    double v41;  // mm2
    double v42;  // mm0
    double v32;  // mm5
    double v33;  // mm5
    double v34;  // mm5
    double v35;  // mm5
    double v36;  // mm5
    double v37;  // mm5
    unsigned int *v38;  // edx
    double v39;  // mm2
    float v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    unsigned int v2;  // [bp-0xc8]
    unsigned int v3;  // [bp-0xc4]
    unsigned short v4;  // [bp-0xac]
    unsigned short v5;  // [bp-0xaa]
    unsigned int v6;  // [bp-0xa8]
    int v7;  // [bp-0xa8]
    float v8;  // [bp-0xa4]
    float v9;  // [bp-0xa0]
    float v10;  // [bp-0x9c]
    float v11;  // [bp-0x98]
    float v12;  // [bp-0x94]
    float v13;  // [bp-0x90]
    float v14;  // [bp-0x8c]
    float v15;  // [bp-0x88]
    float v16;  // [bp-0x84]
    float v17;  // [bp-0x80]
    float v18;  // [bp-0x7c]
    char v19;  // [bp-0x64]
    float v20;  // [bp-0x64]
    float v21;  // [bp-0x60]
    float v22;  // [bp-0x5c]
    float v23;  // [bp-0x44]
    float v24;  // [bp-0x40]
    float v25;  // [bp-0x3c]
    float v26;  // [bp-0x24]
    float v27;  // [bp-0x20]
    float v28;  // [bp-0x1c]

    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v19, *(int *)(*(unsigned int *)&a0 + 128));
    v30 = &gpGlobals->field_40;
    v16 = (float)(10.0 * gpGlobals->field_40);
    v17 = (float)(10.0 * *(float *)&v30[1]);
    v18 = (float)(10.0 * *(float *)&v30[2]);
    v23 = v20 + v16;
    v24 = v21 + v17;
    v25 = v22 + v18;
    v31 = &gpGlobals->field_28;
    v32 = 10.0 * gpGlobals->field_28;
    v8 = (float)v32;
    v33 = 10.0 * *(float *)&v31[1];
    v9 = (float)v33;
    v34 = 10.0 * *(float *)&v31[2];
    v10 = (float)v34;
    v35 = v32 + v23;
    v26 = (float)v35;
    v36 = v33 + v24;
    v27 = (float)v36;
    v37 = v34 + v25;
    v28 = (float)v37;
    v38 = &gpGlobals->field_28;
    v39 = 1900.0 * gpGlobals->field_28;
    v8 = (float)v39;
    v40 = 1900.0 * *(float *)&v38[1];
    v9 = (float)v40;
    v41 = 1900.0 * *(float *)&v38[2];
    v10 = (float)v41;
    v11 = (float)v35;
    v12 = (float)v36;
    v13 = (float)v37;
    v14 = (float)v39;
    v15 = (float)v40;
    v16 = (float)v41;
    v3 = *(short *)(*(unsigned int *)&a0 + 472);
    v2 = *(short *)(*(unsigned int *)&a0 + 470);
    v1 = *(short *)(*(unsigned int *)&a0 + 468);
    v0 = (float)((double)*(int *)(*(unsigned int *)&a0 + 196) / 30.0);
    CBasePlayerWeapon::GetPowerRatio(a0);
    v6 = *(int *)(*(unsigned int *)&a0 + 196) * 4;
    v5 = __fnstcw();
    v4 = v5 | 0xc00;
    v7 = (int)(v42 * (double)(int)v6);
    CBigBangAttack::ShootBigBang(*(int *)*(int *)(*(unsigned int *)&a0 + 128), &v11, &v14, v7);
    return (double)(int)v6;
}

