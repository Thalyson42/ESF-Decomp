// BotThink__4CBot @0x13cda0 size=1408
typedef struct st_53cda0_2 {
    char padding_0[96];
    struct st_53cda0_1 *field_60;
} st_53cda0_2;

typedef struct st_53cda0_0 {
    float field_0;
} st_53cda0_0;

typedef struct st_53cda0_1 {
    unsigned int field_0;
} st_53cda0_1;

typedef struct st_53cda0_3 {
    char padding_0[68];
    struct st_53cda0_2 *field_44;
} st_53cda0_3;

extern st_53cda0_3 *g_pGameRules;
extern st_53cda0_1 *g_616928;
extern st_53cda0_1 *g_616960;
extern st_53cda0_0 *gpGlobals;
extern float g_6253b8;
extern char g_6253c8;

unsigned int BotThink__4CBot(float idx)
{
    int v9;  // eax
    unsigned int v10;  // esi
    void* v11;  // edx
    unsigned int v12;  // eax
    void* v13;  // edx
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    unsigned int v2;  // [bp-0x48], Other Possible Types: int
    unsigned int v3;  // [bp-0x44]
    unsigned int v4;  // [bp-0x40]
    int v5;  // [bp-0xc]
    unsigned short v6;  // [bp-0x8]
    unsigned short v7;  // [bp-0x6]

    if (*(char *)(*(unsigned int *)&idx + 2536))
    {
        if (*(float *)(*(unsigned int *)&idx + 2532) <= *(float *)gpGlobals)
        {
            if (*(int *)(*(unsigned int *)&idx + 2540) != 1)
            {
                if (*(int *)(*(unsigned int *)&idx + 2540) != 2)
                    goto LABEL_53ce09;
                sub_488140(idx);
            }
            else
            {
                sub_48aba0(idx);
            }
LABEL_53ce09:
            *(float *)(*(unsigned int *)&idx + 2532) = (float)(*(float *)gpGlobals + 0.15000000596046448);
        }
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v5 = (int)g_6253b8;
        v4 = v5 & 0xff;
        v3 = 0;
        v2 = *(short *)(*(int *)idx + 384);
        v1 = 0;
        v0 = 0;
        v5 = sub_48a780(idx);
        return g_616960(*(int *)(*(int *)idx + 520), *(int *)idx + 116, (float)v5);
    }
    else
    {
        if (1.0 > *(float *)(*(int *)idx + 352) || *(int *)(*(int *)idx + 368) || *(int *)(*(unsigned int *)&idx + 808))
        {
            if ((int)g_616928(1, 100) > 50)
                *(unsigned int *)(*(int *)idx + 384) = 1;
        }
        else
        {
            if (*(int *)(*(unsigned int *)&idx + 840))
            {
                v9 = g_616928(1, 3);
                if (v9 == 2)
                {
                    v10 = "strength";
                }
                else if (v9 <= 2)
                {
                    if (v9 == 1)
                        v10 = "immortality";
                }
                else
                {
                    if (v9 == 3)
                        v10 = "friendship";
                }
                g_pGameRules->field_44->field_60(g_pGameRules, idx, v10);
            }
            else
            {
                if (*(int *)(*(unsigned int *)&idx + 1832) && *(int *)(*(int *)(*(unsigned int *)&idx + 1832) + 868))
                {
                    v2 = (80.0f > *(float *)(*(int *)idx + 352) ? "cookie" : 120.0f > *(float *)(*(int *)idx + 352) ? "chocolate" : "donut");
                    sub_489e10(idx, v2);
                }
                if (*(float *)(*(unsigned int *)&idx + 2740) < *(float *)gpGlobals && 0.0 < *(float *)(*(unsigned int *)&idx + 2740))
                {
                    *(unsigned short *)&v2 = 0;
                    sub_48ab70(idx, v2);
                    *(unsigned int *)(*(unsigned int *)&idx + 2740) = 0;
                }
                v5 = sub_48a780(idx);
                *(float *)(*(unsigned int *)&idx + 3440) = (float)v5;
                sub_48b8b0(idx);
                sub_48aaf0(idx);
                sub_48db80(idx);
                sub_48ade0(idx);
                if (!*(int *)(*(unsigned int *)&idx + 4196))
                    sub_48acb0(idx, 6);
                sub_48a610(idx);
                sub_48baa0(idx);
                if (!g_6253c8)
                    memset(*(unsigned int *)&idx + 3432, 0, 12);
                if (*(int *)(*(int *)idx + 264) == 11 && *(float *)(*(unsigned int *)&idx + 0xbfc) != 0.0f)
                {
                    if (g_6253c8)
                        sub_48c350(idx);
                    else
                        sub_48d0d0(idx);
                }
                v5 = sub_48a780(idx);
                if ((double)v5 < *(float *)(*(unsigned int *)&idx + 3432))
                {
                    v5 = sub_48a780(idx);
                    *(float *)(*(unsigned int *)&idx + 3432) = (float)v5;
                }
                v5 = sub_48a780(idx);
                if ((double)v5 < *(float *)(*(unsigned int *)&idx + 3440))
                {
                    v5 = sub_48a780(idx);
                    *(float *)(*(unsigned int *)&idx + 3440) = (float)v5;
                }
                if (0.0 < *(float *)(*(unsigned int *)&idx + 3440))
                {
                    *(char *)(*(int *)idx + 384) = *(char *)(*(int *)idx + 384) | 8;
                }
                else if (0.0 > *(float *)(*(unsigned int *)&idx + 3440))
                {
                    *(char *)(*(int *)idx + 384) = *(char *)(*(int *)idx + 384) | 16;
                }
                if (0.0 < *(float *)(*(unsigned int *)&idx + 3432))
                {
                    *(char *)(*(int *)idx + 385) = *(char *)(*(int *)idx + 385) | 4;
                }
                else if (0.0 > *(float *)(*(unsigned int *)&idx + 3432))
                {
                    *(char *)(*(int *)idx + 385) = *(char *)(*(int *)idx + 385) | 2;
                }
                *(float *)(*(unsigned int *)&idx + 3460) = *(float *)(*(unsigned int *)&idx + 3440);
                v5 = sub_48a780(idx);
                *(float *)(*(int *)idx + 528) = (float)v5;
                v7 = __fnstcw();
                v6 = v7 | 0xc00;
                v5 = (int)g_6253b8;
                v11 = *(int *)idx;
                v12 = g_616960((int)v11[520], v11 + 116, *(float *)(*(unsigned int *)&idx + 3440), *(float *)(*(unsigned int *)&idx + 3432), *(float *)(*(unsigned int *)&idx + 3436), (short)v11[384], 0, v5 & 0xff);
                *(unsigned int *)(*(unsigned int *)&idx + 3432) = 0;
                *(unsigned int *)(*(unsigned int *)&idx + 3436) = 0;
                *(unsigned int *)(*(unsigned int *)&idx + 2724) = 0;
                *(unsigned int *)(*(unsigned int *)&idx + 2728) = 0;
                return v12;
            }
        }
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v5 = (int)g_6253b8;
        v13 = *(int *)idx;
        return g_616960((int)v13[520], v13 + 116, 0, 0, 0, (short)v13[384], 0, v5 & 0xff);
    }
}

