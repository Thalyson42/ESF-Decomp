// Shoot__12CGenericBeam @0xc5cc0 size=679
typedef struct st_4c5cc0_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[16];
    char field_11c;
} st_4c5cc0_1;

typedef struct st_4c5cc0_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4c5cc0_0;

extern st_4c5cc0_0 *gpGlobals;

double Shoot__12CGenericBeam(float idx)
{
    double v29;  // mm7
    unsigned int *v30;  // edx
    double v39;  // mm2
    double v40;  // mm2
    double v41;  // mm2
    double v42;  // mm0
    double v31;  // mm5
    double v32;  // mm5
    double v33;  // mm5
    double v34;  // mm5
    double v35;  // mm5
    double v36;  // mm5
    double v37;  // mm4
    unsigned int *v38;  // edx
    st_4c5cc0_1 *v0;  // [bp-0xc0]
    float v1;  // [bp-0xbc]
    unsigned int v2;  // [bp-0xb8]
    unsigned int v3;  // [bp-0xb4]
    unsigned int v4;  // [bp-0xb0]
    unsigned int v5;  // [bp-0xac]
    unsigned int v6;  // [bp-0xa8]
    unsigned int v7;  // [bp-0xa4]
    unsigned int v8;  // [bp-0xa0]
    unsigned short v9;  // [bp-0x6c]
    unsigned short v10;  // [bp-0x6a]
    unsigned int v11;  // [bp-0x68]
    int v12;  // [bp-0x68]
    float v13;  // [bp-0x64]
    float v14;  // [bp-0x60]
    float v15;  // [bp-0x5c]
    float v16;  // [bp-0x58]
    float v17;  // [bp-0x54]
    float v18;  // [bp-0x50]
    float v19;  // [bp-0x4c]
    float v20;  // [bp-0x48]
    char v21;  // [bp-0x44]
    float v22;  // [bp-0x44]
    float v23;  // [bp-0x40]
    float v24;  // [bp-0x3c]
    float v25;  // [bp-0x24]
    float v26;  // [bp-0x20]
    float v27;  // [bp-0x1c]

    if (!*(char *)(*(unsigned int *)&idx + 528))
    {
        CControlledBeam::Shoot(idx);
        return v29;
    }
    *(char *)(*(unsigned int *)&idx + 528) = 0;
    CBasePlayer::DrawChargeBar(*(int *)(*(unsigned int *)&idx + 128), 0);
    EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
    if (*(int *)(*(unsigned int *)&idx + 216) >= *(int *)(*(unsigned int *)&idx + 220) / 3)
    {
        CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&idx + 128), 5);
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 372))(idx);
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx);
        UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v21, *(int *)(*(unsigned int *)&idx + 128));
        v30 = &gpGlobals->field_28;
        v31 = 10.0 * gpGlobals->field_28;
        v13 = (float)v31;
        v32 = 10.0 * *(float *)&v30[1];
        v14 = (float)v32;
        v33 = 10.0 * *(float *)&v30[2];
        v15 = (float)v33;
        v34 = v31 + v22;
        v25 = (float)v34;
        v35 = v32 + v23;
        v26 = (float)v35;
        v36 = v33 + v24;
        v27 = (float)v36;
        v37 = (double)*(int *)(*(unsigned int *)&idx + 224);
        v38 = &gpGlobals->field_28;
        v39 = v37 * gpGlobals->field_28;
        v13 = (float)v39;
        v40 = v37 * *(float *)&v38[1];
        v14 = (float)v40;
        v41 = v37 * *(float *)&v38[2];
        v15 = (float)v41;
        v42 = (double)*(int *)(*(unsigned int *)&idx + 220);
        v16 = (float)v34;
        v17 = (float)v35;
        v18 = (float)v36;
        v19 = (float)v39;
        v20 = (float)v40;
        v22 = (float)v41;
        v8 = *(int *)(*(unsigned int *)&idx + 236);
        v7 = *(short *)(*(unsigned int *)&idx + 208);
        v6 = *(short *)(*(unsigned int *)&idx + 206);
        v5 = *(short *)(*(unsigned int *)&idx + 212);
        v4 = *(short *)(*(unsigned int *)&idx + 210);
        v3 = *(short *)(*(unsigned int *)&idx + 0xcc);
        v2 = *(int *)(*(unsigned int *)&idx + 508);
        v1 = (float)((double)*(int *)(*(unsigned int *)&idx + 216) / v42);
        v0 = *(unsigned int *)&idx + 244;
        CBasePlayerWeapon::GetPowerRatio(idx);
        v11 = *(int *)(*(unsigned int *)&idx + 216) * 3;
        v10 = __fnstcw();
        v9 = v10 | 0xc00;
        v12 = (int)(v42 * (double)(int)v11);
        CGenericBall::ShootGenericBall(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v16, &v19, v12);
        return (double)(int)v11;
    }
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
    EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 2, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return 0.800000011920929;
}

