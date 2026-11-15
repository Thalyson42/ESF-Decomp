// IsLockedByMaster__11CBaseToggle @0x123170 size=91
typedef struct st_523170_0 {
    char padding_0[256];
    int field_100;
} st_523170_0;

unsigned int IsLockedByMaster__11CBaseToggle(st_523170_0 *a0)
{
    int v0;  // eax

    if (a0->field_100)
    {
        v0 = EHANDLE::__opP11CBaseEntity(&a0->padding_0[212]);
        if (!UTIL_IsMasterTriggered(a0->field_100, v0))
            return 1;
    }
    return 0;
}

