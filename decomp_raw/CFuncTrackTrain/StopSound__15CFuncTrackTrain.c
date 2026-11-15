// StopSound__15CFuncTrackTrain @0xeb3b0 size=199
typedef struct st_4eb3b0_1 {
    struct st_4eb3b0_0 *field_0;
    char padding_4[144];
    unsigned int field_94;
    unsigned short field_98;
    char padding_9a[2];
    float field_9c;
    char padding_a0[8];
    unsigned short field_a8;
} st_4eb3b0_1;

typedef struct st_4eb3b0_0 {
    char padding_0[488];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_4eb3b0_0;

typedef struct st_4eb3b0_2 {
    unsigned int field_0;
} st_4eb3b0_2;

extern char g_vecZero;
extern st_4eb3b0_2 *g_engfuncs.pfnPlaybackEvent;

unsigned int StopSound__15CFuncTrackTrain(st_4eb3b0_1 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_94 && a0->field_0->field_1e8)
    {
        g_engfuncs.pfnPlaybackEvent(10, a0->field_0->field_208, a0->field_a8, 0, &g_vecZero, &g_vecZero, 0, 0, (a0->field_98 & 7) * 0x1000 & 0xffff, 0, 1, 0);
        v0 = EMIT_SOUND_DYN(a0->field_0->field_208, 3, "plats/ttrain_brake1.wav", a0->field_9c, 0.800000011920929f, 0, 100);
    }
    a0->field_94 = 0;
    return v0;
}

