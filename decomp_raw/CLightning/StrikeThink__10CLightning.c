// StrikeThink__10CLightning @0xb1210 size=1521
typedef struct st_4b1210_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4b1210_2;

typedef struct st_4b1210_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4b1210_1;

typedef struct st_4b1210_0 {
    unsigned int field_0;
} st_4b1210_0;

extern st_4b1210_0 *g_engfuncs.pfnMessageBegin;
extern st_4b1210_0 *g_engfuncs.pfnMessageEnd;
extern st_4b1210_0 *g_engfuncs.pfnWriteByte;
extern st_4b1210_0 *g_engfuncs.pfnWriteShort;
extern st_4b1210_0 *g_engfuncs.pfnWriteCoord;
extern st_4b1210_0 *g_engfuncs.pfnAlertMessage;
extern st_4b1210_0 *g_engfuncs.pfnIndexOfEdict;
extern st_4b1210_0 *g_engfuncs.pfnRandomFloat;
extern st_4b1210_1 *gpGlobals;

double StrikeThink__10CLightning(float idx)
{
    double v10;  // mm7
    double v11;  // mm0
    unsigned int *v12;  // eax
    unsigned int v13;  // eax
    unsigned int *v14;  // eax
    unsigned int v15;  // eax
    unsigned int v0;  // [bp-0x8c]
    float v1;  // [bp-0x8c]
    st_4b1210_2 **v2;  // [bp-0x64]
    st_4b1210_2 **v3;  // [bp-0x60]
    st_4b1210_2 **v4;  // [bp-0x60]
    char v5;  // [bp-0x5c]
    int v6;  // [bp-0xc]
    unsigned short v7;  // [bp-0x8]
    unsigned short v8;  // [bp-0x6]

    v10 = *(float *)(*(unsigned int *)&idx + 112);
    if (v10 != 0.0)
    {
        if (*(char *)(*(int *)idx + 416) & 4)
        {
            g_engfuncs.pfnRandomFloat(0, *(float *)(*(unsigned int *)&idx + 132));
            v10 = gpGlobals->field_0 + *(float *)(*(unsigned int *)&idx + 112);
            *(float *)(*(int *)idx + 260) = (float)(v11 + v10);
        }
        else
        {
            v10 = gpGlobals->field_0 + *(float *)(*(unsigned int *)&idx + 112) + *(float *)(*(unsigned int *)&idx + 132);
            *(float *)(*(int *)idx + 260) = (float)v10;
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 100) = 1;
    if (*(int *)(*(unsigned int *)&idx + 108))
    {
        v3 = CBeam::RandomTargetname(idx, *(int *)(*(unsigned int *)&idx + 104) + gpGlobals->field_98);
        v2 = CBeam::RandomTargetname(idx, *(int *)(*(unsigned int *)&idx + 108) + gpGlobals->field_98);
        if (!v3)
            return v10;
        if (v2)
        {
            if ((IsPointEntity(v3) || IsPointEntity(v2)) && *(char *)(*(int *)idx + 416) & 8)
                return v10;
            g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
            if (IsPointEntity(v3) || IsPointEntity(v2))
            {
                if (!IsPointEntity(v2))
                {
                    v4 = v2;
                    v2 = v3;
                    v3 = v4;
                }
                if (!IsPointEntity(v3))
                {
                    g_engfuncs.pfnWriteByte(1);
                    v15 = g_engfuncs.pfnIndexOfEdict(*v3->field_208);
                    g_engfuncs.pfnWriteShort(v15);
                    g_engfuncs.pfnWriteCoord(*v2->field_8);
                    g_engfuncs.pfnWriteCoord(*v2->field_c);
                    g_engfuncs.pfnWriteCoord(*v2->field_10);
                }
                else
                {
                    g_engfuncs.pfnWriteByte(0);
                    g_engfuncs.pfnWriteCoord(*v3->field_8);
                    g_engfuncs.pfnWriteCoord(*v3->field_c);
                    g_engfuncs.pfnWriteCoord(*v3->field_10);
                    g_engfuncs.pfnWriteCoord(*v2->field_8);
                    g_engfuncs.pfnWriteCoord(*v2->field_c);
                    v1 = *v2->field_10;
                    v14 = g_engfuncs.pfnWriteCoord;
LABEL_4b15e9:
                    v14(v1);
                }
            }
            else
            {
                v0 = (!(*(char *)(*(int *)idx + 416) & 8) ? 8 : 24);
                g_engfuncs.pfnWriteByte((!(*(char *)(*(int *)idx + 416) & 8) ? 8 : 24));
                v13 = g_engfuncs.pfnIndexOfEdict(*v3->field_208);
                g_engfuncs.pfnWriteShort(v13);
                *(unsigned int *)&v1 = g_engfuncs.pfnIndexOfEdict(*v2->field_208);
                v14 = g_engfuncs.pfnWriteShort;
                goto LABEL_4b15e9;
            }
            g_engfuncs.pfnWriteShort(*(int *)(*(unsigned int *)&idx + 0x88));
            g_engfuncs.pfnWriteByte(*(int *)(*(unsigned int *)&idx + 144));
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 312);
            g_engfuncs.pfnWriteByte(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)(10.0 * *(float *)(*(unsigned int *)&idx + 112));
            g_engfuncs.pfnWriteByte(v6);
            g_engfuncs.pfnWriteByte(*(int *)(*(unsigned int *)&idx + 116));
            g_engfuncs.pfnWriteByte(*(int *)(*(unsigned int *)&idx + 120));
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 336);
            g_engfuncs.pfnWriteByte(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 340);
            g_engfuncs.pfnWriteByte(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 344);
            g_engfuncs.pfnWriteByte(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 332);
            g_engfuncs.pfnWriteByte(v6);
            v0 = *(int *)(*(unsigned int *)&idx + 128);
            g_engfuncs.pfnWriteByte(v0);
            g_engfuncs.pfnMessageEnd(v0);
            CBeam::DoSparks(idx, &*v3->field_8, &*v2->field_8);
            if (0.0 >= *(float *)(*(int *)idx + 480))
                return v10;
            UTIL_TraceLine(&*v3->field_8, &*v2->field_8, 0, 0, &v5);
            *(float *)(*(int *)idx + 484) = (float)(gpGlobals->field_0 - 1.0);
            CBeam::BeamDamage(idx, &v5);
            return v10;
        }
        else
        {
            return v10;
        }
    }
    else if (!*(int *)(*(unsigned int *)&idx + 104))
    {
        CLightning::RandomArea(idx);
        return v10;
    }
    else
    {
        v12 = CBeam::RandomTargetname(idx, *(int *)(*(unsigned int *)&idx + 104) + gpGlobals->field_98);
        if (!v12)
        {
            g_engfuncs.pfnAlertMessage(1, "env_beam: unknown entity \"%s\"\n", *(int *)(*(unsigned int *)&idx + 104) + gpGlobals->field_98);
            return v10;
        }
        CLightning::RandomPoint(idx, *v12 + 8);
        return v10;
    }
}

