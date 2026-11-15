// StopMelee__12CPlayerMeleei @0x107390 size=2847
typedef struct st_507390_1 {
    char padding_0[140];
    struct st_507390_2 *field_8c;
} st_507390_1;

typedef struct st_507390_3 {
    struct st_507390_0 *field_0;
    char padding_4[92];
    struct st_507390_1 *field_60;
    char padding_64[700];
    unsigned int field_320;
    char padding_324[88];
    unsigned int field_37c;
    char padding_380[980];
    unsigned int field_754;
} st_507390_3;

typedef struct st_507390_6 {
    char padding_0[36];
    unsigned int field_24;
    char padding_28[20];
    unsigned int field_3c;
    char padding_40[76];
    unsigned int field_8c;
    char padding_90[28];
    unsigned int field_ac;
    char padding_b0[20];
    unsigned int field_c4;
    char padding_c8[12];
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[16];
    unsigned int field_ec;
    unsigned int field_f0;
    unsigned int field_f4;
    char padding_f8[8];
    unsigned int field_100;
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    char padding_120[4];
    struct st_507390_3 *field_124;
    struct st_507390_3 *field_128;
    char padding_12c[4];
    struct st_507390_5 *field_130;
    char padding_134[4];
    unsigned int field_138;
    unsigned int field_13c;
    unsigned int field_140;
    unsigned int field_144;
} st_507390_6;

typedef struct st_507390_5 {
    char padding_0[60];
    unsigned int field_3c;
    char padding_40[76];
    unsigned int field_8c;
    char padding_90[28];
    unsigned int field_ac;
    char padding_b0[20];
    unsigned int field_c4;
    char padding_c8[12];
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[16];
    unsigned int field_ec;
    unsigned int field_f0;
    char padding_f4[16];
    unsigned int field_104;
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    char padding_11c[28];
    unsigned int field_138;
    unsigned int field_13c;
    unsigned int field_140;
    unsigned int field_144;
    char padding_148[56];
    struct st_507390_4 *field_180;
} st_507390_5;

typedef struct st_507390_2 {
    unsigned int field_0;
} st_507390_2;

typedef struct st_507390_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[244];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[12];
    unsigned int field_11c;
    char padding_120[133];
    char field_1a5;
    char padding_1a6[98];
    int field_208;
} st_507390_0;

typedef struct st_507390_8 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[4];
    struct st_507390_3 *field_14;
    struct st_507390_3 *field_18;
    char padding_1c[4];
    struct st_507390_5 *field_20;
    char padding_24[4];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
} st_507390_8;

typedef struct st_507390_4 {
    char padding_0[8];
    struct st_507390_2 *field_8;
} st_507390_4;

typedef struct st_507390_7 {
    float field_0;
} st_507390_7;

extern st_507390_2 *g_engfuncs.pfnIndexOfEdict;
extern st_507390_7 *gpGlobals;

unsigned int StopMelee__12CPlayerMeleei(st_507390_6 *a0, unsigned int a1)
{
    st_507390_0 *v43;  // edx
    double v44;  // mm5
    double v53;  // mm4
    double v54;  // mm7
    st_507390_8 *v55;  // esi
    double v56;  // mm7
    double v57;  // mm6
    double v58;  // mm7
    st_507390_5 *v59;  // edx
    double v45;  // mm5
    st_507390_3 *v46;  // esi
    st_507390_0 *v47;  // edx
    double v48;  // mm5
    double v49;  // mm5
    double v50;  // mm7
    st_507390_0 *v51;  // edx
    double v52;  // mm4
    float v0;  // [bp-0x14c]
    float v1;  // [bp-0x148]
    float v2;  // [bp-0x144]
    float v3;  // [bp-0x140]
    float v4;  // [bp-0x11c]
    float v5;  // [bp-0x118]
    float v6;  // [bp-0x114]
    float v7;  // [bp-0x110]
    float v8;  // [bp-0x10c]
    float v9;  // [bp-0x108]
    float v10;  // [bp-0x104]
    float v11;  // [bp-0x100]
    char *v12;  // [bp-0xfc]
    char *v13;  // [bp-0xf8]
    char *v14;  // [bp-0xf4]
    char *v15;  // [bp-0xf0]
    st_507390_3 *v16;  // [bp-0xec]
    unsigned int v17;  // [bp-0xe8]
    float v18;  // [bp-0xe4]
    float v19;  // [bp-0xe0]
    float v20;  // [bp-0xdc]
    unsigned int v21;  // [bp-0xd8], Other Possible Types: float
    unsigned int v22;  // [bp-0xd4], Other Possible Types: float
    unsigned int v23;  // [bp-0xd0], Other Possible Types: float
    float v24;  // [bp-0xcc]
    float v25;  // [bp-0xc4]
    float v26;  // [bp-0xc0]
    float v27;  // [bp-0xbc]
    float v28;  // [bp-0xb8]
    float v29;  // [bp-0xb4]
    float v30;  // [bp-0xb0]
    char v31;  // [bp-0xa4]
    float v32;  // [bp-0x94]
    char v33;  // [bp-0x90]
    float v34;  // [bp-0x64]
    float v35;  // [bp-0x60]
    float v36;  // [bp-0x5c]
    unsigned int v37;  // [bp-0x44]
    unsigned int v38;  // [bp-0x40]
    unsigned int v39;  // [bp-0x3c], Other Possible Types: float
    float v40;  // [bp-0x24]
    float v41;  // [bp-0x20]
    float v42;  // [bp-0x1c]

    v17 = a0->field_11c;
    if (a0->field_11c == 1)
    {
        CPlayerMelee::StopPrepunchAttack(a0);
    }
    else if (a0->field_11c == 3)
    {
        CPlayerMelee::StopChargedAttack(a0);
    }
    else if (a0->field_11c == 5)
    {
        CPlayerMelee::StopGrabbedAttack(a0);
    }
    else if (a0->field_11c == 7)
    {
        CPlayerMelee::StopExeAttack(a0);
    }
    else if (a0->field_11c == 9)
    {
LABEL_507433:
        CPlayerMelee::StopStruggleAttack(a0);
    }
    else if (a0->field_11c == 10)
    {
        a0->field_11c = 9;
        goto LABEL_507433;
    }
    else if (!a0->field_144)
    {
        return a0->field_11c;
    }
    CPlayerMelee::SetMode(a0, 0);
    if (!a0->field_f4 && !a0->field_ec)
    {
        CPlayerMelee::DelAllDirections(a0);
        CPlayerMelee::MeleeHudDisable(a0);
        CPlayerMelee::DelAllDirections(a0->field_130);
        CPlayerMelee::MeleeHudDisable(a0->field_130);
        CPlayerMelee::PushAwayOtherPlayers(a0);
    }
    else
    {
        CPlayerMelee::DelAllDirectionsAttacker(a0);
        CPlayerMelee::DelAllDirectionsDefender(a0->field_130);
    }
    a0->field_124->field_37c = 0;
    a0->field_144 = 0;
    a0->field_128->field_37c = 0;
    a0->field_130->field_144 = 0;
    a0->field_138 = 0;
    a0->field_13c = 0;
    a0->field_130->field_138 = 0;
    a0->field_130->field_13c = 0;
    a0->field_f0 = 0;
    a0->field_130->field_f0 = 0;
    a0->field_104 = 0;
    a0->field_130->field_104 = 0;
    a0->field_100 = 0;
    if (!a0->field_f4)
    {
        a0->field_124->field_0->field_10c = 3;
        a0->field_128->field_0->field_10c = 3;
        a0->field_124->field_0->field_108 = 3;
        a0->field_128->field_0->field_108 = 3;
        a0->field_ec = 0;
        a0->field_130->field_ec = 0;
        a0->field_d4 = 0;
        a0->field_d8 = 0;
        a0->field_130->field_d4 = 0;
        a0->field_130->field_d8 = 0;
        a0->field_124->field_754 = 0x3f800000;
        a0->field_128->field_754 = 0x3f800000;
        a0->field_124->field_0->field_11c = 0x3f800000;
        a0->field_128->field_0->field_11c = 0x3f800000;
        if (!(a0->field_124->field_0->field_1a5 & 2))
        {
            a0->field_124->field_320 = 0;
            CBasePlayer::StartFly(a0->field_124);
        }
        if (!(a0->field_128->field_0->field_1a5 & 2))
        {
            a0->field_128->field_320 = 0;
            CBasePlayer::StartFly(a0->field_128);
        }
        if (v17 != 5 || a1)
        {
            if (a0->field_140)
            {
                v25 = -*(float *)&a0->field_110;
                v26 = -*(float *)&a0->field_114;
                v27 = -*(float *)&a0->field_118;
                v40 = v25;
                v41 = v26;
                v42 = v27;
                v43 = a0->field_128->field_0;
                v37 = v43->field_8;
                v38 = v43->field_c;
                *(unsigned int *)&v39 = v43->field_10;
                v44 = 68.0 * v40;
                v28 = (float)v44;
                v45 = 68.0 * v41;
                v29 = (float)v45;
                v30 = (float)(68.0 * v42);
                v25 = (float)(v44 + *(float *)&v37);
                v26 = (float)(v45 + *(float *)&v38);
                v27 = v39 + v30;
                v34 = v25;
                v35 = v26;
                v36 = v27;
                v16 = a0->field_128;
                v46 = a0->field_124;
            }
            else
            {
                v25 = -*(float *)&a0->field_110;
                v26 = -*(float *)&a0->field_114;
                v27 = -*(float *)&a0->field_118;
                v40 = v25;
                v41 = v26;
                v42 = v27;
                v47 = a0->field_124->field_0;
                v37 = v47->field_8;
                v38 = v47->field_c;
                *(unsigned int *)&v39 = v47->field_10;
                v48 = 68.0 * v40;
                v28 = (float)v48;
                v49 = 68.0 * v41;
                v29 = (float)v49;
                v30 = (float)(68.0 * v42);
                v25 = (float)(v48 + *(float *)&v37);
                v26 = (float)(v49 + *(float *)&v38);
                v27 = v39 + v30;
                v34 = v25;
                v35 = v26;
                v36 = v27;
                v16 = a0->field_124;
                v46 = a0->field_128;
            }
            v15 = &v31;
            v14 = &v34;
            v13 = &v37;
            UTIL_TraceHull(&v37, &v34, 1, 1, v46->field_0->field_208, &v31);
            v12 = &v33;
            UTIL_SetOrigin(v16->field_0, &v33);
            if (v32 != 1.0f)
            {
                v50 = 1.0 - v32;
                v51 = v46->field_0;
                v37 = v51->field_8;
                v38 = v51->field_c;
                v39 = v51->field_10;
                v52 = 68.0 * v40;
                v18 = (float)v52;
                v53 = 68.0 * v41;
                v19 = (float)v53;
                v20 = (float)(68.0 * v42);
                v28 = (float)(v52 * v50);
                v54 = v50 * v20;
                v29 = (float)(v53 * v50);
                v30 = (float)v54;
                v25 = *(float *)&v37 - v28;
                v26 = *(float *)&v38 - v29;
                v27 = (float)(*(float *)&v39 - v54);
                v34 = v25;
                v35 = v26;
                v36 = v27;
                UTIL_TraceHull(v13, v14, 1, 1, v16->field_0->field_208, v15);
                UTIL_SetOrigin(v46->field_0, v12);
            }
        }
        if (v17 == 7)
            CPlayerMelee::PushAfterDeath(a0);
        v55 = &a0->field_110;
        v56 = *(float *)&a0->field_110 * *(float *)&a0->field_110 + *(float *)&a0->field_114 * *(float *)&a0->field_114 + *(float *)&a0->field_118 * *(float *)&a0->field_118;
        v57 = sqrt(v56);
        if (isnan(v57))
            sqrt(*(unsigned int *)&v56);
        else
            v56 = v57;
        v24 = (float)v56;
        if (v24 == 0.0f)
        {
            v18 = 0.0f;
            v19 = 0.0f;
            v20 = 1.0;
        }
        else
        {
            v58 = 1.0 / v24;
            v18 = (float)(v58 * *(float *)&v55->field_0);
            v19 = (float)(v58 * *(float *)&v55->field_4);
            v20 = (float)(v58 * *(float *)&v55->field_8);
        }
        v21 = 0;
        v22 = 0;
        v23 = 0;
        a0->field_110 = v21;
        a0->field_114 = v22;
        a0->field_118 = v23;
        v59 = a0->field_130;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v59->field_110 = v21;
        v59->field_114 = v22;
        v59->field_118 = v23;
        a0->field_c4 = 0;
        a0->field_130->field_c4 = 0;
        a0->field_8c = 0;
        a0->field_130->field_8c = 0;
        a0->field_ac = 0;
        a0->field_108 = 0;
        a0->field_130->field_ac = 0;
        a0->field_130->field_108 = 0;
        *(float *)&a0->field_24 = *(float *)gpGlobals;
        UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(a0->field_124->field_0->field_208));
        UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(a0->field_128->field_0->field_208));
        if (a1)
        {
            a0->field_3c = 1;
            a0->field_130->field_3c = 1;
            if (a0->field_140)
            {
                v21 = v18;
                v22 = v19;
                v23 = v20;
                v11 = 5.0f;
                v10 = 350.0f;
                v9 = 300.0f;
                v8 = 600.0f;
                CPlayerMelee::StartToss(a0, a0->field_128, 0, &v21, 600.0f, 300.0f, 350.0f, 5.0f);
                v21 = -v18;
                v22 = -v19;
                v23 = -v20;
                v3 = v11;
                v2 = v10;
                v1 = v9;
                v0 = v8;
            }
            else
            {
                v21 = -v18;
                v22 = -v19;
                v23 = -v20;
                v7 = 5.0f;
                v6 = 350.0f;
                v5 = 300.0f;
                v4 = 600.0f;
                CPlayerMelee::StartToss(a0, a0->field_128, 0, &v21, 600.0f, 300.0f, 350.0f, 5.0f);
                v21 = v18;
                v22 = v19;
                v23 = v20;
                v3 = v7;
                v2 = v6;
                v1 = v5;
                v0 = v4;
            }
            CPlayerMelee::StartToss(a0->field_130, a0->field_124, 0, &v21);
        }
        else
        {
            CBasePlayer::StartFly(a0->field_124);
        }
        a0->field_140 = 0;
        a0->field_130->field_140 = 0;
    }
    if (!a0->field_128->field_60->field_8c(a0->field_128))
        a0->field_130->field_180->field_8(a0->field_130);
    CPlayerMelee::SetAttackerOther(a0->field_130, 0);
    CPlayerMelee::SetDefender(a0->field_130, 0);
    CPlayerMelee::SetAttackerOther(a0, 0);
    return CPlayerMelee::SetDefender(a0, 0);
}

