// PrimaryAttack__12CFingerLaser @0xbdc70 size=927
typedef struct st_4bdc70_5 {
    char padding_0[124];
    struct st_4bdc70_4 *field_7c;
} st_4bdc70_5;

typedef struct st_4bdc70_10 {
    char padding_0[128];
    struct st_4bdc70_3 *field_80;
} st_4bdc70_10;

typedef struct st_4bdc70_2 {
    char padding_0[52];
    struct st_4bdc70_3 *field_34;
    char padding_38[104];
    struct st_4bdc70_3 *field_a0;
} st_4bdc70_2;

typedef struct st_4bdc70_6 {
    char padding_0[196];
    char field_c4;
} st_4bdc70_6;

typedef struct st_4bdc70_0 {
    char padding_0[128];
    int field_80;
    char padding_84[64];
    char field_c4;
} st_4bdc70_0;

typedef struct st_4bdc70_9 {
    struct st_4bdc70_8 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4bdc70_9;

typedef struct st_4bdc70_8 {
    char padding_0[260];
    float field_104;
    char padding_108[8];
    unsigned int field_110;
    char padding_114[56];
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
} st_4bdc70_8;

typedef struct st_4bdc70_1 {
    char padding_0[408];
    unsigned int field_198;
} st_4bdc70_1;

typedef struct st_4bdc70_3 {
    unsigned int field_0;
} st_4bdc70_3;

typedef struct st_4bdc70_4 {
    struct st_4bdc70_1 *field_0;
    char padding_4[92];
    struct st_4bdc70_2 *field_60;
    char padding_64[896];
    unsigned int field_3e4;
} st_4bdc70_4;

typedef struct st_4bdc70_7 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4bdc70_7;

extern char SUB_Remove__11CBaseEntity;
extern st_4bdc70_3 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4bdc70_3 *g_engfuncs.pfnIndexOfEdict;
extern st_4bdc70_7 *gpGlobals;
extern char g_800000;

float PrimaryAttack__12CFingerLaser(float idx)
{
    st_4bdc70_0 *v28;  // ecx
    int v29;  // eax
    st_4bdc70_8 *v38;  // eax
    double v40;  // mm6
    unsigned int v41;  // edx
    st_4bdc70_5 *v42;  // eax
    st_4bdc70_4 *v43;  // eax
    st_4bdc70_4 *v44;  // edi
    unsigned int v45;  // eax
    st_4bdc70_10 *v46;  // ecx
    double v47;  // mm6
    st_4bdc70_6 *v30;  // ecx
    float *v48;  // edx
    unsigned long long v49;  // mm7
    unsigned long long v50;  // mm7
    unsigned int *v31;  // edx
    double v32;  // mm4
    double v33;  // mm4
    st_4bdc70_9 *v34;  // esi
    unsigned int v36;  // eax
    double v37;  // mm6
    unsigned int v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xf8]
    float v2;  // [bp-0xd8]
    float v3;  // [bp-0xc4]
    unsigned int v4;  // [bp-0xc0]
    float v5;  // [bp-0xc0]
    float v6;  // [bp-0xbc]
    unsigned int v7;  // [bp-0xbc]
    int v8;  // [bp-0xb8]
    float v9;  // [bp-0xa4]
    float v10;  // [bp-0xa0]
    float v11;  // [bp-0x9c]
    char v12;  // [bp-0x84]
    float v13;  // [bp-0x74]
    float v14;  // [bp-0x70]
    unsigned int v15;  // [bp-0x6c]
    unsigned int v16;  // [bp-0x68]
    st_4bdc70_5 *v17;  // [bp-0x54]
    float v18;  // [bp-0x44]
    char v19;  // [bp-0x44]
    float v20;  // [bp-0x40]
    unsigned int v21;  // [bp-0x40]
    float v22;  // [bp-0x3c]
    unsigned int v23;  // [bp-0x3c]
    float v24;  // [bp-0x24]
    float v25;  // [bp-0x20]
    float v26;  // [bp-0x1c]

    if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 150))
        return v50;
    v28 = (st_4bdc70_0 *)idx;
    if (v28->field_c4)
    {
        v1 = 5;
        v29 = v28->field_80;
    }
    else
    {
        v1 = 6;
        v29 = *(int *)(*(unsigned int *)&idx + 128);
    }
    CBasePlayer::SetAnimation(v29);
    v30 = (st_4bdc70_6 *)idx;
    v30->field_c4 = v30->field_c4 ^ 1;
    CFingerLaser::EmitShootSound(v30);
    UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
    v31 = &gpGlobals->field_28;
    v24 = gpGlobals->field_28;
    v25 = *(float *)&v31[1];
    v26 = *(float *)&v31[2];
    (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(&v19, *(int *)(*(unsigned int *)&idx + 128));
    v32 = 8192.0 * v24;
    v3 = (float)v32;
    v33 = 8192.0 * v25;
    v5 = (float)v33;
    v6 = (float)(8192.0 * v26);
    v9 = (float)(v32 + v18);
    v10 = (float)(v33 + v20);
    v11 = v22 + v6;
    UTIL_TraceLine(&v19, &v9, 1, *(int *)(*(int *)idx + 520), &v12);
    v3 = v14;
    v4 = v15;
    v7 = v16;
    v34 = CBeam::BeamCreate("sprites/fingerlaserbeam.spr", 3);
    CBeam::PointEntInit(v34, &v3, g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520)));
    v36 = _INSERT(v34->field_0->field_110 & 0xfff, 1, (char)((v34->field_0->field_110 & 0xfff) >> 8) | 16);
    v34->field_0->field_110 = v36;
    v8 = 0xff;
    v37 = (double)v8;
    v34->field_0->field_150 = (float)v37;
    v34->field_0->field_154 = (float)v37;
    v34->field_0->field_158 = (float)v37;
    v38 = v34->field_0;
    v38->field_14c = (float)v37;
    v34->field_c = _INSERT(v38, 0, 0) | 0xffff0000;
    v34->field_10 = &SUB_Remove__11CBaseEntity;
    v40 = 0.75 + gpGlobals->field_0;
    v34->field_0->field_104 = (float)v40;
    v41 = *(int *)*(int *)(*(unsigned int *)&idx + 128);
    do
    {
        UTIL_TraceLine(&v18, &v3, 0, *(int *)(v41 + 520), &v12);
        v42 = v17;
        if (v42 || (v42 = g_engfuncs.pfnPEntityOfEntOffset(0), v42))
            v43 = v42->field_7c;
        else
            v43 = NULL;
        v44 = v43;
        v2 = 1.0;
        if (v44 && v44->field_60->field_a0(v44) && v44->field_3e4)
        {
            v45 = 0;
            if (v44->field_3e4 == 3 || v44->field_3e4 == 5 || v44->field_3e4 == 4)
                v45 = 1;
            if (v45)
            {
                v2 = 0;
            }
            else
            {
                v40 = 0.5;
                v2 = 0.5f;
            }
        }
        v46 = (st_4bdc70_10 *)idx;
        if ((!v44->field_0->field_198 ? 0 : v44->field_0->field_198 + 128) != *(int *)v46->field_80)
        {
            v0 = &g_800000;
            CBasePlayerWeapon::GetPowerRatio(v46);
            v44->field_60->field_34(v44, *(int *)*(int *)(*(unsigned int *)&idx + 128), *(int *)*(int *)(*(unsigned int *)&idx + 128), (float)(v40 * 25.0 * v2));
        }
        v41 = v44->field_0;
        v18 = v14;
        v21 = v15;
        v23 = v16;
        v40 = 1.0;
    } while (1.0 > v13);
    UTIL_WeaponTimeBase();
    v47 = 1.0 + 3.0;
    v48 = (float *)idx;
    v48[40] = (float)v47;
    v48[39] = (float)v47;
    return v49;
}

