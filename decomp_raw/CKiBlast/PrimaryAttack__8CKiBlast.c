// PrimaryAttack__8CKiBlast @0xccb90 size=598
typedef struct st_4ccb90_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_4ccb90_0;

extern st_4ccb90_0 *gpGlobals;

float PrimaryAttack__8CKiBlast(float idx)
{
    unsigned int *v29;  // edx
    double v30;  // mm4
    unsigned int *v39;  // edx
    double v40;  // mm1
    double v41;  // mm1
    double v42;  // mm1
    double v43;  // mm6
    double v44;  // mm7
    float v45;  // mm7
    double v31;  // mm4
    unsigned int *v32;  // edx
    double v33;  // mm4
    double v34;  // mm4
    double v35;  // mm4
    double v36;  // mm4
    double v37;  // mm4
    double v38;  // mm4
    unsigned int v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xdc]
    unsigned int v2;  // [bp-0xd8]
    float v3;  // [bp-0xb0]
    int v4;  // [bp-0xac]
    unsigned short v5;  // [bp-0xa8]
    unsigned short v6;  // [bp-0xa6]
    float v7;  // [bp-0xa4]
    float v8;  // [bp-0xa0]
    float v9;  // [bp-0x9c]
    float v10;  // [bp-0x98]
    float v11;  // [bp-0x94]
    float v12;  // [bp-0x90]
    float v13;  // [bp-0x8c]
    float v14;  // [bp-0x88]
    float v15;  // [bp-0x84]
    float v16;  // [bp-0x80]
    float v17;  // [bp-0x7c]
    char v18;  // [bp-0x64]
    float v19;  // [bp-0x64]
    float v20;  // [bp-0x60]
    float v21;  // [bp-0x5c]
    float v22;  // [bp-0x44]
    float v23;  // [bp-0x40]
    float v24;  // [bp-0x3c]
    float v25;  // [bp-0x24]
    float v26;  // [bp-0x20]
    float v27;  // [bp-0x1c]

    if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 20))
        return v45;
    EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "weapons/kiblast.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&idx + 128), 5);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v18, *(int *)(*(unsigned int *)&idx + 128));
    v29 = &gpGlobals->field_40;
    v30 = 10.0 * gpGlobals->field_40;
    v15 = (float)v30;
    v31 = 10.0 * *(float *)&v29[1];
    v16 = (float)v31;
    v17 = (float)(10.0 * *(float *)&v29[2]);
    v22 = (float)(v30 + v19);
    v23 = (float)(v31 + v20);
    v24 = v21 + v17;
    v32 = &gpGlobals->field_28;
    v33 = 5.0 * gpGlobals->field_28;
    v7 = (float)v33;
    v34 = 5.0 * *(float *)&v32[1];
    v8 = (float)v34;
    v35 = 5.0 * *(float *)&v32[2];
    v9 = (float)v35;
    v36 = v33 + v22;
    v25 = (float)v36;
    v37 = v34 + v23;
    v26 = (float)v37;
    v38 = v35 + v24;
    v27 = (float)v38;
    v39 = &gpGlobals->field_28;
    v40 = 2000.0 * gpGlobals->field_28;
    v7 = (float)v40;
    v41 = 2000.0 * *(float *)&v39[1];
    v8 = (float)v41;
    v42 = 2000.0 * *(float *)&v39[2];
    v9 = (float)v42;
    v10 = (float)v36;
    v11 = (float)v37;
    v12 = (float)v38;
    v13 = (float)v40;
    v43 = v42;
    v14 = (float)v41;
    v15 = (float)v43;
    v2 = *(short *)(*(unsigned int *)&idx + 0xcc);
    v1 = *(short *)(*(unsigned int *)&idx + 202);
    v0 = *(short *)(*(unsigned int *)&idx + 200);
    CBasePlayerWeapon::GetPowerRatio(idx);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(v43 * 7.0);
    CKiAttack::ShootKiAttack(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v10, &v13, v4);
    UTIL_WeaponTimeBase();
    v3 = (float)(v44 + 0.5);
    *(float *)(*(unsigned int *)&idx + 160) = v3;
    *(float *)(*(unsigned int *)&idx + 156) = v3;
    return v3;
}

