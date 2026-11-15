// __13CTeleportTaskP4CBot @0x182640 size=314
typedef struct st_582640_1 {
    float field_0;
    char padding_4[4];
    struct st_582640_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_582640_1;

typedef struct st_582640_0 {
    char padding_0[800];
    unsigned int field_320;
    char padding_324[1772];
    char field_a10;
    char padding_a11[3];
    float field_a14;
    char padding_a18[240];
    float field_b08;
    unsigned int field_b0c;
} st_582640_0;

typedef struct st_582640_2 {
    unsigned int field_0;
} st_582640_2;

extern char __vt_13CTeleportTask;
extern st_582640_2 *g_engfuncs.pfnRandomFloat;
extern st_582640_2 *gpGlobals;

st_582640_1 * __13CTeleportTaskP4CBot(st_582640_1 *a0, int a1)
{
    unsigned int v0;  // eax

    __9CBaseTaskP4CBot(a0, a1);
    a0->field_14 = &__vt_13CTeleportTask;
    if (!a0->field_8->field_b0c)
    {
        v0 = CTeleportTask::GetRandomTeleDir(a0);
        a0->field_8->field_b0c = v0;
    }
    if (a0->field_8->field_b08 < *(float *)gpGlobals)
        a0->field_8->field_b08 = (float)(0.2 + a0->field_0);
    if (!(char)CBot::BotShouldFallDown(a0->field_8))
        return a0;
    if (a0->field_8->field_320)
        CBasePlayer::StopFly(a0->field_8);
    a0->field_8->field_a10 = 0;
    g_engfuncs.pfnRandomFloat(0.800000011920929f, 1.2000000476837158f);
    a0->field_8->field_a14 = (float)(0.800000011920929 + *(float *)gpGlobals);
    return a0;
}

