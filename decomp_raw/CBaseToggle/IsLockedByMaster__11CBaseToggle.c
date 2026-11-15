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
        v0 = sub_488810(&a0->padding_0[212]);
        if (!sub_488a80(a0->field_100, v0))
            return 1;
    }
    return 0;
}

