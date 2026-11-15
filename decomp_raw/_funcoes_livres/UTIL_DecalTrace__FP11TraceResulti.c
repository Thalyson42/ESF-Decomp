// UTIL_DecalTrace__FP11TraceResulti @0x133920 size=444
typedef struct st_533920_4 {
    char padding_0[124];
    struct st_533920_3 *field_7c;
} st_533920_4;

typedef struct st_533920_1 {
    char padding_0[144];
    struct st_533920_2 *field_90;
} st_533920_1;

typedef struct st_533920_2 {
    unsigned int field_0;
} st_533920_2;

typedef struct st_533920_5 {
    char padding_0[16];
    float field_10;
    float field_14;
    float field_18;
    float field_1c;
    char padding_20[16];
    struct st_533920_4 *field_30;
} st_533920_5;

typedef struct st_533920_3 {
    char padding_0[96];
    struct st_533920_1 *field_60;
} st_533920_3;

typedef struct st_533920_0 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_533920_0;

extern st_533920_0 gDecals+4;
extern st_533920_2 *g_engfuncs.pfnMessageBegin;
extern st_533920_2 *g_engfuncs.pfnMessageEnd;
extern st_533920_2 *g_engfuncs.pfnWriteByte;
extern st_533920_2 *g_engfuncs.pfnWriteShort;
extern st_533920_2 *g_engfuncs.pfnWriteCoord;
extern st_533920_2 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_533920_2 *g_engfuncs.pfnIndexOfEdict;

unsigned int UTIL_DecalTrace__FP11TraceResulti(st_533920_5 *a0, int idx)
{
    int v2;  // edi
    st_533920_4 *v3;  // eax
    st_533920_3 *v4;  // edx
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned short v1;  // [bp-0x16]

    if (idx < 0)
        return v6;
    v2 = (&gDecals+4.field_0)[2 * idx];
    if (v2 < 0)
    {
        return v6;
    }
    else if (a0->field_10 != 1.0)
    {
        if (a0->field_30)
        {
            v3 = a0->field_30;
            if (a0->field_30 || (v3 = g_engfuncs.pfnPEntityOfEntOffset(0), v3))
                v4 = v3->field_7c;
            else
                v4 = NULL;
            if (v4 && !v4->field_60->field_90(v4))
                return v5;
            v1 = g_engfuncs.pfnIndexOfEdict(a0->field_30);
        }
        else
        {
            v1 = 0;
        }
        v0 = 104;
        if (v1)
        {
            if (v2 <= 0xff)
                goto LABEL_533a22;
            v0 = 118;
            goto LABEL_533a1c;
        }
        else
        {
            v0 = 116;
            if (v2 > 0xff)
            {
                v0 = 117;
LABEL_533a1c:
                v2 -= 0x100;
            }
        }
LABEL_533a22:
        g_engfuncs.pfnMessageBegin(0, 23, 0, 0);
        g_engfuncs.pfnWriteByte(v0);
        g_engfuncs.pfnWriteCoord(a0->field_14);
        g_engfuncs.pfnWriteCoord(a0->field_18);
        g_engfuncs.pfnWriteCoord(a0->field_1c);
        g_engfuncs.pfnWriteByte(v2);
        if (v1)
            g_engfuncs.pfnWriteShort(v1);
        v6 = g_engfuncs.pfnMessageEnd();
        return v6;
    }
    else
    {
        return v6;
    }
}

