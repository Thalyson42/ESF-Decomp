// GetScheduleOfType__12CBaseMonsteri @0xa9a00 size=926
typedef struct st_4a9a00_0 {
    unsigned int field_0;
} st_4a9a00_0;

extern char slIdleStand;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_4a9a00_0 *g_engfuncs.pfnAlertMessage;

int GetScheduleOfType__12CBaseMonsteri(unsigned int a0, unsigned int a1)
{
    if (a1 - 1 > 40)
    {
        g_engfuncs.pfnAlertMessage(1, "GetScheduleOfType()\nNo CASE for Schedule Type %d!\n", a1);
        return &slIdleStand;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a1] - 1482912)]));
}

