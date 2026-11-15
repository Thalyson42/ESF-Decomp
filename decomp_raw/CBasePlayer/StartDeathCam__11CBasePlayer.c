// StartDeathCam__11CBasePlayer @0xf7e60 size=542
typedef struct st_4f7e60_1 {
    char padding_0[8];
    char field_8;
    char padding_9[363];
    unsigned int field_174;
    unsigned int field_178;
    unsigned int field_17c;
} st_4f7e60_1;

typedef struct st_4f7e60_0 {
    unsigned int field_0;
} st_4f7e60_0;

extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_4f7e60_0 *g_engfuncs.pfnFindEntityByString;
extern st_4f7e60_0 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4f7e60_0 *g_engfuncs.pfnRandomLong;

unsigned int StartDeathCam__11CBasePlayer(float a0)
{
    st_4f7e60_1 *v19;  // edx
    unsigned int v20;  // esi
    unsigned int *v29;  // ecx
    unsigned int *v30;  // edx
    unsigned int v31;  // eax
    float *v21;  // edi
    unsigned int v22;  // esi
    int v23;  // esi
    float *v24;  // eax
    unsigned int *v25;  // eax
    unsigned int *v26;  // eax
    unsigned int v27;  // eax
    st_4f7e60_1 *v28;  // edx
    float v0;  // [bp-0x84]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x7c]
    char v3;  // [bp-0x78]
    float v4;  // [bp-0x6c]
    float v5;  // [bp-0x68]
    float v6;  // [bp-0x64]
    float v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x30]
    float v13;  // [bp-0x2c]
    float v14;  // [bp-0x28]
    float v15;  // [bp-0x24]
    float v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    v19 = *(int *)a0;
    v20 = 0;
    if (g_vecZero == *(float *)&v19->field_174 && g_vecZero+4 == *(float *)&v19->field_178)
        v20 = g_vecZero+8 == *(float *)&v19->field_17c;
    if (v20)
        return v31;
    v21 = g_engfuncs.pfnFindEntityByString(0, "classname", "info_intermission");
    v22 = 0;
    if (!v21 || !g_engfuncs.pfnEntOffsetOfPEntity(v21))
        v22 = 1;
    if (v22)
    {
        v0 = 0;
        v1 = 0;
        v2 = 128.0f;
        v28 = *(int *)a0;
        v29 = &v28->field_8;
        v6 = *(float *)&v28->field_8 + v0;
        v7 = *(float *)&v29[1] + v1;
        v8 = *(float *)&v29[2] + v2;
        UTIL_TraceLine(v29, &v6, 1, *(int *)&v28[1].padding_9[127], &v9);
        v0 = v12;
        v1 = v13;
        v2 = v14;
        v30 = *(int *)a0 + 8;
        v4 = v12 - *(float *)(*(int *)a0 + 8);
        v5 = v13 - *(float *)&v30[1];
        v6 = v14 - *(float *)&v30[2];
        UTIL_VecToAngles(&v3, &v4);
        v31 = CBasePlayer::StartObserver(a0, &v0, &v3);
        return v31;
    }
    v23 = g_engfuncs.pfnRandomLong(0, 3);
    if (v23 > 0)
    {
        do
        {
            v24 = g_engfuncs.pfnFindEntityByString(v21, "classname", "info_intermission");
            if (v24)
                v21 = v24;
        } while ((v23 -= 1, v23 > 0));
    }
    v25 = v21 + 0x22;
    v15 = v21[0x22];
    v16 = *(float *)&v25[1];
    v17 = *(float *)&v25[2];
    v26 = v21 + 61;
    v9 = v21[61];
    v10 = *(float *)&v26[1];
    v11 = *(float *)&v26[2];
    CBasePlayer::StartObserver(a0, &v15, &v9);
    return v27;
}

