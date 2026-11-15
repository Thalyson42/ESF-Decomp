// FindHintNode__12CBaseMonster @0xd8df0 size=484
typedef struct st_4d8df0_1 {
    float field_0;
    float field_4;
    float field_8;
    char padding_c[68];
    short field_50;
    short field_52;
} st_4d8df0_1;

typedef struct st_4d8df0_0 {
    unsigned int field_0;
} st_4d8df0_0;

extern st_4d8df0_0 *g_engfuncs.pfnAlertMessage;
extern unsigned int WorldGraph;
extern unsigned int WorldGraph+12;
extern unsigned int WorldGraph+24;
extern unsigned int WorldGraph+8388;

unsigned int FindHintNode__12CBaseMonster(float a0)
{
    unsigned int v14;  // edi
    st_4d8df0_1 *v15;  // esi
    unsigned int idx;  // edx
    unsigned int index;  // eax
    char *v0;  // [bp-0xa0]
    char *v1;  // [bp-0x9c]
    unsigned int v2;  // [bp-0x98]
    char v3;  // [bp-0x84]
    float v4;  // [bp-0x84]
    float v5;  // [bp-0x80]
    float v6;  // [bp-0x7c]
    char v7;  // [bp-0x64]
    float v8;  // [bp-0x64]
    float v9;  // [bp-0x60]
    float v10;  // [bp-0x5c]
    char v11;  // [bp-0x44]
    float v12;  // [bp-0x34]

    if (!WorldGraph)
    {
        g_engfuncs.pfnAlertMessage(2, "find_hintnode: graph not ready!\n");
    }
    else
    {
        if ((int)WorldGraph+8388 >= (int)WorldGraph+24)
            WorldGraph+8388 = 0;
        v2 = 0;
        if ((int)v2 < (int)WorldGraph+24)
        {
            v1 = &v7;
            v0 = &v3;
            do
            {
                v14 = (v2 + WorldGraph+8388) % WorldGraph+24;
                v15 = WorldGraph+12 + v14 * 88;
                if (v15->field_50 && (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 424))(a0, v15->field_50) && (!v15->field_52 || CBaseAnimating::LookupActivity(a0, v15->field_52) != 0xffffffff))
                {
                    idx = *(int *)a0;
                    v8 = v15->field_0 + *(float *)(idx + 372);
                    v9 = v15->field_4 + *(float *)(idx + 376);
                    v10 = v15->field_8 + *(float *)(idx + 380);
                    index = idx + 8;
                    v4 = *(float *)(idx + 8) + *(float *)(idx + 372);
                    v5 = *(float *)(index + 4) + *(float *)(idx + 376);
                    v6 = *(float *)(index + 8) + *(float *)(idx + 380);
                    UTIL_TraceLine(v0, v1, 1, *(int *)(idx + 520), &v11);
                    if (v12 == 1.0f)
                    {
                        WorldGraph+8388 = v14 + 1;
                        return v14;
                    }
                }
            } while ((v2 += 1, (int)v2 < (int)WorldGraph+24));
        }
        WorldGraph+8388 = 0;
    }
    return 0xffffffff;
}

