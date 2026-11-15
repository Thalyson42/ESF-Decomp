// CheckBotMiscThings__4CBot @0x1820f0 size=635
typedef struct st_5820f0_0 {
    float field_0;
} st_5820f0_0;

typedef struct st_5820f0_1 {
    unsigned int field_0;
} st_5820f0_1;

extern st_5820f0_1 *g_616928;
extern st_5820f0_1 *g_61692c;
extern st_5820f0_0 *gpGlobals;
extern char g_6253c6;
extern char g_6253cd;
extern int ChatClass;

double CheckBotMiscThings__4CBot(float idx)
{
    unsigned int v4;  // eax
    double v5;  // mm7
    double v6;  // mm7
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v2 = 0;
    *((char *)&v1 + 3) = 0;
    if (*(int *)(*(unsigned int *)&idx + 4196))
        v2 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 4196) + 20) + 24))(*(int *)(*(unsigned int *)&idx + 4196));
    else
        *((char *)&v1 + 3) = 1;
    if (((char)v2 & 2 || *(char *)((void*)&v1 + 3)) && g_6253c6 && !(v4 = sub_48ad00(idx), *(unsigned int *)(*(unsigned int *)&idx + 2924) = v4, !v4))
    {
        v0 = 5;
    }
    else
    {
        if (((char)v2 & 4 || *(char *)((void*)&v1 + 3)) && g_6253cd)
        {
            v5 = *(float *)(*(unsigned int *)&idx + 3144);
            if (v5 < *(float *)gpGlobals)
            {
                *(unsigned short *)&v1 = g_616928(1, 100);
                if (*(float *)(*(unsigned int *)&idx + 3420) < *(float *)gpGlobals)
                {
                    if ((short)v1 <= *(short *)(*(int *)(*(unsigned int *)&idx + 2564) + 24))
                        sub_48c300(&ChatClass, idx);
                    g_61692c(5.5f, 15.0f);
                    *(float *)(*(unsigned int *)&idx + 3420) = (float)(5.5 + *(float *)gpGlobals);
                }
                v5 = *(float *)(*(unsigned int *)&idx + 3404);
                if (v5 < *(float *)gpGlobals)
                {
                    if ((short)v1 <= *(short *)(*(int *)(*(unsigned int *)&idx + 2564) + 24))
                        sub_48de20(&ChatClass, idx);
                    g_61692c(15.0f, 40.0f);
                    v5 = 15.0 + *(float *)gpGlobals;
                    *(float *)(*(unsigned int *)&idx + 3404) = (float)v5;
                }
            }
        }
        if (((char)v2 & 16 || *(char *)((void*)&v1 + 3)) && (char)sub_48b7b0(idx))
        {
            v0 = 29;
        }
        else
        {
            if (!((char)v2 & 32) && !*(char *)((void*)&v1 + 3))
                return v5;
            v5 = *(float *)(*(unsigned int *)&idx + 2796);
            if (v5 >= *(float *)gpGlobals)
            {
                return v5;
            }
            else if ((char)sub_48c2e0(idx))
            {
                v0 = 19;
            }
            else
            {
                g_61692c(22.0f, 40.0f);
                v6 = 22.0 + *(float *)gpGlobals;
                *(float *)(*(unsigned int *)&idx + 2796) = (float)v6;
                return v6;
            }
        }
    }
    sub_48acb0(idx);
    return v5;
}

