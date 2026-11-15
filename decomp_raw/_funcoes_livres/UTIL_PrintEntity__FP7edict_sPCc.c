// UTIL_PrintEntity__FP7edict_sPCc @0x179db0 size=9509
typedef struct st_579db0_2 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_579db0_2;

typedef struct st_579db0_0 {
    unsigned int field_0;
} st_579db0_0;

extern int g_5b085c;
extern st_579db0_0 *g_engfuncs.pfnIndexOfEdict;
extern st_579db0_2 *gpGlobals;

int UTIL_PrintEntity__FP7edict_sPCc(void* a0, int a1)
{
    int v27;  // esi
    double v36;  // mm7
    double v37;  // mm6
    void* v38;  // edx
    double v39;  // mm7
    double v40;  // mm6
    double v41;  // mm7
    double v42;  // mm6
    void* v43;  // edx
    void* v44;  // ecx
    void* v45;  // edi
    void* v28;  // edi
    double v46;  // mm7
    double v47;  // mm6
    double v48;  // mm7
    double v49;  // mm6
    void* v50;  // edx
    void* v51;  // ecx
    void* v52;  // edi
    int v53;  // eax
    void* v54;  // edi
    void* v55;  // edi
    double v29;  // mm7
    int v56;  // eax
    void* v57;  // edi
    int v58;  // eax
    void* v59;  // edi
    char *v60;  // edx
    char *v61;  // edi
    unsigned int v62;  // ecx
    char *v63;  // edi
    unsigned int v64;  // ecx
    char *v65;  // edi
    double v30;  // mm6
    void* v66;  // edi
    void* v67;  // edi
    int v68;  // eax
    void* v69;  // edi
    int v70;  // eax
    int v71;  // ecx
    unsigned int v72;  // 128
    int v73;  // edx
    void* v74;  // ecx
    int v75;  // eax
    double v31;  // mm7
    void* v76;  // edi
    char *v77;  // edx
    char *v78;  // edi
    unsigned int v79;  // ecx
    char *v80;  // edi
    unsigned int v81;  // ecx
    char *v82;  // edi
    char *v83;  // eax
    char *v84;  // eax
    char *v85;  // eax
    double v32;  // mm6
    char *v86;  // edx
    char *v87;  // edi
    unsigned int v88;  // ecx
    char *v89;  // edi
    unsigned int v90;  // ecx
    char *v91;  // edi
    void* v92;  // edi
    int v93;  // eax
    void* v94;  // edi
    void* v95;  // edi
    void* v33;  // edx
    int v96;  // eax
    void* v97;  // edi
    int v98;  // eax
    void* v99;  // edi
    int v100;  // eax
    char *v101;  // eax
    double v34;  // mm7
    double v35;  // mm6
    float v0;  // [bp-0x12c]
    float v1;  // [bp-0x124]
    float v2;  // [bp-0x11c]
    char *v3;  // [bp-0x11c], Other Possible Types: int
    int v4;  // [bp-0x118]
    unsigned int v5;  // [bp-0x114]
    float v6;  // [bp-0x114]
    unsigned int v7;  // [bp-0x110]
    char *v8;  // [bp-0xf0]
    char *v9;  // [bp-0xec]
    char *v10;  // [bp-0xe8]
    char *v11;  // [bp-0xe4]
    st_579db0_2 **v12;  // [bp-0xe0]
    st_579db0_2 **v13;  // [bp-0xdc]
    char *v14;  // [bp-0xd8]
    char *v15;  // [bp-0xd4]
    char *v16;  // [bp-0xd0]
    char *v17;  // [bp-0xcc]
    char *v18;  // [bp-0xc8]
    char *v19;  // [bp-0xc4]
    char *v20;  // [bp-0xc0]
    char *v21;  // [bp-0xbc]
    char *v22;  // [bp-0xb8]
    float v23;  // [bp-0xa8]
    char v24;  // [bp-0x88]
    char v25;  // [bp-0x84]

    if (!a1)
        sprintf@GLIBC_2.0(&v25, "bot%i.txt", g_engfuncs.pfnIndexOfEdict(a0));
    else
        strcpy@GLIBC_2.0(&v25, a1);
    v27 = fopen@GLIBC_2.1(&v25, "a");
    fprintf@GLIBC_2.0(v27, "\n");
    v28 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.classname = %d (\"%s\")\n", (int)v28[128], gpGlobals->field_98 + (int)v28[128]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.globalname = %d (\"%s\")\n", (int)v28[132], gpGlobals->field_98 + (int)v28[132]);
    v6 = (float)v28[144];
    v2 = (float)v28[140];
    fprintf@GLIBC_2.0(v27, "pEntity->v.origin = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v28[0x88] >> 0));
    v6 = (float)v28[156];
    v2 = (float)v28[152];
    fprintf@GLIBC_2.0(v27, "pEntity->v.oldorigin = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v28[148] >> 0));
    v29 = (float)v28[160] * (float)v28[160] + (float)v28[164] * (float)v28[164];
    v30 = sqrt(v29);
    if (isnan(v30))
        sqrt(*(unsigned int *)&v29);
    else
        v29 = v30;
    v23 = (float)v29;
    v6 = v23;
    v31 = (float)a0[160] * (float)a0[160] + (float)a0[164] * (float)a0[164] + (float)a0[168] * (float)a0[168];
    v32 = sqrt(v31);
    if (isnan(v32))
        sqrt(*(unsigned int *)&v31);
    else
        v31 = v32;
    v23 = (float)v31;
    v2 = v23;
    v33 = a0;
    v1 = (float)v33[168];
    v0 = (float)v33[164];
    fprintf@GLIBC_2.0(v27, "pEntity->v.velocity = Vector (%.1f, %.1f, %.1f) - Length %.3f - Length2D %.3f\n", (unsigned int)((float)v33[160] >> 0));
    v34 = (float)a0[160] * (float)a0[160] + (float)a0[164] * (float)a0[164];
    v35 = sqrt(v34);
    if (isnan(v35))
        sqrt(*(unsigned int *)&v34);
    else
        v34 = v35;
    v23 = (float)v34;
    v6 = v23;
    v36 = (float)a0[160] * (float)a0[160] + (float)a0[164] * (float)a0[164] + (float)a0[168] * (float)a0[168];
    v37 = sqrt(v36);
    if (isnan(v37))
        sqrt(*(unsigned int *)&v36);
    else
        v36 = v37;
    v23 = (float)v36;
    v2 = v23;
    v38 = a0;
    v1 = (float)v38[180];
    v0 = (float)v38[176];
    fprintf@GLIBC_2.0(v27, "pEntity->v.basevelocity = Vector (%.1f, %.1f, %.1f) - Length %.3f - Length2D %.3f\n", (unsigned int)((float)v38[172] >> 0));
    v39 = (float)a0[160] * (float)a0[160] + (float)a0[164] * (float)a0[164];
    v40 = sqrt(v39);
    if (isnan(v40))
        sqrt(*(unsigned int *)&v39);
    else
        v39 = v40;
    v23 = (float)v39;
    v6 = v23;
    v41 = (float)a0[160] * (float)a0[160] + (float)a0[164] * (float)a0[164] + (float)a0[168] * (float)a0[168];
    v42 = sqrt(v41);
    if (isnan(v42))
        sqrt(*(unsigned int *)&v41);
    else
        v41 = v42;
    v23 = (float)v41;
    v2 = v23;
    v43 = a0;
    v1 = (float)v43[192];
    v0 = (float)v43[188];
    fprintf@GLIBC_2.0(v27, "pEntity->v.clbasevelocity = Vector (%.1f, %.1f, %.1f) - Length %.3f - Length2D %.3f\n", (unsigned int)((float)v43[184] >> 0));
    v44 = a0;
    v6 = (float)v44[0xcc];
    v2 = (float)v44[200];
    fprintf@GLIBC_2.0(v27, "pEntity->v.movedir = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v44[196] >> 0));
    v45 = a0;
    v6 = (float)v45[216];
    v2 = (float)v45[212];
    fprintf@GLIBC_2.0(v27, "pEntity->v.angles = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v45[208] >> 0));
    v46 = (float)v45[160] * (float)v45[160] + (float)v45[164] * (float)v45[164];
    v47 = sqrt(v46);
    if (isnan(v47))
        sqrt(*(unsigned int *)&v46);
    else
        v46 = v47;
    v23 = (float)v46;
    v6 = v23;
    v48 = (float)a0[160] * (float)a0[160] + (float)a0[164] * (float)a0[164] + (float)a0[168] * (float)a0[168];
    v49 = sqrt(v48);
    if (isnan(v49))
        sqrt(*(unsigned int *)&v48);
    else
        v48 = v49;
    v23 = (float)v48;
    v2 = v23;
    v50 = a0;
    v1 = (float)v50[228];
    v0 = (float)v50[224];
    fprintf@GLIBC_2.0(v27, "pEntity->v.avelocity = Vector (%.1f, %.1f, %.1f) - Length %.3f - Length2D %.3f\n", (unsigned int)((float)v50[220] >> 0));
    v51 = a0;
    v6 = (float)v51[240];
    v2 = (float)v51[236];
    fprintf@GLIBC_2.0(v27, "pEntity->v.punchangle = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v51[232] >> 0));
    v52 = a0;
    v6 = (float)v52[252];
    v2 = (float)v52[248];
    fprintf@GLIBC_2.0(v27, "pEntity->v.v_angle = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v52[244] >> 0));
    v6 = (float)v52[264];
    v2 = (float)v52[260];
    fprintf@GLIBC_2.0(v27, "pEntity->v.endpos = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v52[0x100] >> 0));
    v6 = (float)v52[276];
    v2 = (float)v52[272];
    fprintf@GLIBC_2.0(v27, "pEntity->v.startpos = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v52[268] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.impacttime = %.3f\n", (unsigned int)((float)v52[280] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.starttime = %.3f\n", (unsigned int)((float)v52[284] >> 0));
    if (!(int)v52[288])
    {
        v53 = "nothing";
    }
    else if ((int)v52[288] != 1)
    {
        v53 = "???";
        if ((int)v52[288] == 2)
            v53 = "add velocity";
    }
    else
    {
        v53 = "force view angles";
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.fixangle = %d (%s)\n", (int)a0[288], v53);
    fprintf@GLIBC_2.0(v27, "pEntity->v.idealpitch = %.3f\n", (unsigned int)((float)a0[292] >> 0));
    v54 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.pitch_speed = %.3f\n", (unsigned int)((float)v54[296] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.ideal_yaw = %.3f\n", (unsigned int)((float)v54[300] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.yaw_speed = %.3f\n", (unsigned int)((float)v54[304] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.modelindex = %d\n", (int)v54[308]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.model = %d (\"%s\")\n", (int)v54[312], gpGlobals->field_98 + (int)v54[312]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.viewmodel = %d (\"%s\")\n", (int)v54[316], gpGlobals->field_98 + (int)v54[316]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.weaponmodel = %d (\"%s\")\n", (int)a0[320], gpGlobals->field_98 + (int)a0[320]);
    v55 = a0;
    v1 = (float)v55[332];
    v0 = (float)v55[328];
    fprintf@GLIBC_2.0(v27, "pEntity->v.absmin = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v55[324] >> 0));
    v6 = (float)v55[344];
    v2 = (float)v55[340];
    fprintf@GLIBC_2.0(v27, "pEntity->v.absmax = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v55[336] >> 0));
    v6 = (float)v55[356];
    v2 = (float)v55[352];
    fprintf@GLIBC_2.0(v27, "pEntity->v.mins = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v55[348] >> 0));
    v6 = (float)v55[368];
    v2 = (float)v55[364];
    fprintf@GLIBC_2.0(v27, "pEntity->v.maxs = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v55[360] >> 0));
    v6 = (float)v55[380];
    v2 = (float)v55[376];
    fprintf@GLIBC_2.0(v27, "pEntity->v.size = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v55[372] >> 0));
    v2 = gpGlobals->field_0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.ltime = %.3f (current time is %.3f)\n", (unsigned int)((float)v55[384] >> 0));
    v2 = gpGlobals->field_0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.nextthink = %.3f (current time is %.3f)\n", (unsigned int)((float)v55[388] >> 0));
    if (!(int)v55[392])
    {
        v56 = "MOVETYPE_NONE";
    }
    else if ((int)v55[392] == 3)
    {
        v56 = "MOVETYPE_WALK";
    }
    else if ((int)v55[392] == 4)
    {
        v56 = "MOVETYPE_STEP";
    }
    else if ((int)v55[392] == 5)
    {
        v56 = "MOVETYPE_FLY";
    }
    else if ((int)v55[392] == 6)
    {
        v56 = "MOVETYPE_TOSS";
    }
    else if ((int)v55[392] == 7)
    {
        v56 = "MOVETYPE_PUSH";
    }
    else if ((int)v55[392] == 8)
    {
        v56 = "MOVETYPE_NOCLIP";
    }
    else if ((int)v55[392] == 9)
    {
        v56 = "MOVETYPE_FLYMISSILE";
    }
    else if ((int)v55[392] == 10)
    {
        v56 = "MOVETYPE_BOUNCE";
    }
    else if ((int)v55[392] == 16)
    {
        v56 = "MOVETYPE_BOUNCEMISSILE";
    }
    else if ((int)v55[392] != 12)
    {
        v56 = "???";
        if ((int)v55[392] == 13)
            v56 = "MOVETYPE_PUSHSTEP";
    }
    else
    {
        v56 = "MOVETYPE_FOLLOW";
    }
    v57 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.movetype = %d (%s)\n", (int)v57[392], v56);
    if (!(int)v57[396])
    {
        v58 = "SOLID_NOT";
    }
    else if ((int)v57[396] == 1)
    {
        v58 = "SOLID_TRIGGER";
    }
    else if ((int)v57[396] == 2)
    {
        v58 = "SOLID_BBOX";
    }
    else if ((int)v57[396] != 3)
    {
        v58 = "???";
        if ((int)v57[396] == 4)
            v58 = "SOLID_BSP";
    }
    else
    {
        v58 = "SOLID_SLIDEBOX";
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.solid = %d (%s)\n", (int)a0[396], v58);
    v59 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.skin = %d (\"%s\")\n", (int)v59[400], gpGlobals->field_98 + (int)v59[400]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.body = %d (\"%s\")\n", (int)v59[404], gpGlobals->field_98 + (int)v59[404]);
    v22 = &v25;
    sprintf@GLIBC_2.0(&v25, &g_5b085c);
    if ((char)v59[408] & 1)
        strcat@GLIBC_2.0(v22, "EF_BRIGHTFIELD | ");
    if ((char)a0[408] & 2)
        strcat@GLIBC_2.0(&v25, "EF_MUZZLEFLASH | ");
    if ((char)a0[408] & 4)
        strcat@GLIBC_2.0(&v25, "EF_BRIGHTLIGHT | ");
    if ((char)a0[408] & 8)
        strcat@GLIBC_2.0(&v25, "EF_DIMLIGHT | ");
    if ((char)a0[408] & 16)
        strcat@GLIBC_2.0(&v25, "EF_INVLIGHT | ");
    if ((char)a0[408] & 32)
        strcat@GLIBC_2.0(&v25, "EF_NOINTERP | ");
    if ((char)a0[408] & 64)
        strcat@GLIBC_2.0(&v25, "EF_LIGHT | ");
    if ((char)a0[408] < 0)
        strcat@GLIBC_2.0(&v25, "EF_NODRAW | ");
    v60 = &v25;
    v8 = &v25;
    v61 = &v25;
    v62 = 0xffffffff;
    do
    {
        v63 = v61;
    } while (v62 && (v62 -= 1, v61 = v63 + 1, *v63));
    if (~v62 - 1 > 2)
    {
        v64 = 0xffffffff;
        do
        {
            v65 = v60;
        } while (v64 && (v64 -= 1, v60 = v65 + 1, *v65));
        (&v24)[~v64] = 0;
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.effects = %d (%s)\n", (int)a0[408], &v25);
    fprintf@GLIBC_2.0(v27, "pEntity->v.gravity = %.3f (fraction /1 of normal)\n", (unsigned int)((float)a0[412] >> 0));
    v66 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.friction = %.3f\n", (unsigned int)((float)v66[416] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.light_level = %d\n", (int)v66[420]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.sequence = %d (\"%s\")\n", (int)v66[424], gpGlobals->field_98 + (int)v66[424]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.gaitsequence = %d (\"%s\")\n", (int)v66[428], gpGlobals->field_98 + (int)v66[428]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.frame = %.3f (position /255 of total in sequence)\n", (unsigned int)((float)v66[432] >> 0));
    v0 = gpGlobals->field_0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.animtime = %.3f (current time is %.3f)\n", (unsigned int)((float)a0[436] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.framerate = %.3f (times normal speed)\n", (unsigned int)((float)a0[440] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.controller = {%d, %d, %d, %d}\n", (char)a0[444], (char)a0[445], (char)a0[446], (char)a0[447]);
    v67 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.blending = {%d, %d}\n", (char)v67[448], (char)v67[449]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.scale = %.3f\n", (unsigned int)((float)v67[452] >> 0));
    if (!(int)v67[456])
    {
        v68 = "kRenderNormal";
    }
    else if ((int)v67[456] == 1)
    {
        v68 = "kRenderTransColor";
    }
    else if ((int)v67[456] == 2)
    {
        v68 = "kRenderTransTexture";
    }
    else if ((int)v67[456] == 3)
    {
        v68 = "kRenderGlow";
    }
    else if ((int)v67[456] != 4)
    {
        v68 = "???";
        if ((int)v67[456] == 5)
            v68 = "kRenderTransAdd";
    }
    else
    {
        v68 = "kRenderTransAlpha";
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.rendermode = %d (%s)\n", (int)a0[456], v68);
    fprintf@GLIBC_2.0(v27, "pEntity->v.renderamt = %.3f\n", (unsigned int)((float)a0[460] >> 0));
    v69 = a0;
    v6 = (float)v69[472];
    v2 = (float)v69[468];
    fprintf@GLIBC_2.0(v27, "pEntity->v.rendercolor = Vector (%.1f, %.1f, %.1f) (RGB)\n", (unsigned int)((float)v69[464] >> 0));
    if (!(int)v69[476])
    {
        v70 = "kRenderFxNone";
    }
    else if ((int)v69[476] == 1)
    {
        v70 = "kRenderFxPulseSlow";
    }
    else if ((int)v69[476] == 2)
    {
        v70 = "kRenderFxPulseFast";
    }
    else if ((int)v69[476] == 3)
    {
        v70 = "kRenderFxPulseSlowWide";
    }
    else if ((int)v69[476] == 4)
    {
        v70 = "kRenderFxPulseFastWide";
    }
    else if ((int)v69[476] == 5)
    {
        v70 = "kRenderFxFadeSlow";
    }
    else if ((int)v69[476] == 6)
    {
        v70 = "kRenderFxFadeFast";
    }
    else if ((int)v69[476] == 7)
    {
        v70 = "kRenderFxSolidSlow";
    }
    else if ((int)v69[476] == 8)
    {
        v70 = "kRenderFxSolidFast";
    }
    else if ((int)v69[476] == 9)
    {
        v70 = "kRenderFxStrobeSlow";
    }
    else if ((int)v69[476] == 10)
    {
        v70 = "kRenderFxStrobeFast";
    }
    else if ((int)v69[476] == 11)
    {
        v70 = "kRenderFxStrobeFaster";
    }
    else if ((int)v69[476] == 12)
    {
        v70 = "kRenderFxFlickerSlow";
    }
    else if ((int)v69[476] == 13)
    {
        v70 = "kRenderFxFlickerFast";
    }
    else if ((int)v69[476] == 14)
    {
        v70 = "kRenderFxNoDissipation";
    }
    else if ((int)v69[476] == 15)
    {
        v70 = "kRenderFxDistort";
    }
    else if ((int)v69[476] == 16)
    {
        v70 = "kRenderFxHologram";
    }
    else if ((int)v69[476] == 0x11)
    {
        v70 = "kRenderFxDeadPlayer";
    }
    else if ((int)v69[476] == 18)
    {
        v70 = "kRenderFxExplode";
    }
    else if ((int)v69[476] != 19)
    {
        v70 = "???";
        if ((int)v69[476] == 20)
            v70 = "kRenderFxClampMinScale";
    }
    else
    {
        v70 = "kRenderFxGlowShell";
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.renderfx = %d (%s)\n", (int)a0[476], v70);
    fprintf@GLIBC_2.0(v27, "pEntity->v.health = %.3f\n", (unsigned int)((float)a0[480] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.frags = %.3f\n", (unsigned int)((float)a0[484] >> 0));
    sprintf@GLIBC_2.0(&v25, "00000000000000000000000000000000");
    v71 = 0;
    do
    {
        if ((char)((int)a0[488] >> ((char)v71 & 31)) & 1)
            (&v25)[v71] = 49;
    } while ((v71 += 1, v71 <= 31));
    fprintf@GLIBC_2.0(v27, "pEntity->v.weapons = %d (%s)\n", (int)a0[488], &v25);
    v72 = __float_as_int((float)a0[492]);
    if (__int_as_float(v72) == 0.0)
    {
        v73 = "DAMAGE_NO";
    }
    else if (__int_as_float(v72) != 1.0)
    {
        v73 = "???";
        if (__int_as_float(v72) == 2.0f)
            v73 = "DAMAGE_AIM";
    }
    else
    {
        v73 = "DAMAGE_YES";
    }
    v3 = v73;
    fprintf@GLIBC_2.0(v27, "pEntity->v.takedamage = %.3f (%s)\n", (unsigned int)((float)a0[492] >> 0));
    v74 = a0;
    if (!(int)v74[496])
    {
        v75 = "DEAD_NO";
    }
    else if ((int)v74[496] == 1)
    {
        v75 = "DEAD_DYING";
    }
    else if ((int)v74[496] == 2)
    {
        v75 = "DEAD_DEAD";
    }
    else if ((int)v74[496] != 3)
    {
        v75 = "???";
        if ((int)v74[496] == 4)
            v75 = "DEAD_DISCARDBODY";
    }
    else
    {
        v75 = "DEAD_RESPAWNABLE";
    }
    v76 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.deadflag = %d (%s)\n", (int)v76[496], v75);
    v1 = (float)v76[508];
    v0 = (float)v76[504];
    fprintf@GLIBC_2.0(v27, "pEntity->v.view_ofs = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v76[500] >> 0));
    v21 = &v25;
    sprintf@GLIBC_2.0(&v25, &g_5b085c);
    if ((char)v76[0x200] & 1)
        strcat@GLIBC_2.0(v21, "IN_ATTACK | ");
    if ((char)a0[0x200] & 2)
        strcat@GLIBC_2.0(&v25, "IN_JUMP | ");
    if ((char)a0[0x200] & 4)
        strcat@GLIBC_2.0(&v25, "IN_DUCK | ");
    if ((char)a0[0x200] & 8)
        strcat@GLIBC_2.0(&v25, "IN_FORWARD | ");
    if ((char)a0[0x200] & 16)
        strcat@GLIBC_2.0(&v25, "IN_BACK | ");
    if ((char)a0[0x200] & 32)
        strcat@GLIBC_2.0(&v25, "IN_USE | ");
    if ((char)a0[0x200] & 64)
        strcat@GLIBC_2.0(&v25, "IN_CANCEL | ");
    if ((char)a0[0x200] < 0)
        strcat@GLIBC_2.0(&v25, "IN_LEFT | ");
    if ((char)a0[513] & 1)
        strcat@GLIBC_2.0(&v25, "IN_RIGHT | ");
    if ((char)a0[513] & 2)
        strcat@GLIBC_2.0(&v25, "IN_MOVELEFT | ");
    if ((char)a0[513] & 4)
        strcat@GLIBC_2.0(&v25, "IN_MOVERIGHT | ");
    if ((char)a0[513] & 8)
        strcat@GLIBC_2.0(&v25, "IN_ATTACK2 | ");
    if ((char)a0[513] & 16)
        strcat@GLIBC_2.0(&v25, "IN_RUN | ");
    if ((char)a0[513] & 32)
        strcat@GLIBC_2.0(&v25, "IN_RELOAD | ");
    if ((char)a0[513] & 64)
        strcat@GLIBC_2.0(&v25, "IN_ALT1 | ");
    if ((short)a0[0x200] < 0)
        strcat@GLIBC_2.0(&v25, "IN_SCORE | ");
    v77 = &v25;
    v8 = &v25;
    v78 = &v25;
    v79 = 0xffffffff;
    do
    {
        v80 = v78;
    } while (v79 && (v79 -= 1, v78 = v80 + 1, *v80));
    if (~v79 - 1 > 2)
    {
        v81 = 0xffffffff;
        do
        {
            v82 = v77;
        } while (v81 && (v81 -= 1, v77 = v82 + 1, *v82));
        (&v24)[~v81] = 0;
    }
    v20 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.button = %d (%s)\n", (int)a0[0x200], &v25);
    fprintf@GLIBC_2.0(v27, "pEntity->v.impulse = %d\n", (int)a0[516]);
    if ((int)a0[520])
    {
        v7 = *(int *)((int)a0[520] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[520]);
        v4 = "Entity #%d (\"%s\")";
        v83 = v20;
    }
    else
    {
        v4 = "NULL";
        v83 = &v25;
    }
    sprintf@GLIBC_2.0(v83);
    v19 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.chain = %s\n", &v25);
    if ((int)a0[524])
    {
        v7 = *(int *)((int)a0[524] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[524]);
        v4 = "Entity #%d (\"%s\")";
        v3 = v19;
    }
    else
    {
        v4 = "NULL";
        v3 = &v25;
    }
    sprintf@GLIBC_2.0(v3, v4);
    v18 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.dmg_inflictor = %s\n", &v25);
    if ((int)a0[528])
    {
        v7 = *(int *)((int)a0[528] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[528]);
        v4 = "Entity #%d (\"%s\")";
        v84 = v18;
    }
    else
    {
        v4 = "NULL";
        v84 = &v25;
    }
    sprintf@GLIBC_2.0(v84);
    v17 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.enemy = %s\n", &v25);
    if ((int)a0[532])
    {
        v7 = *(int *)((int)a0[532] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[532]);
        v4 = "Entity #%d (\"%s\")";
        v3 = v17;
    }
    else
    {
        v4 = "NULL";
        v3 = &v25;
    }
    sprintf@GLIBC_2.0(v3, v4);
    v16 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.aiment = %s\n", &v25);
    if ((int)a0[536])
    {
        v7 = *(int *)((int)a0[536] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[536]);
        v4 = "Entity #%d (\"%s\")";
        v85 = v16;
    }
    else
    {
        v4 = "NULL";
        v85 = &v25;
    }
    sprintf@GLIBC_2.0(v85);
    v15 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.owner = %s\n", &v25);
    if ((int)a0[540])
    {
        v7 = *(int *)((int)a0[540] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[540]);
        v4 = "Entity #%d (\"%s\")";
        v3 = v15;
    }
    else
    {
        v4 = "NULL";
        v3 = &v25;
    }
    sprintf@GLIBC_2.0(v3, v4);
    v14 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.groundentity = %s\n", &v25);
    fprintf@GLIBC_2.0(v27, "pEntity->v.spawnflags = %d\n", (int)a0[544]);
    sprintf@GLIBC_2.0(v14, &g_5b085c);
    if ((char)a0[548] & 1)
        strcat@GLIBC_2.0(v14, "FL_FLY | ");
    if ((char)a0[548] & 2)
        strcat@GLIBC_2.0(&v25, "FL_SWIM | ");
    if ((char)a0[548] & 4)
        strcat@GLIBC_2.0(&v25, "FL_CONVEYOR | ");
    if ((char)a0[548] & 8)
        strcat@GLIBC_2.0(&v25, "FL_CLIENT | ");
    if ((char)a0[548] & 16)
        strcat@GLIBC_2.0(&v25, "FL_INWATER | ");
    if ((char)a0[548] & 32)
        strcat@GLIBC_2.0(&v25, "FL_MONSTER | ");
    if ((char)a0[548] & 64)
        strcat@GLIBC_2.0(&v25, "FL_GODMODE | ");
    if ((char)a0[548] < 0)
        strcat@GLIBC_2.0(&v25, "FL_NOTARGET | ");
    if ((char)a0[549] & 1)
        strcat@GLIBC_2.0(&v25, "FL_SKIPLOCALHOST | ");
    if ((char)a0[549] & 2)
        strcat@GLIBC_2.0(&v25, "FL_ONGROUND | ");
    if ((char)a0[549] & 4)
        strcat@GLIBC_2.0(&v25, "FL_PARTIALGROUND | ");
    if ((char)a0[549] & 8)
        strcat@GLIBC_2.0(&v25, "FL_WATERJUMP | ");
    if ((char)a0[549] & 16)
        strcat@GLIBC_2.0(&v25, "FL_FROZEN | ");
    if ((char)a0[549] & 32)
        strcat@GLIBC_2.0(&v25, "FL_FAKECLIENT | ");
    if ((short)a0[548] < 0)
        strcat@GLIBC_2.0(&v25, "FL_FLOAT | ");
    if ((char)a0[550] & 1)
        strcat@GLIBC_2.0(&v25, "FL_GRAPHED | ");
    if ((char)a0[550] & 2)
        strcat@GLIBC_2.0(&v25, "FL_IMMUNE_WATER | ");
    if ((char)a0[550] & 4)
        strcat@GLIBC_2.0(&v25, "FL_IMMUNE_SLIME | ");
    if ((char)a0[550] & 8)
        strcat@GLIBC_2.0(&v25, "FL_IMMUNE_LAVA | ");
    if ((char)a0[550] & 16)
        strcat@GLIBC_2.0(&v25, "FL_PROXY | ");
    if ((char)a0[550] & 32)
        strcat@GLIBC_2.0(&v25, "FL_ALWAYSTHINK | ");
    if ((char)a0[550] & 64)
        strcat@GLIBC_2.0(&v25, "FL_BASEVELOCITY | ");
    if ((char)a0[550] & 128)
        strcat@GLIBC_2.0(&v25, "FL_MONSTERCLIP | ");
    if ((char)a0[551] & 1)
        strcat@GLIBC_2.0(&v25, "FL_ONTRAIN | ");
    if ((char)a0[551] & 2)
        strcat@GLIBC_2.0(&v25, "FL_WORLDBRUSH | ");
    if ((char)a0[551] & 4)
        strcat@GLIBC_2.0(&v25, "FL_SPECTATOR | ");
    if ((char)a0[551] & 32)
        strcat@GLIBC_2.0(&v25, "FL_CUSTOMENTITY | ");
    if ((char)a0[551] & 64)
        strcat@GLIBC_2.0(&v25, "FL_KILLME | ");
    if ((int)a0[548] < NULL)
        strcat@GLIBC_2.0(&v25, "FL_DORMANT | ");
    v86 = &v25;
    v8 = &v25;
    v87 = &v25;
    v88 = 0xffffffff;
    do
    {
        v89 = v87;
    } while (v88 && (v88 -= 1, v87 = v89 + 1, *v89));
    if (~v88 - 1 > 2)
    {
        v90 = 0xffffffff;
        do
        {
            v91 = v86;
        } while (v90 && (v90 -= 1, v86 = v91 + 1, *v91));
        (&v24)[~v90] = 0;
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.flags = %d (%s)\n", (int)a0[548], &v25);
    fprintf@GLIBC_2.0(v27, "pEntity->v.colormap = %d (0x%X)\n", (int)a0[552], (int)a0[552]);
    v92 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.team = %d\n", (int)v92[556]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.max_health = %.3f\n", (unsigned int)((float)v92[560] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.teleport_time = %.3f\n", (unsigned int)((float)v92[564] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.armortype = %.3f\n", (unsigned int)((float)v92[568] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.armorvalue = %.3f\n", (unsigned int)((float)v92[572] >> 0));
    if (!(int)v92[576])
    {
        v93 = "not in water";
    }
    else if ((int)v92[576] != 2)
    {
        v93 = "???";
        if ((int)v92[576] == 3)
            v93 = "swimming in water";
    }
    else
    {
        v93 = "walking in water";
    }
    fprintf@GLIBC_2.0(v27, "pEntity->v.waterlevel = %d (%s)\n", (int)a0[576], v93);
    fprintf@GLIBC_2.0(v27, "pEntity->v.watertype = %d\n", (int)a0[580]);
    v13 = &gpGlobals;
    fprintf@GLIBC_2.0(v27, "pEntity->v.target = %d (\"%s\")\n", (int)a0[584], gpGlobals->field_98 + (int)a0[584]);
    v94 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.targetname = %d (\"%s\")\n", (int)v94[588], gpGlobals->field_98 + (int)v94[588]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.netname = %d (\"%s\")\n", (int)v94[592], *v13->field_98 + (int)v94[592]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.message = %d (\"%s\")\n", (int)v94[596], *v13->field_98 + (int)v94[596]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.dmg_take = %.3f\n", (unsigned int)((float)v94[600] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.dmg_save = %.3f\n", (unsigned int)((float)v94[604] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.dmg = %.3f\n", (unsigned int)((float)v94[608] >> 0));
    v0 = *v13->field_0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.dmgtime = %.3f (current time is %.3f)\n", (unsigned int)((float)a0[612] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.noise = %d (\"%s\")\n", (int)a0[616], *v13->field_98 + (int)a0[616]);
    v95 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.noise1 = %d (\"%s\")\n", (int)v95[620], *v13->field_98 + (int)v95[620]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.noise2 = %d (\"%s\")\n", (int)v95[624], *v13->field_98 + (int)v95[624]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.noise3 = %d (\"%s\")\n", (int)v95[628], *v13->field_98 + (int)v95[628]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.speed = %.3f\n", (unsigned int)((float)v95[632] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.air_finished = %.3f\n", (unsigned int)((float)v95[636] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.pain_finished = %.3f\n", (unsigned int)((float)v95[640] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.radsuit_finished = %.3f\n", (unsigned int)((float)v95[644] >> 0));
    if ((int)v95[648])
    {
        v7 = *(int *)((int)a0[648] + 128) + *v13->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[648]);
        v96 = "Entity #%d (\"%s\")";
    }
    else
    {
        v96 = "NULL";
    }
    sprintf@GLIBC_2.0(&v25, v96);
    fprintf@GLIBC_2.0(v27, "pEntity->v.pContainingEntity = %s\n", &v25);
    fprintf@GLIBC_2.0(v27, "pEntity->v.playerclass = %d\n", (int)a0[652]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.maxspeed = %.3f\n", (unsigned int)((float)a0[656] >> 0));
    v97 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.fov = %.3f\n", (unsigned int)((float)v97[660] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.weaponanim = %d\n", (int)v97[664]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.pushmsec = %d\n", (int)v97[668]);
    v98 = "FALSE";
    if ((int)v97[672] > NULL)
        v98 = "TRUE";
    fprintf@GLIBC_2.0(v27, "pEntity->v.bInDuck = %d (%s)\n", (int)a0[672], v98);
    v12 = &gpGlobals;
    v99 = a0;
    fprintf@GLIBC_2.0(v27, "pEntity->v.flTimeStepSound = %d (current time is %.3f)\n", (int)v99[676], (unsigned int)(gpGlobals->field_0 >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.flSwimTime = %d (current time is %.3f)\n", (int)v99[680], (unsigned int)(*v12->field_0 >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.flDuckTime = %d (current time is %.3f)\n", (int)v99[684], (unsigned int)(*v12->field_0 >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.iStepLeft = %d\n", (int)v99[688]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.flFallVelocity = %.3f\n", (unsigned int)((float)v99[692] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.gamestate = %d\n", (int)v99[696]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.oldbuttons = %d\n", (int)v99[700]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.groupinfo = %d\n", (int)v99[704]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.iuser1 = %d\n", (int)v99[708]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.iuser2 = %d\n", (int)v99[712]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.iuser3 = %d\n", (int)v99[716]);
    fprintf@GLIBC_2.0(v27, "pEntity->v.fuser1 = %.3f\n", (unsigned int)((float)v99[724] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.fuser2 = %.3f\n", (unsigned int)((float)v99[728] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.fuser3 = %.3f\n", (unsigned int)((float)v99[732] >> 0));
    fprintf@GLIBC_2.0(v27, "pEntity->v.fuser4 = %.3f\n", (unsigned int)((float)v99[736] >> 0));
    v6 = (float)v99[748];
    v2 = (float)v99[744];
    fprintf@GLIBC_2.0(v27, "pEntity->v.vuser1 = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v99[740] >> 0));
    v6 = (float)v99[760];
    v2 = (float)v99[756];
    fprintf@GLIBC_2.0(v27, "pEntity->v.vuser2 = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v99[752] >> 0));
    v6 = (float)v99[772];
    v2 = (float)v99[0x300];
    fprintf@GLIBC_2.0(v27, "pEntity->v.vuser3 = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v99[764] >> 0));
    v6 = (float)v99[784];
    v2 = (float)v99[780];
    fprintf@GLIBC_2.0(v27, "pEntity->v.vuser4 = Vector (%.1f, %.1f, %.1f)\n", (unsigned int)((float)v99[776] >> 0));
    if ((int)v99[788])
    {
        v7 = *(int *)((int)a0[788] + 128) + *v12->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[788]);
        v100 = "Entity #%d (\"%s\")";
    }
    else
    {
        v100 = "NULL";
    }
    sprintf@GLIBC_2.0(&v25, v100);
    v11 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.euser1 = %s\n", &v25);
    if ((int)a0[792])
    {
        v7 = *(int *)((int)a0[792] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[792]);
        v4 = "Entity #%d (\"%s\")";
        v3 = v11;
    }
    else
    {
        v4 = "NULL";
        v3 = &v25;
    }
    sprintf@GLIBC_2.0(v3, v4);
    v10 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.euser2 = %s\n", &v25);
    if ((int)a0[796])
    {
        v7 = *(int *)((int)a0[796] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[796]);
        v4 = "Entity #%d (\"%s\")";
        v101 = v10;
    }
    else
    {
        v4 = "NULL";
        v101 = &v25;
    }
    sprintf@GLIBC_2.0(v101);
    v9 = &v25;
    fprintf@GLIBC_2.0(v27, "pEntity->v.euser3 = %s\n", &v25);
    if ((int)a0[800])
    {
        v7 = *(int *)((int)a0[800] + 128) + gpGlobals->field_98;
        v5 = g_engfuncs.pfnIndexOfEdict((int)a0[800]);
        v4 = "Entity #%d (\"%s\")";
        v3 = v9;
    }
    else
    {
        v4 = "NULL";
        v3 = &v25;
    }
    sprintf@GLIBC_2.0(v3, v4);
    fprintf@GLIBC_2.0(v27, "pEntity->v.euser4 = %s\n", &v25);
    fprintf@GLIBC_2.0(v27, "\n");
    return fclose@GLIBC_2.1(v27);
}

