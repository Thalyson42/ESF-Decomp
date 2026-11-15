// CheckBotInternalStatus__4CBot @0x181b90 size=1369
typedef struct st_581b90_2 {
    char padding_0[8];
    char field_8;
    char padding_9[343];
    unsigned int field_160;
    char padding_164[168];
    unsigned int field_20c;
} st_581b90_2;

typedef struct st_581b90_0 {
    float field_0;
} st_581b90_0;

typedef struct st_581b90_1 {
    unsigned int field_0;
} st_581b90_1;

extern st_581b90_1 *g_engfuncs.pfnRandomLong;
extern st_581b90_1 *g_engfuncs.pfnRandomFloat;
extern st_581b90_0 *gpGlobals;

double CheckBotInternalStatus__4CBot(float idx)
{
    st_581b90_2 *v19;  // ecx
    double v20;  // mm7
    unsigned int v29;  // eax
    unsigned int v30;  // eax
    unsigned int v31;  // eax
    short v32;  // di
    unsigned short v33;  // di
    unsigned int v34;  // 128
    int v21;  // edi
    unsigned int *v22;  // edx
    unsigned int *v23;  // eax
    float v24;  // 112
    float v25;  // 112
    float v26;  // 112
    double v27;  // mm7
    double v28;  // mm6
    unsigned int v0;  // [bp-0x98]
    char v1;  // [bp-0x71]
    unsigned int v2;  // [bp-0x70]
    int v3;  // [bp-0x6c]
    unsigned short v4;  // [bp-0x68]
    short v5;  // [bp-0x66]
    unsigned short v6;  // [bp-0x66]
    int v7;  // [bp-0x64]
    unsigned short v8;  // [bp-0x60]
    unsigned short v9;  // [bp-0x5e]
    float v10;  // [bp-0x58]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    int v14;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v15;  // [bp-0x20], Other Possible Types: unsigned short
    unsigned short v16;  // [bp-0x1e]
    unsigned int v17;  // [bp-0x1c]

    v2 = 0;
    v1 = 0;
    if (*(int *)(*(unsigned int *)&idx + 4196))
        v2 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 4196) + 20) + 16))(*(int *)(*(unsigned int *)&idx + 4196));
    else
        v1 = 1;
    if (((char)v2 & 4 || v1) && (char)CBot::BotCanPowerUp(idx))
    {
        v19 = *(int *)idx;
        v20 = *(float *)&v19[1].padding_9[71];
        v16 = __fnstcw();
        v15 = v16 | 0xc00;
        v14 = (int)v20;
        if (v14 <= 999)
        {
            v20 = *(float *)(*(unsigned int *)&idx + 2832);
            if (v20 <= *(float *)gpGlobals && !*(int *)(*(unsigned int *)&idx + 816))
            {
                v21 = 750;
                if (*(int *)(*(unsigned int *)&idx + 2924))
                {
                    v22 = *(int *)*(int *)(*(unsigned int *)&idx + 2924) + 8;
                    *(float *)&v14 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 2924) + 8);
                    *(float *)&v15 = *(float *)&v22[1];
                    *(float *)&v17 = *(float *)&v22[2];
                    v23 = &v19->field_8;
                    v24 = *(float *)&v14 - *(float *)&v19->field_8;
                    v11 = v24;
                    v25 = *(float *)&v15 - *(float *)&v23[1];
                    v12 = v25;
                    v26 = *(float *)&v17 - *(float *)&v23[2];
                    v13 = v26;
                    v27 = v24 * v24 + v25 * v25 + v26 * v26;
                    v28 = sqrt(v27);
                    if (isnan(v28))
                        sqrt(*(unsigned int *)&v27);
                    else
                        v27 = v28;
                    v10 = (float)v27;
                    if (v10 < 1250.0f)
                    {
                        v29 = *(int *)(*(int *)(*(unsigned int *)&idx + 2564) + 52);
                        if (v29 == 1)
                        {
                            v21 = 750;
                        }
                        else if ((int)v29 <= 1)
                        {
                            if (!v29)
                                v21 = 700;
                        }
                        else
                        {
                            if (v29 == 2)
                                v21 = 800;
                        }
                    }
                }
                if (*(char *)(*(unsigned int *)&idx + 2556))
                    v21 -= *(char *)(*(unsigned int *)&idx + 2556) * 80;
                if (*(short *)(*(unsigned int *)&idx + 2584) > 59)
                {
                    v21 = 20;
                    if (*(short *)(*(unsigned int *)&idx + 2584) <= 99)
                        v21 = 100;
                }
                v20 = *(float *)(*(int *)idx + 608);
                v9 = __fnstcw();
                v8 = v9 | 0xc00;
                v7 = (int)v20;
                if (v7 <= v21)
                {
                    v20 = *(float *)(*(int *)idx + 608);
                    v9 = __fnstcw();
                    v8 = v9 | 0xc00;
                    v7 = (int)v20;
                    if (v7 > 225 && *(short *)(*(unsigned int *)&idx + 2584) > 59)
                    {
                        v30 = g_engfuncs.pfnRandomLong(1, 100);
                        if ((int)v30 <= *(short *)(*(int *)(*(unsigned int *)&idx + 2564) + 38))
                        {
                            v0 = 37;
                            CBot::MakeCombo(idx);
                            return v20;
                        }
                    }
                    if (!(char)CBot::BotShouldFallDown(idx))
                    {
                        CBot::MakeTask(idx, 0);
                        CBasePlayer::StartPowerUp(idx);
                        return v20;
                    }
                    v0 = 8;
                    CBot::MakeCombo(idx);
                    return v20;
                }
            }
        }
    }
    if ((char)v2 & 2 || v1)
    {
        v20 = *(float *)(*(unsigned int *)&idx + 2580);
        if (v20 < *(float *)gpGlobals)
        {
            v31 = g_engfuncs.pfnRandomLong(1, 100);
            if ((int)v31 <= *(short *)(*(int *)(*(unsigned int *)&idx + 2564) + 44))
                *(char *)(*(unsigned int *)&idx + 2576) = 1;
            else
                *(char *)(*(unsigned int *)&idx + 2576) = 0;
            g_engfuncs.pfnRandomFloat(15.0f, 30.0f);
            v20 = 15.0 + *(float *)gpGlobals;
            *(float *)(*(unsigned int *)&idx + 2580) = (float)v20;
        }
        if (*(int *)(*(unsigned int *)&idx + 800))
        {
LABEL_581ef9:
            if (!*(char *)(*(unsigned int *)&idx + 2576))
            {
                CBasePlayer::StopFly(idx);
LABEL_581f0b:
            }
        }
        else if (*(char *)(*(unsigned int *)&idx + 2576))
        {
            CBasePlayer::StartFly(idx);
            goto LABEL_581f0b;
        }
        else if (!(!*(int *)(*(unsigned int *)&idx + 800)))
        {
            goto LABEL_581ef9;
        }
    }
    if ((char)v2 & 8 || v1)
    {
        v20 = *(float *)(*(unsigned int *)&idx + 2840);
        if (v20 <= *(float *)gpGlobals && (char)CBot::BotCanAscend(idx))
        {
            v20 = *(float *)gpGlobals + 0.5;
            *(float *)(*(unsigned int *)&idx + 2840) = (float)v20;
            if (!*(short *)(*(unsigned int *)&idx + 2584) || *(int *)(*(unsigned int *)&idx + 2588) == 3 || *(int *)(*(unsigned int *)&idx + 2588) == 5)
            {
                v32 = 100;
            }
            else if (*(short *)(*(unsigned int *)&idx + 2584) <= 20)
            {
                v32 = 95;
            }
            else
            {
                v32 = 0;
                if ((unsigned short)(*(short *)(*(unsigned int *)&idx + 2584) - 60) <= 39)
                    v32 = 30;
            }
            if ((int)g_engfuncs.pfnRandomLong(1, 100) <= v32)
            {
                if ((char)CBot::BotShouldFallDown(idx))
                {
                    v0 = 9;
                    CBot::MakeCombo(idx);
                    return v20;
                }
                CBasePlayer::StartAscend(idx);
            }
        }
    }
    if (!((char)v2 & 16) && !v1)
        return v20;
    if (*(int *)(*(int *)idx + 524) != 1)
        return v20;
    v9 = __fnstcw();
    v8 = v9 | 0xc00;
    v7 = (int)*(float *)(*(int *)idx + 352);
    if (v7 > 75)
        return *(float *)(*(int *)idx + 352);
    v33 = 100;
    if (*(short *)(*(unsigned int *)&idx + 2584) > 0)
    {
        v5 = 100;
        v6 = __fnstcw();
        v4 = v6 | 0xc00;
        v3 = (int)((double)v5 - (double)*(short *)(*(unsigned int *)&idx + 2584) / 1.5);
        v33 = v3;
    }
    v34 = *(unsigned int *)&*(float *)(*(int *)idx + 352);
    v9 = __fnstcw();
    v8 = v9 | 0xc00;
    v7 = (int)__int_as_float(v34);
    if ((int)g_engfuncs.pfnRandomLong(1, 100) > (short)(v33 - v7))
        return __int_as_float(v34);
    CBot::MakeTask(idx, 0x11);
    return __int_as_float(v34);
}

