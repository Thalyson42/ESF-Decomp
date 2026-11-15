// UpdateSound__15CFuncTrackTrain @0xeb480 size=469
typedef struct st_4eb480_1 {
    struct st_4eb480_0 *field_0;
    char padding_4[144];
    unsigned int field_94;
    unsigned short field_98;
    char padding_9a[2];
    float field_9c;
    char padding_a0[8];
    unsigned short field_a8;
} st_4eb480_1;

typedef struct st_4eb480_0 {
    char padding_0[488];
    unsigned int field_1e8;
    char padding_1ec[12];
    float field_1f8;
    char padding_1fc[12];
    int field_208;
} st_4eb480_0;

typedef struct st_4eb480_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4eb480_2;

typedef struct st_4eb480_3 {
    unsigned int field_0;
} st_4eb480_3;

extern char g_vecZero;
extern st_4eb480_3 *g_6169ac;
extern st_4eb480_2 *gpGlobals;

unsigned int * UpdateSound__15CFuncTrackTrain(st_4eb480_1 *a0)
{
    st_4eb480_0 *v5;  // eax
    int v6;  // edx
    unsigned int *v7;  // eax
    float v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0xc], Other Possible Types: int
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    v5 = a0->field_0;
    if (!v5->field_1e8)
        return v5;
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v1 = (int)v5->field_1f8;
    v6 = v1;
    if (v6 < 0)
        v6 = -v6;
    v1 = v6 * 7 / 50 + 60;
    v0 = (float)(int)v1;
    if (a0->field_94)
    {
        v4 = __fnstcw();
        v3 = v4 | 0xc00;
        v1 = (int)(v0 / 10.0);
        v4 = __fnstcw();
        v3 = v4 | 0xc00;
        v2 = (int)(40.0 * a0->field_9c);
        return g_6169ac(10, a0->field_0->field_208, a0->field_a8, 0, &g_vecZero, &g_vecZero, 0, 0, ((a0->field_98 & 7) * 0x1000 | ((short)v1 & 63) * 64 | (short)v2 & 63) & 0xffff, 0, 0, 0);
    }
    sub_489390(a0->field_0->field_208, 3, "plats/ttrain_start1.wav", a0->field_9c, 1061997773, 0, 100);
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v1 = (int)v0;
    v7 = sub_489390(a0->field_0->field_208, 6, a0->field_0->field_1e8 + gpGlobals->field_98, a0->field_9c, 1061997773, 0, v1);
    a0->field_94 = 1;
    return v7;
}

