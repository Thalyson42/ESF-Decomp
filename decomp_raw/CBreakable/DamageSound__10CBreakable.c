// DamageSound__10CBreakable @0xc20f0 size=541
typedef struct st_4c20f0_0 {
    char padding_0[520];
    int field_208;
} st_4c20f0_0;

typedef struct st_4c20f0_1 {
    struct st_4c20f0_0 *field_0;
    char padding_4[104];
    unsigned int field_6c;
} st_4c20f0_1;

typedef struct st_4c20f0_2 {
    unsigned int field_0;
} st_4c20f0_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4c20f0_2 *g_engfuncs.pfnRandomLong;
extern st_4c20f0_2 *g_engfuncs.pfnRandomFloat;

unsigned int DamageSound__10CBreakable(double a0, st_4c20f0_1 *a1)
{
    unsigned int v8;  // esi
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    float v0;  // [bp-0x60]
    float v1;  // [bp-0x5c]
    unsigned int v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x54]
    unsigned int v4;  // [bp-0x30]
    float v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    int v7;  // [bp-0x24]

    v8 = a1->field_6c;
    v6 = (!g_engfuncs.pfnRandomLong(0, 2) ? g_engfuncs.pfnRandomLong(0, 0x22) + 95 : 100);
    v9 = g_engfuncs.pfnRandomFloat(0.75f, 0x3f800000);
    v5 = 0.75f;
    if (v8 == 6)
    {
        v9 = g_engfuncs.pfnRandomLong(0, 1);
        if (v9)
            v8 = 2;
    }
    if (v8 <= 8)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v8] - 1382700)]));
    }
    else if (v4)
    {
        v3 = v6;
        v2 = 0;
        v1 = 0.800000011920929f;
        v0 = v5;
        v10 = g_engfuncs.pfnRandomLong(0, v4 - 1);
        return EMIT_SOUND_DYN(a1->field_0->field_208, 2, (&v7)[v10]);
    }
    else
    {
        return v9;
    }
}

