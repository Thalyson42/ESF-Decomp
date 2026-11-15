// _._16CFinishMeleeTask @0x14a000 size=83
typedef struct st_54a000_0 {
    char padding_0[8];
    int field_8;
    char padding_c[8];
    unsigned int field_14;
} st_54a000_0;

extern char __vt_16CFinishMeleeTask;

int _._16CFinishMeleeTask(st_54a000_0 *a0, int a1)
{
    a0->field_14 = &__vt_16CFinishMeleeTask;
    CBot::AddShootDelay(a0->field_8);
    CBot::ClearMeleeComboList(a0->field_8);
    return _._9CBaseTask(a0, a1);
}

