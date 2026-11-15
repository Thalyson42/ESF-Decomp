// SetSuitUpdate__11CBasePlayerPcii @0xf9b80 size=503
typedef struct st_4f9b80_4 {
    struct st_4f9b80_3 *field_0;
    char padding_4[1976];
    float field_7bc;
    char padding_7c0[16];
    unsigned int field_7d0;
    unsigned int field_7d4;
} st_4f9b80_4;

typedef struct st_4f9b80_3 {
    char padding_0[360];
    int field_168;
} st_4f9b80_3;

typedef struct st_4f9b80_0 {
    char padding_0[24];
    struct st_4f9b80_1 *field_18;
} st_4f9b80_0;

typedef struct st_4f9b80_1 {
    unsigned int field_0;
} st_4f9b80_1;

typedef struct st_4f9b80_2 {
    char padding_0[68];
    struct st_4f9b80_0 *field_44;
} st_4f9b80_2;

extern st_4f9b80_2 *g_pGameRules;
extern st_4f9b80_1 *g_engfuncs.pfnRandomLong;
extern st_4f9b80_1 *gpGlobals;

int SetSuitUpdate__11CBasePlayerPcii(st_4f9b80_4 *a0, int a1, unsigned int a2, int a3)
{
    int v2;  // esi
    int idx;  // ecx
    st_4f9b80_4 *v12;  // ecx
    st_4f9b80_4 *v13;  // edx
    int v4;  // eax
    int v5;  // eax
    int v6;  // ecx
    int v7;  // ecx
    float *v8;  // edx
    unsigned int *v9;  // edi
    unsigned int v10;  // esi
    unsigned int v11;  // edx
    unsigned int *v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    v2 = -0x1;
    if (a0->field_0->field_168 >= 0)
    {
        return v5;
    }
    else if (g_pGameRules->field_44->field_18(g_pGameRules))
    {
        return v5;
    }
    else if (!a1)
    {
        idx = 0;
        do
        {
            *(unsigned int *)&a0->padding_7c0[4 * idx] = 0;
            idx += 1;
        } while (idx <= 3);
        return v4;
    }
    else
    {
        if (!a2)
        {
            v5 = SENTENCEG_Lookup(a1, 0);
            v1 = v5;
            if (v1 < 0)
                return v1;
        }
        else
        {
            v1 = SENTENCEG_GetIndex(a1);
            v1 = -v1;
        }
        v6 = 0;
        v0 = &a0->field_7d4;
        while (1)
        {
            v7 = v6;
            if (v7 > 31)
                break;
            v8 = v7 * 4;
            v9 = &a0->field_7d4;
            if (v1 == *(int *)(v8 + v9))
            {
                v10 = &a0[1].padding_4[120];
                if (*(float *)((char *)v8 + v10) >= *(float *)gpGlobals)
                    return v5;
                *(unsigned int *)(v8 + v9) = 0;
                *(unsigned int *)((char *)v8 + v10) = 0;
                v2 = v7;
                break;
            }
            else if (!v0[v7])
            {
                v6 = v7 + 1;
                v2 = v7;
            }
            else
            {
                v6 = v7 + 1;
            }
        }
        if (a3)
        {
            if (v2 < 0)
                v2 = g_engfuncs.pfnRandomLong(0, 31);
            v11 = v2 * 4;
            v12 = a0;
            *(int *)(v11 + (char *)v12 + 2004) = v1;
            *(float *)&v12[1].padding_4[120 + v11] = (float)((double)a3 + *(float *)gpGlobals);
        }
        v13 = a0;
        *(int *)&v13->padding_7c0[4 * v13->field_7d0] = v1;
        v13->field_7d0 = v13->field_7d0 + 1;
        if (v13->field_7d0 == 4)
            v13->field_7d0 = 0;
        if (((char)((0x3800 | (unsigned short)(CmpF(__double_as_longlong((double)a0->field_7bc), __double_as_longlong((double)*(float *)gpGlobals)) * 0x100 & 0x4500) & 0x4700) >> 8) & 69) - 1 >= 64)
        {
            return v5;
        }
        else if (a0->field_7bc == 0.0)
        {
            a0->field_7bc = (float)(0.1 + *(float *)gpGlobals);
            return v5;
        }
        else
        {
            a0->field_7bc = (float)(3.5 + *(float *)gpGlobals);
            return v5;
        }
    }
}

