// ShowNodeConnections__6CGraphi @0xe0cb0 size=506
typedef struct st_4e0cb0_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[4];
    struct st_4e0cb0_1 *field_c;
    unsigned int field_10;
} st_4e0cb0_0;

typedef struct st_4e0cb0_2 {
    char padding_0[32];
    int field_20;
} st_4e0cb0_2;

typedef struct st_4e0cb0_1 {
    float field_0;
} st_4e0cb0_1;

typedef struct st_4e0cb0_4 {
    unsigned int field_0;
    unsigned int field_4;
    float field_8;
} st_4e0cb0_4;

typedef struct st_4e0cb0_3 {
    unsigned int field_0;
} st_4e0cb0_3;

extern int g_vecZero;
extern st_4e0cb0_3 *g_engfuncs.pfnMessageBegin;
extern st_4e0cb0_3 *g_engfuncs.pfnMessageEnd;
extern st_4e0cb0_3 *g_engfuncs.pfnWriteByte;
extern st_4e0cb0_3 *g_engfuncs.pfnWriteCoord;
extern st_4e0cb0_3 *g_engfuncs.pfnAlertMessage;

int ShowNodeConnections__6CGraphi(st_4e0cb0_0 *a0, int a1)
{
    unsigned int v7;  // edx
    unsigned int v8;  // edi
    unsigned int v9;  // eax
    st_4e0cb0_4 *v10;  // edx
    float v0;  // [bp-0x5c]
    int v1;  // [bp-0x54]
    int i;  // [bp-0x2c]
    st_4e0cb0_2 *v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    if (!a0->field_0 || !a0->field_4)
    {
        v7 = "Graph not ready!\n";
    }
    else if (a1 < 0)
    {
        v1 = a1;
        v7 = "Can't show connections for node %d\n";
    }
    else
    {
        v3 = &a0->field_c[22 * a1];
        UTIL_ParticleEffect(v3, &g_vecZero, 0xff, 20);
        if (v3->field_20 <= 0)
            g_engfuncs.pfnAlertMessage(2, "**No Connections!\n");
        i = 0;
        if (i >= v3->field_20)
            return i;
        v8 = a1 * 88;
        do
        {
            v9 = (i + *(int *)((char *)a0->field_c + v8 + 36)) * 3;
            v10 = &a0->field_c[20 * *(int *)(a0->field_10 + v9 * 8 + 4) + 2 * *(int *)(a0->field_10 + (i + *(int *)((char *)a0->field_c + v8 + 36)) * 24 + 4)];
            v4 = v10->field_0;
            v5 = v10->field_4;
            v6 = v10->field_8;
            g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
            g_engfuncs.pfnWriteByte(0x66);
            g_engfuncs.pfnWriteCoord(*(float *)((char *)a0->field_c + v8));
            g_engfuncs.pfnWriteCoord(*(float *)((char *)a0->field_c + v8 + 4));
            g_engfuncs.pfnWriteCoord((float)(8.0 + *(float *)((char *)a0->field_c + v8 + 8)));
            g_engfuncs.pfnWriteCoord(v4);
            g_engfuncs.pfnWriteCoord(v5);
            v0 = (float)(8.0 + v6);
            g_engfuncs.pfnWriteCoord(v0);
            g_engfuncs.pfnMessageEnd(v0);
            i += 1;
        } while (i < v3->field_20);
        return i;
    }
    return g_engfuncs.pfnAlertMessage(2, v7);
}

