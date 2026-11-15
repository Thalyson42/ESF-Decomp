// PM_ReduceTimers @0x193750 size=304
typedef struct st_593750_0 {
    char padding_0[140];
    float field_8c;
    char padding_90[4];
    int field_94;
    char padding_98[20];
    float field_ac;
    char padding_b0[340];
    unsigned int field_204;
    char padding_208[283218];
    char field_4545a;
} st_593750_0;

extern st_593750_0 *pmove;

unsigned int PM_ReduceTimers(void)
{
    int v2;  // eax
    int idx;  // edx
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x8]

    if (pmove->field_94 > 0)
    {
        v2 = pmove->field_94 - pmove->field_4545a;
        pmove->field_94 = v2;
        if (v2 < 0)
            pmove->field_94 = 0;
    }
    if (0.0 < pmove->field_8c)
    {
        v0 = pmove->field_4545a;
        pmove->field_8c = (float)(pmove->field_8c - (double)(int)v0);
        if (0.0 >= pmove->field_8c)
        {
            if (pmove->field_204 == 1)
                PM_WallJumpPush();
            pmove->field_8c = 0;
            pmove->field_204 = 0;
            idx = 0;
            do
            {
                *(unsigned int *)&pmove->padding_208[56 + 4 * idx] = 0;
                idx += 1;
            } while (idx <= 2);
        }
    }
    *(char *)&v4 = 0;
    v5 = _INSERT(v4, 1, (isnan(pmove->field_ac) ? 69 : 0.0 == pmove->field_ac ? 64 : 0.0 < pmove->field_ac));
    if (0.0 < pmove->field_ac)
    {
        v0 = pmove->field_4545a;
        pmove->field_ac = (float)(pmove->field_ac - (double)(int)v0);
        v6 = _INSERT(v0, 0, 0);
        v5 = _INSERT(v6, 1, (isnan(pmove->field_ac) ? 69 : 0.0 == pmove->field_ac ? 64 : 0.0 < pmove->field_ac));
        if (0.0 > pmove->field_ac)
        {
            pmove->field_ac = 0.0f;
            return v5;
        }
    }
    return v5;
}

