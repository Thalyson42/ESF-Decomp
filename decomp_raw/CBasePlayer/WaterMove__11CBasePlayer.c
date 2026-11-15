// WaterMove__11CBasePlayer @0xf5910 size=1159
typedef struct st_4f5910_0 {
    float field_0;
} st_4f5910_0;

typedef struct st_4f5910_1 {
    unsigned int field_0;
} st_4f5910_1;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4f5910_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_4f5910_1 *g_engfuncs.pfnRandomLong;
extern st_4f5910_0 *gpGlobals;

int WaterMove__11CBasePlayer(float idx)
{
    unsigned int *v9;  // edx
    unsigned int v10;  // edx
    unsigned int v19;  // eax
    unsigned int *v20;  // eax
    int v11;  // eax
    unsigned int *v12;  // edx
    unsigned int v13;  // eax
    unsigned int v14;  // eax
    unsigned int *v15;  // eax
    unsigned int *v16;  // edx
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40], Other Possible Types: float
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x38]
    int v4;  // [bp-0x10]
    unsigned short v5;  // [bp-0xc]
    unsigned short v6;  // [bp-0xa]
    int v7;  // [bp-0x8], Other Possible Types: unsigned int

    v9 = *(int *)idx;
    if (v9[66] == 8)
    {
        return v15;
    }
    else if (0.0 <= *(float *)&v9[88])
    {
        if (v9[112] != 3)
        {
            if (*(float *)&v9[127] < *(float *)gpGlobals)
            {
                v10 = v9[130];
                v11 = "player/pl_wade1.wav";
            }
            else
            {
                if (*(float *)gpGlobals + 9.0 <= *(float *)(*(int *)idx + 508))
                    goto LABEL_4f59cf;
                v10 = *(int *)(*(int *)idx + 520);
                v11 = "player/pl_wade2.wav";
            }
            EMIT_SOUND_DYN(v10, 2, v11, 0x3f800000, 0.800000011920929f, 0, 100);
LABEL_4f59cf:
            *(float *)(*(int *)idx + 508) = (float)(*(float *)gpGlobals + 90.0);
            *(float *)(*(int *)idx + 480) = 2.0f;
            if (*(int *)(*(unsigned int *)&idx + 2288) > *(int *)(*(unsigned int *)&idx + 2292))
            {
                *(char *)(*(unsigned int *)&idx + 618) = *(char *)(*(unsigned int *)&idx + 618) | 8;
                *(char *)(*(unsigned int *)&idx + 617) = *(char *)(*(unsigned int *)&idx + 617) & 191;
                *(char *)(*(unsigned int *)&idx + 624) = 0;
            }
        }
        else
        {
            *(char *)(*(unsigned int *)&idx + 618) = *(char *)(*(unsigned int *)&idx + 618) & 247;
            *(char *)(*(unsigned int *)&idx + 624) = 0;
            v12 = *(int *)idx;
            if (*(float *)&v12[127] >= *(float *)gpGlobals)
            {
                *(char *)(*(unsigned int *)&idx + 617) = *(char *)(*(unsigned int *)&idx + 617) & 191;
            }
            else if (*(float *)&v12[128] < *(float *)gpGlobals)
            {
                *(float *)&v12[120] = (float)(1.0 + *(float *)&v12[120]);
                if (5.0 < *(float *)(*(int *)idx + 480))
                    *(float *)(*(int *)idx + 480) = 5.0f;
                v2 = 0x4000;
                *(float *)&v1 = *(float *)(*(int *)idx + 480);
                v13 = g_engfuncs.pfnPEntityOfEntOffset(0);
                v0 = (!v13 ? 0 : v13 + 128);
                v14 = g_engfuncs.pfnPEntityOfEntOffset(0);
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 52))(idx, (!v14 ? 0 : v14 + 128));
                *(float *)(*(int *)idx + 0x200) = (float)(1.0 + *(float *)gpGlobals);
                v6 = __fnstcw();
                v5 = v6 | 0xc00;
                v7 = (int)((double)*(int *)(*(unsigned int *)&idx + 2288) + *(float *)(*(int *)idx + 480));
                *(int *)(*(unsigned int *)&idx + 2288) = v7;
            }
        }
        v15 = *(int *)idx;
        if (!v15[112])
        {
            if (!((char)v15[105] & 16))
                return v15;
            *(char *)&v15[105] = (char)v15[105] & 239;
            return v15;
        }
        else
        {
            v6 = __fnstcw();
            v5 = v6 | 0xc00;
            v4 = (int)(*(float *)(*(int *)idx + 508) - *(float *)gpGlobals);
            if (!g_engfuncs.pfnRandomLong(0, 31) && (int)g_engfuncs.pfnRandomLong(0, 89) >= v4)
            {
                v3 = 3;
                v2 = 0;
                g_engfuncs.pfnRandomLong(v2, v3);
                if (g_engfuncs.pfnRandomLong(v2, v3) <= 3)
                    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * g_engfuncs.pfnRandomLong(v2, v3)] - 1171164)]));
            }
            v16 = *(int *)idx;
            if (v16[113] == 0xfffffffb && *(float *)&v16[121] < *(float *)gpGlobals)
            {
                if (*(int *)(*(unsigned int *)&idx + 1000) && *(int *)(*(unsigned int *)&idx + 936))
                {
                    v2 = 8;
                    v7 = v16[112] * 10;
                    v1 = (float)(int)v7;
                    v0 = *(int *)*(int *)(*(unsigned int *)&idx + 1000);
                    v17 = g_engfuncs.pfnPEntityOfEntOffset(0);
                    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 52))(idx, (!v17 ? 0 : v17 + 128));
                }
                else
                {
                    v2 = 8;
                    v7 = *(int *)(*(int *)idx + 448) * 10;
                    v1 = (float)(int)v7;
                    v18 = g_engfuncs.pfnPEntityOfEntOffset(0);
                    v0 = (!v18 ? 0 : v18 + 128);
                    v19 = g_engfuncs.pfnPEntityOfEntOffset(0);
                    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 52))(idx, (!v19 ? 0 : v19 + 128));
                }
            }
            v20 = *(int *)idx;
            if ((char)v20[105] & 16)
                return v15;
            *(char *)&v20[105] = (char)v20[105] | 16;
            *(unsigned int *)(*(int *)idx + 484) = 0;
            return v15;
        }
    }
    else
    {
        return v15;
    }
}

