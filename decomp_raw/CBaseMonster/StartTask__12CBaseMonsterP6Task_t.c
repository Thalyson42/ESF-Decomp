// StartTask__12CBaseMonsterP6Task_t @0x112a90 size=5573
typedef struct st_512a90_0 {
    unsigned int field_0;
} st_512a90_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_512a90_0 *g_engfuncs.pfnAlertMessage;

int StartTask__12CBaseMonsterP6Task_t(unsigned int a0, unsigned int *a1)
{
    if (*a1 - 1 > 88)
        return g_engfuncs.pfnAlertMessage(2, "No StartTask entry for %d\n", *a1);
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * *a1] - 0x101010)]));
}

