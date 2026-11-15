// Think__12CAutoTrigger @0x12ad10 size=101
typedef struct st_52ad10_0 {
    char padding_0[416];
    char field_1a0;
} st_52ad10_0;

typedef struct st_52ad10_1 {
    struct st_52ad10_0 *field_0;
    char padding_4[104];
    int field_6c;
    int field_70;
} st_52ad10_1;

extern int gGlobalState;

st_52ad10_0 * Think__12CAutoTrigger(st_52ad10_1 *a0)
{
    st_52ad10_0 *v0;  // eax

    if (a0->field_6c)
    {
        v0 = CGlobalState::EntityGetState(&gGlobalState, a0->field_6c);
        if (v0 != 0x1)
            return v0;
    }
    CBaseDelay::SUB_UseTargets(a0, a0, a0->field_70, 0);
    if (!(a0->field_0->field_1a0 & 1))
        return a0->field_0;
    return UTIL_Remove(a0);
}

