// GetSchedule__12CBaseMonster @0x1140a0 size=892
typedef struct st_5140a0_0 {
    char padding_0[384];
    unsigned int field_180;
} st_5140a0_0;

typedef struct st_5140a0_1 {
    unsigned int field_0;
} st_5140a0_1;

extern char slError;
extern char _GLOBAL_OFFSET_TABLE_;
extern st_5140a0_1 *g_6168b4;

int GetSchedule__12CBaseMonster(st_5140a0_0 *a0)
{
    if (a0->field_180 > 8)
    {
        g_6168b4(2, "Invalid State for GetSchedule!\n");
        return &slError;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_180] - 0xff9fc)]));
}

