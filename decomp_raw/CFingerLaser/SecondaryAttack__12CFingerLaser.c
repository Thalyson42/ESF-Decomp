// SecondaryAttack__12CFingerLaser @0xbe010 size=1236
typedef struct st_4be010_6 {
    char padding_0[128];
    struct st_4be010_5 *field_80;
} st_4be010_6;

typedef struct st_4be010_0 {
    char padding_0[160];
    struct st_4be010_1 *field_a0;
} st_4be010_0;

typedef struct st_4be010_9 {
    char padding_0[196];
    char field_c4;
} st_4be010_9;

typedef struct st_4be010_8 {
    char padding_0[128];
    int field_80;
    char padding_84[64];
    char field_c4;
} st_4be010_8;

typedef struct st_4be010_11 {
    struct st_4be010_10 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4be010_11;

typedef struct st_4be010_10 {
    char padding_0[260];
    float field_104;
    char padding_108[8];
    unsigned int field_110;
    char padding_114[56];
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
} st_4be010_10;

typedef struct st_4be010_1 {
    unsigned int field_0;
} st_4be010_1;

typedef struct st_4be010_4 {
    char padding_0[480];
    struct st_4be010_1 *field_1e0;
} st_4be010_4;

typedef struct st_4be010_3 {
    char padding_0[116];
    char field_74;
    char padding_75[7];
    struct st_4be010_2 *field_7c;
    char field_80;
    char padding_81[279];
    unsigned int field_198;
    char padding_19c[108];
    int field_208;
} st_4be010_3;

typedef struct st_4be010_2 {
    char padding_0[96];
    struct st_4be010_0 *field_60;
    char padding_64[896];
    unsigned int field_3e4;
} st_4be010_2;

typedef struct st_4be010_5 {
    struct st_4be010_3 *field_0;
    char padding_4[92];
    struct st_4be010_4 *field_60;
} st_4be010_5;

typedef struct st_4be010_7 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4be010_7;

extern char SUB_Remove__11CBaseEntity;
extern unsigned int gmsgExplosion;
extern st_4be010_1 *g_engfuncs.pfnMessageBegin;
extern st_4be010_1 *g_engfuncs.pfnMessageEnd;
extern st_4be010_1 *g_engfuncs.pfnWriteByte;
extern st_4be010_1 *g_engfuncs.pfnWriteLong;
extern st_4be010_1 *g_engfuncs.pfnWriteCoord;
extern st_4be010_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4be010_1 *g_engfuncs.pfnIndexOfEdict;
extern st_4be010_7 *gpGlobals;
extern char g_800000;

float SecondaryAttack__12CFingerLaser(float a0)
{
    st_4be010_6 *v33;  // esi
    unsigned int *v34;  // edx
    unsigned int v43;  // eax
    double v44;  // mm6
    st_4be010_10 *v45;  // eax
    double v47;  // mm6
    st_4be010_3 *v48;  // eax
    st_4be010_2 *v49;  // esi
    unsigned int v50;  // eax
    int v51;  // edi
    double v52;  // mm7
    st_4be010_3 *v35;  // ecx
    unsigned int *v53;  // esi
    float v54;  // mm7
    double v36;  // mm4
    double v37;  // mm4
    st_4be010_8 *v38;  // edx
    int v39;  // eax
    st_4be010_9 *v40;  // eax
    st_4be010_11 *v41;  // esi
    unsigned int v0;  // [bp-0x110]
    unsigned int v1;  // [bp-0x10c]
    float v2;  // [bp-0xe0]
    unsigned int v3;  // [bp-0xdc], Other Possible Types: int
    int v4;  // [bp-0xdc]
    unsigned short v5;  // [bp-0xd8]
    unsigned short v6;  // [bp-0xd6]
    float v7;  // [bp-0xc8]
    int v8;  // [bp-0xc4]
    float v9;  // [bp-0xc4]
    unsigned int v10;  // [bp-0xc0]
    float v11;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xbc]
    float v13;  // [bp-0xbc]
    float v14;  // [bp-0xa4]
    float v15;  // [bp-0xa0]
    float v16;  // [bp-0x9c]
    char v17;  // [bp-0x84]
    float v18;  // [bp-0x74]
    float v19;  // [bp-0x70]
    unsigned int v20;  // [bp-0x6c]
    unsigned int v21;  // [bp-0x68]
    st_4be010_3 *v22;  // [bp-0x54]
    char v23;  // [bp-0x44]
    float v24;  // [bp-0x44]
    float v25;  // [bp-0x40]
    unsigned int v26;  // [bp-0x40]
    float v27;  // [bp-0x3c]
    unsigned int v28;  // [bp-0x3c]
    float v29;  // [bp-0x24]
    float v30;  // [bp-0x20]
    float v31;  // [bp-0x1c]

    if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&a0 + 128), 200))
        return v54;
    v33 = (st_4be010_6 *)a0;
    UTIL_MakeVectors(&v33->field_80->field_0->field_74);
    v34 = &gpGlobals->field_28;
    v29 = gpGlobals->field_28;
    v30 = *(float *)&v34[1];
    v31 = *(float *)&v34[2];
    v33->field_80->field_60->field_1e0(&v23, v33->field_80);
    v35 = v33->field_80->field_0;
    v36 = 8192.0 * v29;
    v9 = (float)v36;
    v37 = 8192.0 * v30;
    v11 = (float)v37;
    v13 = (float)(8192.0 * v31);
    v14 = (float)(v36 + v24);
    v15 = (float)(v37 + v25);
    v16 = v27 + v13;
    do
    {
        UTIL_TraceLine(&v24, &v14, 0, v35->field_208, &v17);
        v24 = v19;
        v26 = v20;
        v28 = v21;
    } while ((v35 = (!v22 ? NULL : (struct st_4be010_3 *)&v22->field_80), (!v35->field_198 ? 0 : v35->field_198 + 128) == *(int *)*(int *)(*(unsigned int *)&a0 + 128) && 1.0 > v18));
    v38 = (st_4be010_8 *)a0;
    if (v38->field_c4)
    {
        v1 = 5;
        v39 = v38->field_80;
    }
    else
    {
        v1 = 6;
        v39 = *(int *)(*(unsigned int *)&a0 + 128);
    }
    CBasePlayer::SetAnimation(v39);
    v40 = (st_4be010_9 *)a0;
    v40->field_c4 = v40->field_c4 ^ 1;
    CFingerLaser::EmitShootSound(v40);
    v41 = CBeam::BeamCreate("sprites/fingerlaserbeam.spr", 3);
    CBeam::PointEntInit(v41, &v19, g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&a0 + 128) + 520)));
    v43 = _INSERT(v41->field_0->field_110 & 0xfff, 1, (char)((v41->field_0->field_110 & 0xfff) >> 8) | 16);
    v41->field_0->field_110 = v43;
    v8 = 0xff;
    v44 = (double)v8;
    v41->field_0->field_150 = (float)v44;
    v41->field_0->field_154 = (float)v44;
    v41->field_0->field_158 = (float)v44;
    v45 = v41->field_0;
    v45->field_14c = (float)v44;
    v41->field_c = _INSERT(v45, 0, 0) | 0xffff0000;
    v41->field_10 = &SUB_Remove__11CBaseEntity;
    v41->field_0->field_104 = (float)(0.75 + gpGlobals->field_0);
    v2 = 1.0;
    v47 = 1.0;
    if (1.0 > v18 && v22)
    {
        v48 = v22;
        if (v48 || (v48 = g_engfuncs.pfnPEntityOfEntOffset(0), v48))
            v49 = v48->field_7c;
        else
            v49 = NULL;
        if (v49 && v49->field_60->field_a0(v49) && v49->field_3e4)
        {
            v50 = 0;
            if (v49->field_3e4 == 3 || v49->field_3e4 == 5 || v49->field_3e4 == 4)
                v50 = 1;
            if (v50)
            {
                v2 = 0;
            }
            else
            {
                v47 = 0.5;
                v2 = 0.5f;
            }
        }
    }
    CBasePlayerWeapon::GetPowerRatio(a0);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v3 = (int)(v47 * 15.0 * v2);
    v51 = v3;
    v9 = v19;
    v10 = v20;
    v12 = v21;
    v3 = v51 * 2;
    v4 = v51;
    RadiusDamage(&v9, *(int *)*(int *)(*(unsigned int *)&a0 + 128), *(int *)*(int *)(*(unsigned int *)&a0 + 128), (float)v4, (float)(int)v3, 0, &g_800000);
    g_engfuncs.pfnMessageBegin(2, gmsgExplosion, 0, 0);
    g_engfuncs.pfnWriteCoord(v19);
    g_engfuncs.pfnWriteCoord(v20);
    g_engfuncs.pfnWriteCoord(v21);
    v3 = v51;
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v3 = (int)((double)v3 * 2.5);
    g_engfuncs.pfnWriteLong(v3);
    v0 = 3;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    UTIL_WeaponTimeBase();
    v7 = (float)(v52 + 0.3);
    v53 = (unsigned int *)a0;
    *(float *)&v53[40] = v7;
    *(float *)&v53[39] = v7;
    return v7;
}

