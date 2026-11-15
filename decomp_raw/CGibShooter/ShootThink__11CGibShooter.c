// ShootThink__11CGibShooter @0xb45a0 size=1066
typedef struct st_4b45a0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[216];
    float field_104;
} st_4b45a0_1;

typedef struct st_4b45a0_2 {
    struct st_4b45a0_1 *field_0;
    char padding_4[688];
    unsigned int field_2b4;
} st_4b45a0_2;

typedef struct st_4b45a0_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
    float field_34;
    float field_38;
    float field_3c;
    float field_40;
    float field_44;
    float field_48;
} st_4b45a0_0;

typedef struct st_4b45a0_3 {
    unsigned int field_0;
} st_4b45a0_3;

extern char SUB_Remove__11CBaseEntity;
extern st_4b45a0_3 *g_engfuncs.pfnRandomFloat;
extern st_4b45a0_0 *gpGlobals;

double ShootThink__11CGibShooter(float idx)
{
    float v21;  // 128
    unsigned int *v22;  // edx
    double v31;  // mm7
    double v32;  // mm6
    double v33;  // mm7
    double v34;  // mm7
    st_4b45a0_2 *v35;  // edi
    st_4b45a0_1 *v36;  // ecx
    unsigned int *v37;  // edx
    st_4b45a0_1 *v38;  // edx
    unsigned int v39;  // 128
    st_4b45a0_1 *v40;  // eax
    unsigned int *v23;  // edx
    unsigned int *v41;  // edx
    float v43;  // 128
    unsigned int v24;  // 128
    float v25;  // 128
    unsigned int *v26;  // edx
    unsigned int v27;  // 128
    float v28;  // 128
    unsigned int *v29;  // edx
    unsigned int v30;  // 128
    char v0[16];  // [bp-0xbc]
    st_4b45a0_0 **v1;  // [bp-0x8c]
    float v2;  // [bp-0x88]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    float v6;  // [bp-0x78]
    float v7;  // [bp-0x74]
    float v8;  // [bp-0x70]
    float v9;  // [bp-0x6c]
    float v10;  // [bp-0x68]
    float v11;  // [bp-0x64]
    float v12;  // [bp-0x60]
    float v13;  // [bp-0x5c]
    float v14;  // [bp-0x44]
    float v15;  // [bp-0x40]
    float v16;  // [bp-0x3c]
    float v17;  // [bp-0x24]
    float v18;  // [bp-0x20]
    float v19;  // [bp-0x1c]

    v21 = gpGlobals->field_0 + *(float *)(*(unsigned int *)&idx + 100);
    *(float *)(*(int *)idx + 260) = v21;
    v22 = *(int *)idx;
    *(unsigned int *)&v17 = v22[0x11];
    *(unsigned int *)&v18 = v22[18];
    *(unsigned int *)&v19 = v22[19];
    g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
    v23 = &gpGlobals->field_40;
    v3 = v21 * gpGlobals->field_40;
    v4 = v21 * *(float *)&v23[1];
    v5 = v21 * *(float *)&v23[2];
    v24 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 128);
    v11 = __int_as_float(v24) * v3;
    v12 = __int_as_float(v24) * v4;
    v13 = __int_as_float(v24) * v5;
    v25 = v19 + v13;
    v14 = v11 + v17;
    v15 = v12 + v18;
    v16 = v25;
    v17 = v14;
    v18 = v15;
    v19 = v16;
    g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
    v26 = &gpGlobals->field_28;
    v9 = v25 * gpGlobals->field_28;
    v10 = v25 * *(float *)&v26[1];
    v11 = v25 * *(float *)&v26[2];
    v27 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 128);
    v6 = __int_as_float(v27) * v9;
    v7 = __int_as_float(v27) * v10;
    v8 = __int_as_float(v27) * v11;
    v28 = v19 + v8;
    v3 = v6 + v17;
    v4 = v7 + v18;
    v5 = v28;
    v17 = v3;
    v18 = v4;
    v19 = v5;
    g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
    v29 = &gpGlobals->field_34;
    v9 = v28 * gpGlobals->field_34;
    v10 = v28 * *(float *)&v29[1];
    v11 = v28 * *(float *)&v29[2];
    v30 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 128);
    v6 = __int_as_float(v30) * v9;
    v7 = __int_as_float(v30) * v10;
    v8 = __int_as_float(v30) * v11;
    v3 = v6 + v17;
    v4 = v7 + v18;
    v5 = v19 + v8;
    v17 = v3;
    v18 = v4;
    v19 = v5;
    v31 = v17 * v17 + v18 * v18 + v19 * v19;
    v32 = sqrt(v31);
    if (isnan(v32))
        sqrt(*(unsigned int *)&v31);
    else
        v31 = v32;
    v9 = (float)v31;
    if (v9 == 0.0f)
    {
        v33 = 0.0;
        v3 = 0.0f;
        v4 = 0.0f;
        v5 = 1.0;
    }
    else
    {
        v34 = 1.0 / v9;
        v3 = (float)(v34 * v17);
        v33 = v34 * v19;
        v4 = (float)(v34 * v18);
        v5 = (float)v33;
    }
    v17 = v3;
    v18 = v4;
    v19 = v5;
    v35 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 232))(idx);
    if (v35)
    {
        v36 = v35->field_0;
        v37 = *(int *)idx;
        v36->field_8 = v37[2];
        v36->field_c = v37[3];
        v36->field_10 = v37[4];
        v38 = v35->field_0;
        v39 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 124);
        v3 = __int_as_float(v39) * v17;
        v4 = __int_as_float(v39) * v18;
        v5 = __int_as_float(v39) * v19;
        *(float *)&v38->field_20 = v3;
        *(float *)&v38->field_24 = v4;
        *(float *)&v38->field_28 = v5;
        v0 = 0x42c80000;
        g_engfuncs.pfnRandomFloat(v0, 200.0f);
        *(float *)&v35->field_0->padding_2c[48] = 200.0f;
        g_engfuncs.pfnRandomFloat(0x42c80000, 300.0f);
        *(float *)&v35->field_0->padding_2c[52] = 300.0f;
        v1 = &gpGlobals;
        v2 = v35->field_0->field_104 - gpGlobals->field_0;
        strncpy(v0, "33s?", 4);
        g_engfuncs.pfnRandomFloat(v0, 1.0499999523162842f);
        v33 = 0.949999988079071 * *(float *)(*(unsigned int *)&idx + 132);
        *(float *)&v35->field_2b4 = (float)v33;
        if (v33 < v2)
        {
            v40 = v35->field_0;
            v33 = *v1->field_0 + *(float *)&v35->field_2b4;
            v40->field_104 = (float)v33;
            v35->field_2b4 = 0;
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 108) = *(int *)(*(unsigned int *)&idx + 108) - 1;
    if (*(int *)(*(unsigned int *)&idx + 108) > 0)
        return v33;
    v41 = *(int *)idx;
    if ((char)v41[104] & 1)
    {
        *(int *)(*(unsigned int *)&idx + 108) = *(int *)(*(unsigned int *)&idx + 112);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v40, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SUB_Remove__11CBaseEntity;
        v41 = *(int *)idx;
    }
    v43 = gpGlobals->field_0;
    *(float *)&v41[65] = v43;
    return v43;
}

