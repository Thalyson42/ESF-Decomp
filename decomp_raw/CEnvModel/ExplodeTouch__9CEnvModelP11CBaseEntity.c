// ExplodeTouch__9CEnvModelP11CBaseEntity @0xb8a40 size=1060
typedef struct st_4b8a40_2 {
    char padding_0[376];
    unsigned int field_178;
} st_4b8a40_2;

typedef struct st_4b8a40_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    char field_20;
    char padding_21[375];
    unsigned int field_198;
} st_4b8a40_1;

typedef struct st_4b8a40_0 {
    unsigned int field_0;
} st_4b8a40_0;

extern st_4b8a40_0 *g_engfuncs.pfnMessageBegin;
extern st_4b8a40_0 *g_engfuncs.pfnMessageEnd;
extern st_4b8a40_0 *g_engfuncs.pfnWriteByte;
extern st_4b8a40_0 *g_engfuncs.pfnWriteShort;
extern st_4b8a40_0 *g_engfuncs.pfnWriteCoord;
extern char g_800000;

int ExplodeTouch__9CEnvModelP11CBaseEntity(float a0)
{
    unsigned int v35;  // ecx
    st_4b8a40_1 *v36;  // eax
    double v45;  // mm7
    double v46;  // mm5
    double v47;  // mm5
    st_4b8a40_1 *v48;  // ecx
    unsigned int *v49;  // eax
    double v50;  // mm5
    double v51;  // mm5
    double v52;  // mm5
    double v53;  // mm5
    unsigned int *v37;  // edx
    st_4b8a40_2 *v38;  // esi
    double v39;  // mm7
    double v40;  // mm6
    double v41;  // mm7
    st_4b8a40_2 *v42;  // esi
    double v43;  // mm7
    double v44;  // mm6
    unsigned int v0;  // [bp-0xfc]
    float v1;  // [bp-0xd8]
    float v2;  // [bp-0xc4]
    float v3;  // [bp-0xc0]
    float v4;  // [bp-0xbc]
    float v5;  // [bp-0xa4]
    float v6;  // [bp-0xa0]
    float v7;  // [bp-0x9c]
    float v8;  // [bp-0x84]
    float v9;  // [bp-0x80]
    float v10;  // [bp-0x7c]
    float v11;  // [bp-0x78]
    unsigned int v12;  // [bp-0x78]
    float v13;  // [bp-0x74]
    unsigned int v14;  // [bp-0x74]
    float v15;  // [bp-0x70]
    unsigned int v16;  // [bp-0x70]
    char v17;  // [bp-0x64]
    float v18;  // [bp-0x54]
    unsigned int v19;  // [bp-0x50]
    unsigned int v20;  // [bp-0x4c]
    unsigned int v21;  // [bp-0x48]
    float v22;  // [bp-0x40]
    float v23;  // [bp-0x3c]
    float v24;  // [bp-0x38]
    unsigned int v25;  // [bp-0x24]
    float v26;  // [bp-0x24]
    unsigned int v27;  // [bp-0x20]
    float v28;  // [bp-0x20]
    float v29;  // [bp-0x1c]
    unsigned int v30;  // [bp-0x1c]
    float v31;  // [bp-0x18]
    float v32;  // [bp-0x14]
    float v33;  // [bp-0x10]

    if (!*(int *)(*(int *)a0 + 408) || (v35 = *(int *)(*(int *)a0 + 408) + 128, !*(int *)(*(int *)a0 + 408)))
        v35 = 0;
    v36 = *(int *)a0;
    v37 = &v36->field_8;
    *(float *)&v25 = *(float *)&v36->field_8;
    *(float *)&v27 = *(float *)&v37[1];
    *(float *)&v30 = *(float *)&v37[2];
    RadiusDamage(&v25, v36, v35, *(float *)&v36[1].padding_21[35], (float)(*(float *)&v36[1].padding_21[35] * 3.0), 0, &g_800000);
    v38 = *(int *)a0 + 32;
    v39 = *(float *)(*(int *)a0 + 32) * *(float *)(*(int *)a0 + 32) + *(float *)&v38->padding_0[4] * *(float *)&v38->padding_0[4] + *(float *)&v38->padding_0[8] * *(float *)&v38->padding_0[8];
    v40 = sqrt(v39);
    if (isnan(v40))
        sqrt(*(unsigned int *)&v39);
    else
        v39 = v40;
    v11 = (float)v39;
    if (v11 == 0.0f)
    {
        v31 = 0.0f;
        v32 = 0.0f;
        v33 = 1.0;
    }
    else
    {
        v41 = 1.0 / v11;
        v31 = (float)(v41 * *(float *)&v38->padding_0[0]);
        v32 = (float)(v41 * *(float *)&v38->padding_0[4]);
        v33 = (float)(v41 * *(float *)&v38->padding_0[8]);
    }
    v26 = (float)(3.0 * v31);
    v28 = (float)(3.0 * v32);
    v29 = (float)(3.0 * v33);
    v42 = *(int *)a0 + 32;
    v43 = *(float *)(*(int *)a0 + 32) * *(float *)(*(int *)a0 + 32) + *(float *)&v42->padding_0[4] * *(float *)&v42->padding_0[4] + *(float *)&v42->padding_0[8] * *(float *)&v42->padding_0[8];
    v44 = sqrt(v43);
    if (isnan(v44))
        sqrt(*(unsigned int *)&v43);
    else
        v43 = v44;
    v11 = (float)v43;
    if (v11 == 0.0f)
    {
        v31 = 0.0f;
        v32 = 0.0f;
        v33 = 1.0;
    }
    else
    {
        v45 = 1.0 / v11;
        v31 = (float)(v45 * *(float *)&v42->padding_0[0]);
        v32 = (float)(v45 * *(float *)&v42->padding_0[4]);
        v33 = (float)(v45 * *(float *)&v42->padding_0[8]);
    }
    v46 = -20.0 * v31;
    v11 = (float)v46;
    v47 = -20.0 * v32;
    v13 = (float)v47;
    v15 = (float)(-20.0 * v33);
    v48 = *(int *)a0;
    v49 = &v48->field_8;
    v50 = v46 + *(float *)&v48->field_8;
    v8 = (float)v50;
    v51 = v47 + *(float *)&v49[1];
    v9 = (float)v51;
    v10 = *(float *)&v49[2] + v15;
    v5 = (float)(v50 + v26);
    v6 = (float)(v51 + v28);
    v7 = v10 + v29;
    v52 = 30.0 * v31;
    v2 = (float)v52;
    v53 = 30.0 * v32;
    v3 = (float)v53;
    v4 = (float)(30.0 * v33);
    v11 = (float)(v52 + v5);
    v13 = (float)(v53 + v6);
    v15 = v7 + v4;
    UTIL_TraceLine(&v8, &v11, 1, *(int *)&v48[1].padding_21[75], &v17);
    v12 = v19;
    v14 = v20;
    v16 = v21;
    if (1.0 <= v18)
        return UTIL_Remove(a0);
    g_engfuncs.pfnMessageBegin(2, 23, 0, 0);
    g_engfuncs.pfnWriteByte(108);
    g_engfuncs.pfnWriteCoord(v12);
    g_engfuncs.pfnWriteCoord(v14);
    g_engfuncs.pfnWriteCoord(v16);
    g_engfuncs.pfnWriteCoord(0x42480000);
    g_engfuncs.pfnWriteCoord(0x42480000);
    g_engfuncs.pfnWriteCoord(0x42480000);
    v1 = 200.0f;
    g_engfuncs.pfnWriteCoord((float)(200.0 * v22));
    g_engfuncs.pfnWriteCoord(v1 * v23);
    g_engfuncs.pfnWriteCoord(v1 * v24);
    g_engfuncs.pfnWriteByte(30);
    g_engfuncs.pfnWriteShort(*(short *)(*(unsigned int *)&a0 + 704));
    g_engfuncs.pfnWriteByte(20);
    g_engfuncs.pfnWriteByte(50);
    v0 = 0;
    g_engfuncs.pfnWriteByte(v0);
    g_engfuncs.pfnMessageEnd(v0);
    return UTIL_Remove(a0);
}

