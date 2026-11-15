// StartObserving__11CBasePlayer @0xf0a00 size=811
typedef struct st_4f0a00_0 {
    char padding_0[1904];
    unsigned int field_770;
} st_4f0a00_0;

typedef struct st_4f0a00_1 {
    char padding_0[280];
    char field_118;
} st_4f0a00_1;

typedef struct st_4f0a00_2 {
    struct st_4f0a00_1 *field_0;
    char padding_4[804];
    unsigned int field_328;
} st_4f0a00_2;

typedef struct st_4f0a00_3 {
    unsigned int field_0;
} st_4f0a00_3;

extern unsigned int gmsgChangeView;
extern st_4f0a00_3 *g_engfuncs.pfnFindEntityByString;
extern st_4f0a00_3 *g_engfuncs.pfnMessageBegin;
extern st_4f0a00_3 *g_engfuncs.pfnMessageEnd;
extern st_4f0a00_3 *g_engfuncs.pfnWriteByte;
extern st_4f0a00_3 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4f0a00_3 *g_engfuncs.pfnRandomLong;

unsigned int * StartObserving__11CBasePlayer(float a0)
{
    unsigned int *v16;  // eax
    st_4f0a00_0 *v17;  // eax
    unsigned int idx;  // edx
    st_4f0a00_2 *v18;  // eax
    float *v19;  // edi
    int v20;  // esi
    float *v21;  // eax
    unsigned int *v22;  // eax
    unsigned int *v23;  // eax
    unsigned int v24;  // edx
    unsigned int index;  // ecx
    int v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0x88]
    float v2;  // [bp-0x84]
    float v3;  // [bp-0x80]
    float v4;  // [bp-0x7c]
    char v5;  // [bp-0x64]
    float v6;  // [bp-0x50]
    float v7;  // [bp-0x4c]
    float v8;  // [bp-0x48]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]
    float v12;  // [bp-0x18]
    float v13;  // [bp-0x14]
    float v14;  // [bp-0x10]

    v16 = (unsigned int *)a0;
    if (v16[202])
        return v16;
    if (v16[209])
    {
        v9 = 255.0f;
        v10 = 255.0f;
        v11 = 255.0f;
        v0 = 0;
        UTIL_ScreenFade(a0, &v9, 0, 0, 0xff, v0);
    }
    v17 = (st_4f0a00_0 *)a0;
    if (v17->field_770)
    {
        *(unsigned short *)&v0 = 1;
        CBasePlayer::Descend(v17, v0);
    }
    if (*(int *)(*(unsigned int *)&a0 + 816))
        CBasePlayer::StopPowerUp(a0);
    if (*(int *)(*(unsigned int *)&a0 + 812))
        CBasePlayer::StopBlock(a0);
    if (*(int *)(*(unsigned int *)&a0 + 800))
        CBasePlayer::StopFly(a0);
    if (*(int *)(*(unsigned int *)&a0 + 804))
        CBasePlayer::StopTurbo(a0);
    if (*(int *)(*(unsigned int *)&a0 + 892))
        *(unsigned int *)(*(unsigned int *)&a0 + 892) = 0;
    v18 = (st_4f0a00_2 *)a0;
    v18->field_328 = 1;
    v18->field_0->field_118 = v18->field_0->field_118 | 128;
    CBasePlayer::EnableControl(a0, 0);
    CBasePlayer::RemoveAllItems(a0, 1);
    g_engfuncs.pfnMessageBegin(1, gmsgChangeView, 0, *(int *)(*(int *)a0 + 520));
    g_engfuncs.pfnWriteByte(1);
    g_engfuncs.pfnWriteByte(1);
    g_engfuncs.pfnMessageEnd();
    v19 = g_engfuncs.pfnFindEntityByString(0, "classname", "info_intermission");
    v1 = 0;
    if (!v19 || !g_engfuncs.pfnEntOffsetOfPEntity(v19))
        v1 = 1;
    if (v1)
    {
        v12 = 0;
        v13 = 0;
        v14 = 128.0f;
        v24 = *(int *)a0;
        index = v24 + 8;
        v9 = *(float *)(v24 + 8) + v12;
        v10 = *(float *)(index + 4) + v13;
        v11 = *(float *)(index + 8) + v14;
        UTIL_TraceLine(index, &v9, 1, *(int *)(v24 + 520), &v5);
        v9 = v6;
        v10 = v7;
        v11 = v8;
        idx = *(int *)a0 + 8;
        v2 = v6 - *(float *)(*(int *)a0 + 8);
        v3 = v7 - *(float *)(idx + 4);
        v4 = v8 - *(float *)(idx + 8);
        UTIL_VecToAngles(&v12, &v2);
        return CBasePlayer::StartObserver(a0, &v9, &v12);
    }
    v20 = g_engfuncs.pfnRandomLong(0, 3);
    if (v20 > 0)
    {
        do
        {
            v21 = g_engfuncs.pfnFindEntityByString(v19, "classname", "info_intermission");
            if (v21)
                v19 = v21;
        } while ((v20 -= 1, v20 > 0));
    }
    v22 = v19 + 0x22;
    v9 = v19[0x22];
    v10 = *(float *)&v22[1];
    v11 = *(float *)&v22[2];
    v23 = v19 + 61;
    v12 = v19[61];
    v13 = *(float *)&v23[1];
    v14 = *(float *)&v23[2];
    return CBasePlayer::StartObserver(a0, &v9, &v12);
}

