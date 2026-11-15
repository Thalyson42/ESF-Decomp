// Spawn__9CTestHullP9entvars_s @0xe1850 size=299
typedef struct st_4e1850_1 {
    struct st_4e1850_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4e1850_1;

typedef struct st_4e1850_0 {
    char padding_0[260];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[44];
    unsigned int field_148;
    unsigned int field_14c;
    char padding_150[184];
    unsigned int field_208;
} st_4e1850_0;

typedef struct st_4e1850_3 {
    float field_0;
} st_4e1850_3;

typedef struct st_4e1850_2 {
    unsigned int field_0;
} st_4e1850_2;

extern char DropDelay__9CTestHull;
extern char SUB_Remove__11CBaseEntity;
extern st_4e1850_2 *g_6167c8;
extern st_4e1850_3 *gpGlobals;
extern unsigned int WorldGraph;

unsigned int * Spawn__9CTestHullP9entvars_s(st_4e1850_1 *a0)
{
    st_4e1850_0 *v6;  // edx
    double v7;  // mm7
    st_4e1850_0 *v8;  // eax
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    g_6167c8(a0->field_0->field_208, "models/player.mdl");
    v3 = 4.0f;
    v4 = 4.0f;
    v5 = 18.0f;
    v0 = -4.0f;
    v1 = -4.0f;
    v2 = 0;
    sub_48a0d0(a0->field_0, &v0, &v3);
    a0->field_0->field_10c = 3;
    a0->field_0->field_108 = 4;
    a0->field_0->field_118 = 0;
    *(float *)&a0->field_0->padding_150[16] = 50.0f;
    *(float *)&a0->field_0->padding_0[176] = 8.0f;
    if (WorldGraph)
    {
        a0->field_c = 0xffff0000;
        a0->field_10 = &SUB_Remove__11CBaseEntity;
        v6 = a0->field_0;
        v7 = *(float *)gpGlobals;
    }
    else
    {
        a0->field_c = 0xffff0000;
        a0->field_10 = &DropDelay__9CTestHull;
        v6 = a0->field_0;
        v7 = 1.0 + *(float *)gpGlobals;
    }
    v6->field_104 = (float)v7;
    a0->field_0->field_148 = 2;
    v8 = a0->field_0;
    v8->field_14c = 0;
    return v8;
}

