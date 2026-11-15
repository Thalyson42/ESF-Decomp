// Think__18CHalfLifeMultiplay @0xdb870 size=931
typedef struct st_4db870_2 {
    char padding_0[356];
    float field_164;
} st_4db870_2;

typedef struct st_4db870_0 {
    float field_0;
    float field_4;
    char padding_8[136];
    int field_90;
} st_4db870_0;

typedef struct st_4db870_1 {
    unsigned int field_0;
} st_4db870_1;

extern char fragsleft;
extern char timeleft;
extern float g_5bcfa0;
extern float g_5bd054;
extern float g_5bd07c;
extern float g_5bd090;
extern float g_5bd0a4;
extern float g_5bd158;
extern float g_flIntermissionStartTime;
extern unsigned int gmsgAllowSpec;
extern unsigned int g_fGameOver;
extern st_4db870_1 *g_616878;
extern st_4db870_1 *g_61687c;
extern st_4db870_1 *g_616880;
extern st_4db870_1 *g_6168a4;
extern st_4db870_1 *g_6168b0;
extern st_4db870_1 *g_6169e4;
extern st_4db870_0 *gpGlobals;
extern unsigned int last_frags.1743;
extern int last_time.1744;
extern int g_VoiceGameMgr;

double Think__18CHalfLifeMultiplay(float idx)
{
    double v8;  // mm7
    unsigned int v9;  // eax
    unsigned int v18;  // eax
    double v10;  // mm7
    double v11;  // mm7
    int v12;  // edi
    int iter;  // esi
    st_4db870_2 **v14;  // edx
    unsigned int v16;  // eax
    double v17;  // mm7
    int v0;  // [bp-0x4c]
    float v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    int v3;  // [bp-0x20]
    int v4;  // [bp-0x1c]
    unsigned short v5;  // [bp-0x18]
    unsigned short v6;  // [bp-0x16]

    sub_488ca0(&g_VoiceGameMgr, (unsigned int)(gpGlobals->field_4 >> 0));
    v3 = 0;
    if (*(float *)(*(unsigned int *)&idx + 80) != g_5bd054)
    {
        g_616878(2, gmsgAllowSpec, 0, 0);
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v4 = (int)g_5bd054;
        v0 = v4;
        g_616880(v0);
        g_61687c(v0);
        *(float *)(*(unsigned int *)&idx + 80) = g_5bd054;
    }
    v8 = g_5bd07c;
    if (*(float *)(*(unsigned int *)&idx + 84) != g_5bd07c)
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 56))(idx, 0);
        v8 = g_5bd07c;
        *(float *)(*(unsigned int *)&idx + 84) = g_5bd07c;
    }
    if (g_fGameOver)
    {
        g_6168a4("mp_chattime");
        v6 = __fnstcw();
        v5 = v6 | 0xc00;
        v4 = (int)v8;
        if (v4 <= 0)
        {
            g_6168b0("mp_chattime", "1");
        }
        else if (v4 > 120)
        {
            v9 = sub_48a560(120);
            g_6168b0("mp_chattime", v9);
        }
        v10 = g_flIntermissionStartTime + g_5bd158;
        *(float *)(*(unsigned int *)&idx + 72) = (float)v10;
        if (v10 >= gpGlobals->field_0)
            return v10;
        if (!*(int *)(*(unsigned int *)&idx + 76))
        {
            v10 = g_flIntermissionStartTime + 120.0;
            if (v10 >= gpGlobals->field_0)
                return v10;
        }
        (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 268))(idx);
        return v10;
    }
    else
    {
        v11 = g_5bd0a4 * 60.0;
        v1 = g_5bd090;
        if (v11 != 0.0)
        {
            v6 = __fnstcw();
            v5 = v6 | 0xc00;
            v2 = (int)(v11 - gpGlobals->field_0);
        }
        else
        {
            v2 = 0;
        }
        if (v11 != 0.0 && v11 <= gpGlobals->field_0)
        {
            (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 272))(idx);
            return v11;
        }
        if (v1 != 0.0f)
        {
            v12 = 9999;
            iter = 1;
            while (iter <= gpGlobals->field_90)
            {
                v14 = sub_48a500(iter);
                if (v14)
                {
                    v11 = v1;
                    if ((isunordered(v11, *v14->field_164) ? 0x44 : v11 == *v14->field_164 ? 63 : v11 < *v14->field_164 ? 0 : 0xff) < 64)
                    {
                        (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 272))(idx);
                        return v11;
                    }
                    v6 = __fnstcw();
                    v5 = v6 | 0xc00;
                    v4 = (int)(v11 - *v14->field_164);
                    if (v4 < v12)
                    {
                        v12 = v4;
                        iter += 1;
                    }
                    else
                    {
                        iter += 1;
                    }
                }
                else
                {
                    iter += 1;
                }
            }
            v3 = v12;
        }
        if (v3 != last_frags.1743)
        {
            v16 = sub_488b00("%i", v3);
            g_6169e4(&fragsleft, v16);
        }
        v17 = (double)last_time.1744;
        if (g_5bcfa0 != v17)
        {
            v18 = sub_488b00("%i", v2);
            g_6169e4(&timeleft, v18);
        }
        last_frags.1743 = v3;
        last_time.1744 = v2;
        return v17;
    }
}

