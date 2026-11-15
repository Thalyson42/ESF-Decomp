// BeamUpdateVars__10CLightning @0xb2470 size=703
typedef struct st_4b2470_6 {
    struct st_4b2470_5 *field_0;
    char padding_4[132];
    unsigned int field_88;
    unsigned int field_8c;
} st_4b2470_6;

typedef struct st_4b2470_2 {
    char padding_0[124];
    int field_7c;
    char padding_80[8];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
} st_4b2470_2;

typedef struct st_4b2470_4 {
    struct st_4b2470_3 *field_0;
    char padding_4[116];
    unsigned int field_78;
    char padding_7c[4];
    unsigned int field_80;
    char padding_84[12];
    int field_90;
} st_4b2470_4;

typedef struct st_4b2470_3 {
    char padding_0[276];
    unsigned int field_114;
    char padding_118[24];
    float field_130;
    float field_134;
    char padding_138[16];
    unsigned int field_148;
    char padding_14c[84];
    char field_1a0;
    char field_1a1;
} st_4b2470_3;

typedef struct st_4b2470_5 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[84];
    unsigned int field_110;
    char padding_114[20];
    unsigned int field_128;
    char padding_12c[28];
    unsigned int field_148;
    char padding_14c[91];
    char field_1a7;
} st_4b2470_5;

typedef struct st_4b2470_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4b2470_0;

typedef struct st_4b2470_1 {
    unsigned int field_0;
} st_4b2470_1;

extern st_4b2470_1 *g_engfuncs.pfnFindEntityByString;
extern st_4b2470_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4b2470_1 *g_engfuncs.pfnIndexOfEdict;
extern st_4b2470_0 *gpGlobals;

unsigned int BeamUpdateVars__10CLightning(float a0)
{
    st_4b2470_2 *v7;  // edi
    st_4b2470_2 *v8;  // eax
    unsigned int idx;  // edx
    unsigned int *v18;  // ecx
    unsigned int index;  // edx
    st_4b2470_4 *v20;  // ecx
    st_4b2470_3 *v21;  // edx
    unsigned int v22;  // eax
    int v9;  // eax
    st_4b2470_2 *v10;  // eax
    int v11;  // eax
    unsigned int v12;  // ecx
    st_4b2470_6 *v13;  // esi
    unsigned int v14;  // esi
    unsigned int *v16;  // ecx
    float v0;  // [bp-0x5c]
    int v1;  // [bp-0x58]
    st_4b2470_2 *v2;  // [bp-0x30]
    st_4b2470_2 *v3;  // [bp-0x30]
    unsigned int v4;  // [bp-0x2c]
    unsigned int v5;  // [bp-0x24]

    v2 = g_engfuncs.pfnFindEntityByString(0, "targetname", *(int *)(*(unsigned int *)&a0 + 104) + gpGlobals->field_98);
    v7 = g_engfuncs.pfnFindEntityByString(0, "targetname", *(int *)(*(unsigned int *)&a0 + 108) + gpGlobals->field_98);
    v8 = v2;
    if (v8 || (v8 = g_engfuncs.pfnPEntityOfEntOffset(0), v8))
        v9 = v8->field_7c;
    else
        v9 = 0;
    v4 = IsPointEntity(v9);
    v10 = v7;
    if (v10 || (v10 = g_engfuncs.pfnPEntityOfEntOffset(0), v10))
        v11 = v10->field_7c;
    else
        v11 = 0;
    v12 = IsPointEntity(v11);
    v13 = (st_4b2470_6 *)a0;
    v13->field_0->field_110 = 0;
    v13->field_0->field_128 = 0;
    v13->field_0->field_148 = 0;
    v13->field_0->field_1a7 = v13->field_0->field_1a7 | 32;
    v13->field_0->field_b8 = v13->field_8c;
    v13->field_0->field_b4 = v13->field_88;
    v14 = 2;
    if (!v4)
    {
        if (!v12)
            goto LABEL_4b25bf;
        v3 = v7;
        v7 = v2;
        v12 = 0;
        v2 = v3;
    }
    v14 = !v12;
LABEL_4b25bf:
    *(unsigned int *)(*(int *)a0 + 328) = *(int *)(*(int *)a0 + 328) & 240 | v14;
    if (v14 <= 1 || v14 == 3)
    {
        v16 = &v2->field_88;
        idx = *(int *)a0;
        *(unsigned int *)(idx + 8) = v2->field_88;
        *(unsigned int *)(idx + 12) = v16[1];
        *(unsigned int *)(idx + 16) = v16[2];
        if (!v14 || v14 == 3)
        {
            v18 = &v7->field_88;
            index = *(int *)a0;
            *(unsigned int *)(index + 80) = v7->field_88;
            *(unsigned int *)(index + 84) = v18[1];
            *(unsigned int *)(index + 88) = v18[2];
        }
        else
        {
            v1 = g_engfuncs.pfnIndexOfEdict(v7);
            v0 = a0;
LABEL_4b2696:
            CBeam::SetEndEntity(v0, v1);
        }
    }
    else
    {
        CBeam::SetStartEntity(a0, g_engfuncs.pfnIndexOfEdict(v2));
        v1 = g_engfuncs.pfnIndexOfEdict(v7);
        v0 = a0;
        goto LABEL_4b2696;
    }
    CBeam::RelinkBeam(a0);
    v5 = *(int *)(*(unsigned int *)&a0 + 116);
    *(float *)(*(int *)a0 + 324) = (float)(int)v5;
    v20 = (st_4b2470_4 *)a0;
    v20->field_0->field_114 = v20->field_78;
    v20->field_0->field_130 = (float)v20->field_90;
    v5 = v20->field_80;
    v20->field_0->field_134 = (float)(int)v5;
    v21 = v20->field_0;
    if (v21->field_1a0 < 0)
    {
        v22 = v21->field_148 & 15 | 64;
    }
    else
    {
        v21 = *(int *)a0;
        if (!(v21->field_1a1 & 1))
            return v5;
        v22 = v21->field_148 & 15 | 128;
    }
    v21->field_148 = v22;
    return v22;
}

