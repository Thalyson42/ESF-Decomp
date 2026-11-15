// SecondaryAttack__8CRenzoku @0x10e470 size=801
typedef struct st_50e470_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_50e470_0;

extern st_50e470_0 *gpGlobals;

double SecondaryAttack__8CRenzoku(float idx)
{
    unsigned int *v35;  // edx
    double v36;  // mm5
    double v45;  // mm5
    double v46;  // mm5
    double v47;  // mm5
    unsigned int *v48;  // edx
    double v49;  // mm2
    double v50;  // mm2
    double v51;  // mm2
    double v52;  // mm7
    double v53;  // mm0
    double v54;  // mm0
    double v37;  // mm5
    double v55;  // mm7
    unsigned int *v38;  // esi
    double v39;  // mm7
    double v40;  // mm6
    double v41;  // mm7
    double v42;  // mm5
    double v43;  // mm5
    double v44;  // mm5
    unsigned int v0;  // [bp-0x130]
    unsigned int v1;  // [bp-0x12c]
    unsigned int v2;  // [bp-0x128]
    float v3;  // [bp-0xf0]
    int v4;  // [bp-0xec]
    unsigned short v5;  // [bp-0xe8]
    unsigned short v6;  // [bp-0xe6]
    float v7;  // [bp-0xe4]
    float v8;  // [bp-0xe0]
    float v9;  // [bp-0xdc]
    float v10;  // [bp-0xd8]
    float v11;  // [bp-0xd4]
    float v12;  // [bp-0xd0]
    float v13;  // [bp-0xcc]
    float v14;  // [bp-0xc8]
    float v15;  // [bp-0xc4]
    float v16;  // [bp-0xc0]
    float v17;  // [bp-0xbc]
    float v18;  // [bp-0xa4]
    float v19;  // [bp-0xa0]
    float v20;  // [bp-0x9c]
    float v21;  // [bp-0x84]
    float v22;  // [bp-0x80]
    float v23;  // [bp-0x7c]
    char v24;  // [bp-0x64]
    float v25;  // [bp-0x64]
    float v26;  // [bp-0x60]
    float v27;  // [bp-0x5c]
    float v28;  // [bp-0x44]
    float v29;  // [bp-0x40]
    float v30;  // [bp-0x3c]
    float v31;  // [bp-0x24]
    float v32;  // [bp-0x20]
    float v33;  // [bp-0x1c]

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
        return v55;
    if (*(int *)(*(unsigned int *)&idx + 468) > 0)
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 468) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
    if (CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 15))
    {
        UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v24, *(int *)(*(unsigned int *)&idx + 128));
        v35 = &gpGlobals->field_40;
        v36 = 10.0 * gpGlobals->field_40;
        v21 = (float)v36;
        v37 = 10.0 * *(float *)&v35[1];
        v22 = (float)v37;
        v23 = (float)(10.0 * *(float *)&v35[2]);
        v28 = (float)(v36 + v25);
        v29 = (float)(v37 + v26);
        v30 = v27 + v23;
        v38 = &gpGlobals->field_28;
        v39 = gpGlobals->field_28 * gpGlobals->field_28 + *(float *)&v38[1] * *(float *)&v38[1] + *(float *)&v38[2] * *(float *)&v38[2];
        v40 = sqrt(v39);
        if (isnan(v40))
            sqrt(*(unsigned int *)&v39);
        else
            v39 = v40;
        v10 = (float)v39;
        if (v10 == 0.0f)
        {
            v15 = 0.0f;
            v16 = 0.0f;
            v17 = 1.0;
        }
        else
        {
            v41 = 1.0 / v10;
            v15 = (float)(v41 * *(float *)v38);
            v16 = (float)(v41 * *(float *)&v38[1]);
            v17 = (float)(v41 * *(float *)&v38[2]);
        }
        v42 = 5.0 * v15;
        v18 = (float)v42;
        v43 = 5.0 * v16;
        v19 = (float)v43;
        v44 = 5.0 * v17;
        v20 = (float)v44;
        v45 = v42 + v28;
        v31 = (float)v45;
        v46 = v43 + v29;
        v32 = (float)v46;
        v47 = v44 + v30;
        v33 = (float)v47;
        v48 = &gpGlobals->field_28;
        v49 = 2000.0 * gpGlobals->field_28;
        v7 = (float)v49;
        v50 = 2000.0 * *(float *)&v48[1];
        v8 = (float)v50;
        v51 = 2000.0 * *(float *)&v48[2];
        v9 = (float)v51;
        v10 = (float)v45;
        v11 = (float)v46;
        v12 = (float)v47;
        v13 = (float)v49;
        v52 = v51;
        v14 = (float)v50;
        v15 = (float)v52;
        v2 = *(short *)(*(unsigned int *)&idx + 480);
        v1 = *(short *)(*(unsigned int *)&idx + 478);
        v0 = *(short *)(*(unsigned int *)&idx + 476);
        CBasePlayerWeapon::GetPowerRatio(idx);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v4 = (int)(v52 * 10.0);
        CKiAttack::ShootKiAttack(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v10, &v13, v4);
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 356))(idx);
        CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&idx + 128), 5);
    }
    UTIL_WeaponTimeBase();
    v3 = (float)(v53 + 0.6);
    v54 = v3;
    *(float *)(*(unsigned int *)&idx + 160) = (float)v54;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v54;
    return 0.6;
}

