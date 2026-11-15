// PrimaryAttack__12CScatterShot @0x111430 size=883
typedef struct st_511430_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_511430_1;

typedef struct st_511430_0 {
    unsigned int field_0;
} st_511430_0;

extern st_511430_0 *g_engfuncs.pfnRandomLong;
extern st_511430_1 *gpGlobals;

double PrimaryAttack__12CScatterShot(float a0)
{
    unsigned int *v31;  // edx
    double v32;  // mm4
    double v41;  // mm4
    double v42;  // mm4
    double v43;  // mm4
    float v44;  // 104
    double v45;  // mm6
    double v46;  // mm5
    double v47;  // mm6
    double v48;  // mm4
    double v49;  // mm4
    double v50;  // mm4
    double v33;  // mm4
    double v51;  // mm6
    double v53;  // mm7
    double v54;  // mm7
    double v55;  // mm7
    unsigned int *v34;  // edx
    double v35;  // mm6
    unsigned int *v36;  // edx
    double v37;  // mm4
    double v38;  // mm4
    double v39;  // mm6
    unsigned int *v40;  // edx
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    unsigned int v2;  // [bp-0xd0]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    unsigned short v5;  // [bp-0x8c]
    unsigned short v6;  // [bp-0x8a]
    int v7;  // [bp-0x88]
    float v8;  // [bp-0x84]
    float v9;  // [bp-0x80]
    float v10;  // [bp-0x7c]
    float v11;  // [bp-0x78]
    float v12;  // [bp-0x74]
    float v13;  // [bp-0x70]
    float v14;  // [bp-0x6c]
    float v15;  // [bp-0x68]
    float v16;  // [bp-0x64]
    char v17;  // [bp-0x64]
    float v18;  // [bp-0x60]
    float v19;  // [bp-0x5c]
    float v20;  // [bp-0x58]
    float v21;  // [bp-0x54]
    float v22;  // [bp-0x50]
    float v23;  // [bp-0x4c]
    float v24;  // [bp-0x44]
    float v25;  // [bp-0x40]
    float v26;  // [bp-0x3c]
    float v27;  // [bp-0x24]
    float v28;  // [bp-0x20]
    float v29;  // [bp-0x1c]

    CScatterShot::CleanUpShotList(a0);
    if (*(int *)(*(unsigned int *)&a0 + 228) > 7)
    {
        return v55;
    }
    else if (CBasePlayer::UseKi(*(int *)(*(unsigned int *)&a0 + 128), 20))
    {
        EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 520), 1, "weapons/kiblast.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        v4 = g_engfuncs.pfnRandomLong(0xfffffff6, 10) * 4;
        v3 = g_engfuncs.pfnRandomLong(0xfffffff6, 10) * 4;
        UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 116);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 128) + 96) + 480))(&v17, *(int *)(*(unsigned int *)&a0 + 128));
        v31 = &gpGlobals->field_28;
        v32 = 10.0 * gpGlobals->field_28;
        v8 = (float)v32;
        v33 = 10.0 * *(float *)&v31[1];
        v9 = (float)v33;
        v10 = (float)(10.0 * *(float *)&v31[2]);
        v24 = (float)(v32 + v16);
        v25 = (float)(v33 + v18);
        v26 = v19 + v10;
        v27 = v24;
        v28 = v25;
        v29 = v26;
        CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&a0 + 128), 5);
        v34 = &gpGlobals->field_28;
        v14 = (float)(200.0 * gpGlobals->field_28);
        v15 = (float)(200.0 * *(float *)&v34[1]);
        v16 = (float)(200.0 * *(float *)&v34[2]);
        v35 = (double)(int)v4;
        v36 = &gpGlobals->field_40;
        v37 = v35 * gpGlobals->field_40;
        v18 = (float)v37;
        v38 = v35 * *(float *)&v36[1];
        v19 = (float)v38;
        v20 = (float)(v35 * *(float *)&v36[2]);
        v11 = (float)(v37 + v14);
        v12 = (float)(v38 + v15);
        v13 = v16 + v20;
        v39 = (double)(int)v3;
        v40 = &gpGlobals->field_34;
        v41 = v39 * *(float *)&v40[1];
        v22 = (float)v41;
        v23 = (float)(v39 * *(float *)&v40[2]);
        v42 = v39 * gpGlobals->field_34 + v11;
        v8 = (float)v42;
        v43 = v41 + v12;
        v9 = (float)v43;
        v44 = v13 + v23;
        v10 = v44;
        v45 = v42 * v42 + v43 * v43 + v44 * v44;
        v46 = sqrt(v45);
        if (isnan(v46))
            sqrt(*(unsigned int *)&v45);
        else
            v45 = v46;
        v21 = (float)v45;
        if (v21 == 0.0f)
        {
            v14 = 0.0f;
            v15 = 0.0f;
            v16 = 1.0;
        }
        else
        {
            v47 = 1.0 / v21;
            v14 = (float)(v47 * v8);
            v15 = (float)(v47 * v9);
            v16 = (float)(v47 * v10);
        }
        v48 = 750.0 * v14;
        v11 = (float)v48;
        v49 = 750.0 * v15;
        v12 = (float)v49;
        v50 = 750.0 * v16;
        v13 = (float)v50;
        v14 = v27;
        v15 = v28;
        v16 = v29;
        v51 = v50;
        v18 = (float)v48;
        v19 = (float)v49;
        v20 = (float)v51;
        v2 = *(short *)(*(unsigned int *)&a0 + 236);
        v1 = *(short *)(*(unsigned int *)&a0 + 234);
        v0 = *(short *)(*(unsigned int *)&a0 + 232);
        CBasePlayerWeapon::GetPowerRatio(a0);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v7 = (int)(v51 * 10.0);
        CScatterShot::AddShotEntry(a0, CScatterShotAttack::ShootScatterShotAttack(*(int *)*(int *)(*(unsigned int *)&a0 + 128), &v14, &v18, v7));
        UTIL_WeaponTimeBase();
        *(float *)(*(unsigned int *)&a0 + 156) = (float)(v53 + 0.3);
        return v53 + 0.3;
    }
    else
    {
        return v54;
    }
}

