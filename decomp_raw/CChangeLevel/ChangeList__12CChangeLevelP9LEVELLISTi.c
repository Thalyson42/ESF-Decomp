// ChangeList__12CChangeLevelP9LEVELLISTi @0x12dfd0 size=1086
typedef struct st_52dfd0_4 {
    char padding_0[28];
    struct st_52dfd0_0 *field_1c;
} st_52dfd0_4;

typedef struct st_52dfd0_0 {
    unsigned int field_0;
} st_52dfd0_0;

typedef struct st_52dfd0_1 {
    char padding_0[40];
    unsigned int field_28;
} st_52dfd0_1;

typedef struct st_52dfd0_6 {
    char padding_0[124];
    struct st_52dfd0_5 *field_7c;
    char padding_80[392];
    struct st_52dfd0_6 *field_208;
} st_52dfd0_6;

typedef struct st_52dfd0_3 {
    char padding_0[4];
    unsigned int field_4;
} st_52dfd0_3;

typedef struct st_52dfd0_5 {
    struct st_52dfd0_3 *field_0;
    char padding_4[92];
    struct st_52dfd0_4 *field_60;
} st_52dfd0_5;

typedef struct st_52dfd0_2 {
    char padding_0[156];
    struct st_52dfd0_1 *field_9c;
} st_52dfd0_2;

extern st_52dfd0_0 *g_engfuncs.pfnFindEntityByString;
extern st_52dfd0_0 *g_engfuncs.pfnEntitiesInPVS;
extern st_52dfd0_0 *g_engfuncs.pfnAlertMessage;
extern st_52dfd0_0 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_52dfd0_0 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_52dfd0_2 *gpGlobals;

int ChangeList__12CChangeLevelP9LEVELLISTi(int a0, int a1)
{
    unsigned int v12;  // edi
    unsigned int v13;  // esi
    unsigned int v22;  // edi
    unsigned int v23;  // eax
    unsigned int *v24;  // edi
    int v25;  // eax
    int v14;  // esi
    int v15;  // edi
    int v16;  // eax
    unsigned int v17;  // esi
    st_52dfd0_6 *v18;  // eax
    st_52dfd0_5 *v19;  // eax
    st_52dfd0_5 *v20;  // esi
    int v21;  // eax
    char *v0;  // [bp-0x102c]
    unsigned int v1;  // [bp-0x1028]
    char *v2;  // [bp-0x1024]
    st_52dfd0_6 *iter;  // [bp-0x1020]
    int v4;  // [bp-0x101c]
    int v5;  // [bp-0x1018]
    int v6;  // [bp-0x1014]
    int i;  // [bp-0x1010]
    unsigned int v8;  // [bp-0x100c]
    unsigned int v9;  // [bp-0x1008]
    char v10;  // [bp-0x808]
    char v11;  // [bp-0x8]

    v6 = 0;
    v8 = g_engfuncs.pfnFindEntityByString(0, "classname", "trigger_changelevel");
    v12 = 0;
    if (!v8 || !g_engfuncs.pfnEntOffsetOfPEntity(v8))
        v12 = 1;
    if (v12)
        return 0;
    while (1)
    {
        v13 = 0;
        if (!v8 || !g_engfuncs.pfnEntOffsetOfPEntity(v8))
            v13 = 1;
        if (v13 || !(v14 = GetClassPtr__H1Z12CChangeLevel_PX01_PX01((!v8 ? 0 : v8 + 128)), !v14 || !(v15 = v14 + 292, v16 = CChangeLevel::FindLandmark(v15), v16 && CChangeLevel::AddTransitionToList(a0, v6, v14 + 260, v15, v16) && (v6 += 1, v6 >= a1))))
            break;
        v8 = g_engfuncs.pfnFindEntityByString(v8, "classname", "trigger_changelevel");
    }
    if (!gpGlobals->field_9c || !gpGlobals->field_9c->field_28)
        return v6;
    __18CSaveRestoreBufferP13saverestore_s(&v11, gpGlobals->field_9c);
    i = 0;
    if (i < v6)
    {
        v0 = &v11;
        do
        {
            v4 = 0;
            iter = g_engfuncs.pfnEntitiesInPVS(*(int *)(a0 + i * 80 + 64));
            while (1)
            {
                v17 = 0;
                if (!iter || !g_engfuncs.pfnEntOffsetOfPEntity(iter))
                    v17 = 1;
                if (v17)
                    break;
                v18 = iter;
                if (v18 || (v18 = g_engfuncs.pfnPEntityOfEntOffset(0), v18))
                    v19 = v18->field_7c;
                else
                    v19 = NULL;
                v20 = v19;
                if (v20)
                {
                    v21 = v20->field_60->field_1c(v20);
                    if (v21 >= 0)
                    {
                        v22 = 0;
                        if ((char)v21 & 2)
                            v22 = 0x20000000;
                        if (v20->field_0->field_4 && !CBaseEntity::IsDormant(v20))
                            v22 |= 0x10000000;
                        if (v22)
                        {
                            v23 = v4 * 4;
                            *(st_52dfd0_5 **)&(&v10)[v23] = v20;
                            *(unsigned int *)((char *)&v9 + v23) = v22;
                            v4 += 1;
                            if (v4 > 0x200)
                                g_engfuncs.pfnAlertMessage(4, "Too many entities across a transition!");
                        }
                    }
                }
                iter = iter->field_208;
            }
            v5 = 0;
            if (v5 < v4)
            {
                v2 = &v9;
                v1 = i * 80;
                do
                {
                    v24 = v5 * 4;
                    if (*(int *)(v24 + v2) && CChangeLevel::InTransitionVolume(*(int *)(v24 + &v10), v1 + a0 + 32))
                    {
                        v25 = CSaveRestoreBuffer::EntityIndex(v0, *(int *)(v24 + &v10));
                        CSaveRestoreBuffer::EntityFlagsSet(v0, v25, 1 << ((char)i & 31) | *(int *)(v24 + v2));
                    }
                } while ((v5 += 1, v5 < v4));
            }
            i += 1;
        } while (i < v6);
    }
    _._18CSaveRestoreBuffer(&v11, 2);
    return v6;
}

