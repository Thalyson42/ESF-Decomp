// Use__13CEnvExplosionP11CBaseEntityT18USE_TYPEf @0xba180 size=1174
typedef struct st_4ba180_5 {
    struct st_4ba180_4 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4ba180_5;

typedef struct st_4ba180_2 {
    char padding_0[416];
    char field_1a0;
} st_4ba180_2;

typedef struct st_4ba180_4 {
    char padding_0[260];
    float field_104;
    char padding_108[152];
    char field_1a0;
} st_4ba180_4;

typedef struct st_4ba180_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[164];
    unsigned int field_b8;
    char padding_bc[80];
    unsigned int field_10c;
    char padding_110[248];
    int field_208;
} st_4ba180_0;

typedef struct st_4ba180_3 {
    struct st_4ba180_2 *field_0;
    char padding_4[676];
    int field_2a8;
} st_4ba180_3;

typedef struct st_4ba180_6 {
    float field_0;
} st_4ba180_6;

typedef struct st_4ba180_1 {
    unsigned int field_0;
} st_4ba180_1;

extern char Smoke__13CEnvExplosion;
extern st_4ba180_1 *g_engfuncs.pfnMessageBegin;
extern st_4ba180_1 *g_engfuncs.pfnMessageEnd;
extern st_4ba180_1 *g_engfuncs.pfnWriteByte;
extern st_4ba180_1 *g_engfuncs.pfnWriteShort;
extern st_4ba180_1 *g_engfuncs.pfnWriteCoord;
extern st_4ba180_1 *g_engfuncs.pfnRandomLong;
extern st_4ba180_1 *g_engfuncs.pfnRandomFloat;
extern st_4ba180_6 *gpGlobals;
extern short g_sModelIndexFireball;

double Use__13CEnvExplosionP11CBaseEntityT18USE_TYPEf(float a0)
{
    st_4ba180_0 **v26;  // edx
    st_4ba180_0 *v27;  // edx
    unsigned int v36;  // eax
    st_4ba180_5 *v38;  // ecx
    double v39;  // mm7
    int v40;  // edi
    int i;  // esi
    unsigned int *v28;  // eax
    double v29;  // mm7
    unsigned int idx;  // edx
    double v31;  // mm7
    double v32;  // mm5
    double v33;  // mm5
    st_4ba180_3 *v34;  // ecx
    st_4ba180_2 *v35;  // edx
    unsigned int v0;  // [bp-0xe8]
    char *v1;  // [bp-0xbc]
    unsigned int v2;  // [bp-0xb8]
    float v3;  // [bp-0xa4]
    float v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    float v6;  // [bp-0x98]
    float v7;  // [bp-0x94]
    float v8;  // [bp-0x90]
    float v9;  // [bp-0x8c]
    float v10;  // [bp-0x88]
    float v11;  // [bp-0x84]
    float v12;  // [bp-0x80]
    float v13;  // [bp-0x7c]
    float v14;  // [bp-0x64]
    float v15;  // [bp-0x60]
    float v16;  // [bp-0x5c]
    char v17;  // [bp-0x44]
    float v18;  // [bp-0x34]
    float v19;  // [bp-0x30]
    float v20;  // [bp-0x2c]
    float v21;  // [bp-0x28]
    float v22;  // [bp-0x20]
    float v23;  // [bp-0x1c]
    float v24;  // [bp-0x18]

    v26 = (st_4ba180_0 **)a0;
    *v26->field_b8 = 0;
    *v26->field_10c = 0;
    v3 = 0;
    v4 = 0;
    v5 = 8.0f;
    v27 = *v26;
    v28 = &v27->field_8;
    v11 = v27->field_8 + v3;
    v12 = *(float *)&v28[1] + v4;
    v13 = *(float *)&v28[2] + v5;
    v14 = v11;
    v15 = v12;
    v16 = v13;
    v6 = 0;
    v7 = 0;
    v8 = -40.0f;
    v3 = v14 + v6;
    v4 = v15 + v7;
    v5 = v16 + v8;
    UTIL_TraceLine(&v14, &v3, 1, v27->field_208, &v17);
    v29 = v18;
    if (v29 != 1.0)
    {
        idx = *(int *)a0;
        v2 = *(int *)(*(unsigned int *)&a0 + 680) - 24;
        v31 = (double)(int)v2;
        v9 = (float)(v31 * v22);
        v10 = (float)(v31 * v23);
        v11 = (float)(v31 * v24);
        v32 = 0.6000000238418579 * v9;
        v6 = (float)v32;
        v33 = 0.6000000238418579 * v10;
        v7 = (float)v33;
        v8 = (float)(0.6000000238418579 * v11);
        v29 = v21 + v8;
        v3 = (float)(v32 + v19);
        v4 = (float)(v33 + v20);
        v5 = (float)v29;
        *(float *)(idx + 8) = v3;
        *(float *)(idx + 12) = v4;
        *(float *)(idx + 16) = v5;
    }
    if (!(*(char *)(*(int *)a0 + 416) & 16))
    {
        g_engfuncs.pfnRandomFloat(0, 0x3f800000);
        if (v29 < 0.5)
            v0 = 11;
        else
            v0 = 12;
        UTIL_DecalTrace(&v17);
    }
    if (!(*(char *)(*(int *)a0 + 416) & 4))
    {
        g_engfuncs.pfnMessageBegin(5, 23, *(int *)a0 + 8, 0);
        g_engfuncs.pfnWriteByte(3);
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 8));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 12));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 16));
        g_engfuncs.pfnWriteShort(g_sModelIndexFireball);
        g_engfuncs.pfnWriteByte(*(char *)(*(unsigned int *)&a0 + 684));
        g_engfuncs.pfnWriteByte(15);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnMessageEnd();
    }
    else
    {
        g_engfuncs.pfnMessageBegin(5, 23, *(int *)a0 + 8, 0);
        g_engfuncs.pfnWriteByte(3);
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 8));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 12));
        g_engfuncs.pfnWriteCoord(*(float *)(*(int *)a0 + 16));
        g_engfuncs.pfnWriteShort(g_sModelIndexFireball);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnWriteByte(15);
        g_engfuncs.pfnWriteByte(0);
        g_engfuncs.pfnMessageEnd();
    }
    v34 = (st_4ba180_3 *)a0;
    v35 = v34->field_0;
    if (!(v35->field_1a0 & 1))
        CBaseMonster::RadiusDamage(v34, v35, v35, (float)v34->field_2a8, 0, 64);
    v38 = (st_4ba180_5 *)a0;
    v38->field_c = _INSERT(v36, 0, 0) | 0xffff0000;
    v38->field_10 = &Smoke__13CEnvExplosion;
    v39 = 0.3 + *(float *)gpGlobals;
    v38->field_0->field_104 = (float)v39;
    if (v38->field_0->field_1a0 & 32)
        return v39;
    v40 = g_engfuncs.pfnRandomLong(0, 3);
    i = 0;
    if (0 >= v40)
        return v39;
    v1 = &v22;
    do
    {
        CBaseEntity::Create("spark_shower", *(int *)a0 + 8, v1, 0);
        i += 1;
    } while (i < v40);
    return v39;
}

