// FCheckAITrigger__12CBaseMonster @0xd94b0 size=545
typedef struct st_4d94b0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4d94b0_1;

typedef struct st_4d94b0_0 {
    unsigned int field_0;
} st_4d94b0_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4d94b0_0 *g_6168b4;
extern st_4d94b0_1 *gpGlobals;

unsigned int FCheckAITrigger__12CBaseMonster(unsigned int *a0)
{
    unsigned int v0;  // [bp-0x8]

    if (a0[163])
    {
        v0 = 0;
        if (a0[163] - 1 <= 10)
        {
            goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0[163]] - 1287648)]));
        }
        else if (v0)
        {
            g_6168b4(2, "AI Trigger Fire Target\n");
            sub_48c1b0(a0[164] + gpGlobals->field_98, a0, a0, 3, 0);
            a0[163] = 0;
            return 1;
        }
    }
    return 0;
}

