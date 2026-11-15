// SecondaryAttack__8CKiBlast @0xccdf0 size=1853
typedef struct st_4ccdf0_1 {
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
} st_4ccdf0_1;

typedef struct st_4ccdf0_0 {
    unsigned int field_0;
} st_4ccdf0_0;

extern st_4ccdf0_0 *g_engfuncs.pfnRandomLong;
extern st_4ccdf0_1 *gpGlobals;

float SecondaryAttack__8CKiBlast(float idx)
{
    unsigned int *v49;  // edx
    double v50;  // mm4
    double v59;  // mm6
    unsigned int *v60;  // edx
    double v61;  // mm4
    double v62;  // mm4
    double v63;  // mm6
    unsigned int *v64;  // edx
    double v65;  // mm4
    double v66;  // mm4
    unsigned int *v67;  // edx
    double v68;  // mm4
    double v51;  // mm4
    double v69;  // mm4
    unsigned int *v70;  // esi
    double v71;  // mm6
    double v72;  // mm5
    double v73;  // mm6
    double v74;  // mm4
    double v75;  // mm4
    unsigned int *v76;  // edx
    double v77;  // mm6
    unsigned int *v78;  // edx
    unsigned int *v52;  // esi
    double v79;  // mm4
    double v80;  // mm4
    double v81;  // mm6
    unsigned int *v82;  // edx
    double v83;  // mm4
    double v84;  // mm4
    double v85;  // mm7
    float v86;  // mm7
    double v53;  // mm6
    double v54;  // mm5
    double v55;  // mm6
    double v56;  // mm4
    double v57;  // mm4
    unsigned int *v58;  // edx
    unsigned int v0;  // [bp-0x170]
    unsigned int v1;  // [bp-0x16c]
    unsigned int v2;  // [bp-0x168]
    int v3;  // [bp-0x144]
    int v4;  // [bp-0x140]
    float v5;  // [bp-0x130]
    unsigned short v6;  // [bp-0x12c]
    unsigned short v7;  // [bp-0x12a]
    int v8;  // [bp-0x128]
    float v9;  // [bp-0x124]
    float v10;  // [bp-0x120]
    float v11;  // [bp-0x11c]
    float v12;  // [bp-0x118]
    float v13;  // [bp-0x114]
    float v14;  // [bp-0x110]
    float v15;  // [bp-0x10c]
    float v16;  // [bp-0x108]
    float v17;  // [bp-0x104]
    float v18;  // [bp-0x100]
    float v19;  // [bp-0xfc]
    float v20;  // [bp-0xf8]
    float v21;  // [bp-0xf4]
    float v22;  // [bp-0xf0]
    float v23;  // [bp-0xec]
    float v24;  // [bp-0xe8]
    float v25;  // [bp-0xe4]
    float v26;  // [bp-0xe0]
    float v27;  // [bp-0xdc]
    float v28;  // [bp-0xd0]
    float v29;  // [bp-0xc4]
    float v30;  // [bp-0xc0]
    float v31;  // [bp-0xbc]
    char v32;  // [bp-0xa4]
    float v33;  // [bp-0xa4]
    float v34;  // [bp-0xa0]
    float v35;  // [bp-0x9c]
    float v36;  // [bp-0x84]
    float v37;  // [bp-0x80]
    float v38;  // [bp-0x7c]
    float v39;  // [bp-0x64]
    float v40;  // [bp-0x60]
    float v41;  // [bp-0x5c]
    float v42;  // [bp-0x44]
    float v43;  // [bp-0x40]
    float v44;  // [bp-0x3c]
    float v45;  // [bp-0x24]
    float v46;  // [bp-0x20]
    float v47;  // [bp-0x1c]

    if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 15))
        return v86;
    EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "weapons/kiblast.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    v4 = g_engfuncs.pfnRandomLong(0, 10);
    v3 = g_engfuncs.pfnRandomLong(0xfffffff6, 10);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    if (*(int *)(*(unsigned int *)&idx + 196))
    {
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v32, *(int *)(*(unsigned int *)&idx + 128));
        v49 = &gpGlobals->field_40;
        v50 = 10.0 * gpGlobals->field_40;
        v29 = (float)v50;
        v51 = 10.0 * *(float *)&v49[1];
        v30 = (float)v51;
        v31 = (float)(10.0 * *(float *)&v49[2]);
        v36 = (float)(v50 + v33);
        v37 = (float)(v51 + v34);
        v38 = v35 + v31;
        v52 = &gpGlobals->field_28;
        v53 = gpGlobals->field_28 * gpGlobals->field_28 + *(float *)&v52[1] * *(float *)&v52[1] + *(float *)&v52[2] * *(float *)&v52[2];
        v54 = sqrt(v53);
        if (isnan(v54))
            sqrt(*(unsigned int *)&v53);
        else
            v53 = v54;
        v12 = (float)v53;
        if (v12 == 0.0f)
        {
            v17 = 0.0f;
            v18 = 0.0f;
            v19 = 1.0;
        }
        else
        {
            v55 = 1.0 / v12;
            v17 = (float)(v55 * *(float *)v52);
            v18 = (float)(v55 * *(float *)&v52[1]);
            v19 = (float)(v55 * *(float *)&v52[2]);
        }
        v56 = 10.0 * v17;
        v25 = (float)v56;
        v57 = 10.0 * v18;
        v26 = (float)v57;
        v27 = (float)(10.0 * v19);
        v39 = (float)(v56 + v36);
        v40 = (float)(v57 + v37);
        v41 = v38 + v27;
        v45 = v39;
        v46 = v40;
        v47 = v41;
        v58 = &gpGlobals->field_28;
        v15 = (float)(2000.0 * gpGlobals->field_28);
        v16 = (float)(2000.0 * *(float *)&v58[1]);
        v17 = (float)(2000.0 * *(float *)&v58[2]);
        v8 = -v4;
        v59 = (double)v8;
        v60 = &gpGlobals->field_40;
        v61 = v59 * gpGlobals->field_40;
        v18 = (float)v61;
        v62 = v59 * *(float *)&v60[1];
        v19 = (float)v62;
        v20 = (float)(v59 * *(float *)&v60[2]);
        v12 = (float)(v61 + v15);
        v13 = (float)(v62 + v16);
        v14 = v17 + v20;
        v63 = (double)v3;
        v64 = &gpGlobals->field_34;
        v65 = v63 * gpGlobals->field_34;
        v21 = (float)v65;
        v66 = v63 * *(float *)&v64[1];
        v22 = (float)v66;
        v23 = (float)(v63 * *(float *)&v64[2]);
        v9 = (float)(v65 + v12);
        v10 = (float)(v66 + v13);
        v11 = v14 + v23;
        v42 = v9;
        v43 = v10;
        v44 = v11;
        v1 = 5;
    }
    else
    {
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v15, *(int *)(*(unsigned int *)&idx + 128));
        v67 = &gpGlobals->field_40;
        v68 = -10.0 * gpGlobals->field_40;
        v18 = (float)v68;
        v69 = -10.0 * *(float *)&v67[1];
        v19 = (float)v69;
        v20 = (float)(-10.0 * *(float *)&v67[2]);
        v12 = (float)(v68 + v15);
        v13 = (float)(v69 + v16);
        v14 = v17 + v20;
        v70 = &gpGlobals->field_28;
        v71 = gpGlobals->field_28 * gpGlobals->field_28 + *(float *)&v70[1] * *(float *)&v70[1] + *(float *)&v70[2] * *(float *)&v70[2];
        v72 = sqrt(v71);
        if (isnan(v72))
            sqrt(*(unsigned int *)&v71);
        else
            v71 = v72;
        v28 = (float)v71;
        if (v28 == 0.0f)
        {
            v24 = 0.0f;
            v25 = 0.0f;
            v26 = 1.0;
        }
        else
        {
            v73 = 1.0 / v28;
            v24 = (float)(v73 * *(float *)v70);
            v25 = (float)(v73 * *(float *)&v70[1]);
            v26 = (float)(v73 * *(float *)&v70[2]);
        }
        v74 = 10.0 * v24;
        v21 = (float)v74;
        v75 = 10.0 * v25;
        v22 = (float)v75;
        v23 = (float)(10.0 * v26);
        v9 = (float)(v74 + v12);
        v10 = (float)(v75 + v13);
        v11 = v14 + v23;
        v45 = v9;
        v46 = v10;
        v47 = v11;
        v76 = &gpGlobals->field_28;
        v15 = (float)(2000.0 * gpGlobals->field_28);
        v16 = (float)(2000.0 * *(float *)&v76[1]);
        v17 = (float)(2000.0 * *(float *)&v76[2]);
        v77 = (double)v4;
        v78 = &gpGlobals->field_40;
        v79 = v77 * gpGlobals->field_40;
        v18 = (float)v79;
        v80 = v77 * *(float *)&v78[1];
        v19 = (float)v80;
        v20 = (float)(v77 * *(float *)&v78[2]);
        v12 = (float)(v79 + v15);
        v13 = (float)(v80 + v16);
        v14 = v17 + v20;
        v81 = (double)v3;
        v82 = &gpGlobals->field_34;
        v83 = v81 * gpGlobals->field_34;
        v21 = (float)v83;
        v84 = v81 * *(float *)&v82[1];
        v22 = (float)v84;
        v23 = (float)(v81 * *(float *)&v82[2]);
        v9 = (float)(v83 + v12);
        v10 = (float)(v84 + v13);
        v11 = v14 + v23;
        v42 = v9;
        v43 = v10;
        v44 = v11;
        v1 = 6;
    }
    CBasePlayer::SetAnimation(*(int *)(*(unsigned int *)&idx + 128));
    *(unsigned int *)(*(unsigned int *)&idx + 196) = !*(int *)(*(unsigned int *)&idx + 196);
    v9 = v45;
    v10 = v46;
    v11 = v47;
    v12 = v42;
    v13 = v43;
    v14 = v44;
    v2 = *(short *)(*(unsigned int *)&idx + 0xcc);
    v1 = *(short *)(*(unsigned int *)&idx + 202);
    v0 = *(short *)(*(unsigned int *)&idx + 200);
    CBasePlayerWeapon::GetPowerRatio(idx);
    v7 = __fnstcw();
    v6 = v7 | 0xc00;
    v8 = (int)(v14 * 5.0);
    CKiAttack::ShootCurvedKiAttack(*(int *)*(int *)(*(unsigned int *)&idx + 128), &v9, &v12, v8);
    UTIL_WeaponTimeBase();
    v5 = (float)(v85 + 0.35);
    *(float *)(*(unsigned int *)&idx + 160) = v5;
    *(float *)(*(unsigned int *)&idx + 156) = v5;
    return v5;
}

