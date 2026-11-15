// BotFillThink__11CBotManager @0x13f700 size=708
typedef struct st_53f700_2 {
    char padding_0[124];
    unsigned int field_7c;
} st_53f700_2;

typedef struct st_53f700_0 {
    float field_0;
    char padding_4[140];
    unsigned int field_90;
} st_53f700_0;

typedef struct st_53f700_1 {
    unsigned int field_0;
} st_53f700_1;

extern unsigned int g_pGameRules;
extern st_53f700_1 *g_6168a4;
extern st_53f700_1 *g_6168d4;
extern st_53f700_1 *g_61698c;
extern st_53f700_0 *gpGlobals;

double BotFillThink__11CBotManager(float idx)
{
    double v8;  // mm7
    st_53f700_2 *v9;  // eax
    unsigned int v10;  // eax
    double v11;  // mm6
    double v12;  // mm6
    double v13;  // mm7
    double v14;  // mm0
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    int v4;  // [bp-0x38], Other Possible Types: unsigned int
    int v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x18]

    v8 = 15.0;
    if (15.0 > gpGlobals->field_0)
    {
        return 15.0;
    }
    else if (g_pGameRules)
    {
        if (!g_61698c() && !*(char *)(*(unsigned int *)&idx + 37))
        {
            if (!g_61698c() && !(v9 = *(int *)(*(unsigned int *)&idx + 12), !*(int *)(*(unsigned int *)&idx + 12) && !(v9 = g_6168d4(0), v9)))
                v10 = v9->field_7c;
            else
                v10 = 0;
            *(unsigned short *)&v5 = 0;
            *(unsigned short *)&v4 = 1;
            if ((char)sub_489a70(v10, v4, v5))
            {
                *(char *)(*(unsigned int *)&idx + 37) = 1;
                if (1.0 <= *(float *)(*(unsigned int *)&idx + 32))
                {
                    v11 = *(float *)(*(unsigned int *)&idx + 32);
                    if (v11 >= gpGlobals->field_0 + 1.0)
                        v11 = 1.0 + gpGlobals->field_0;
                    *(float *)(*(unsigned int *)&idx + 32) = (float)v11;
                }
                if (1.0 <= *(float *)(*(unsigned int *)&idx + 52))
                {
                    v12 = *(float *)(*(unsigned int *)&idx + 52);
                    if (v12 >= gpGlobals->field_0 + 1.0)
                        v12 = 1.0 + gpGlobals->field_0;
                    *(float *)(*(unsigned int *)&idx + 52) = (float)v12;
                }
                v8 = 1.0;
                if (1.0 <= *(float *)(*(unsigned int *)&idx + 16))
                {
                    v8 = *(float *)(*(unsigned int *)&idx + 16);
                    if (v8 >= gpGlobals->field_0 + 1.0)
                        v8 = 1.0 + gpGlobals->field_0;
                    *(float *)(*(unsigned int *)&idx + 16) = (float)v8;
                }
            }
        }
        sub_489aa0(idx);
        if (*(char *)(*(unsigned int *)&idx + 36))
            return v8;
        v13 = *(float *)(*(unsigned int *)&idx + 16);
        if (v13 > gpGlobals->field_0)
            return v13;
        if (*(char *)(*(unsigned int *)&idx + 3364))
        {
            if (*(char *)(*(unsigned int *)&idx + 3396) < (int)(gpGlobals->field_90 - 1))
            {
                g_6168a4("sv_numbots");
                v6 = *(char *)(*(unsigned int *)&idx + 4);
                v13 = (double)(int)v6;
                if (v13 < v14)
                {
                    sub_4892c0(idx, -0x1, -0x1, 0, -0x1, -0x1);
                    return v13;
                }
            }
            *(char *)(*(unsigned int *)&idx + 3364) = 0;
        }
        if ((char)sub_48aa10(idx))
        {
            if (*(char *)(*(unsigned int *)&idx + 24) && *(char *)(*(unsigned int *)&idx + 3396) < (int)(gpGlobals->field_90 - 1))
            {
                if (*(char *)(*(unsigned int *)&idx + 21) || *(char *)(*(unsigned int *)&idx + 22))
                {
                    v4 = 0xffffffff;
                    v3 = 0xffffffff;
                    v2 = 0;
                    v1 = 0xffffffff;
                    v0 = *(char *)(*(unsigned int *)&idx + 23);
                }
                else
                {
                    v4 = 0xffffffff;
                    v3 = 0xffffffff;
                    v2 = 0;
                    v1 = 0xffffffff;
                    v0 = 0xffffffff;
                }
                sub_4892c0(idx);
                *(char *)(*(unsigned int *)&idx + 24) = *(char *)(*(unsigned int *)&idx + 24) - 1;
                return v13;
            }
            memset(*(unsigned int *)&idx + 20, 0, 5);
        }
        if (*(char *)(*(unsigned int *)&idx + 3396) >= *(short *)(*(unsigned int *)&idx + 28) || *(short *)(*(unsigned int *)&idx + 28) == 0xffff)
            return v13;
        sub_4892c0(idx, -0x1, -0x1, 0, -0x1, -0x1);
        return v13;
    }
    else
    {
        return 15.0;
    }
}

