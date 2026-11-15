// PM_Init @0x1948f0 size=102
extern unsigned int pm_shared_initialized;
extern unsigned int pmove;

unsigned int PM_Init(unsigned int a0)
{
    unsigned int v1;  // eax
    int v0;  // [bp-0x2c]

    if (pm_shared_initialized)
    {
        v0 = "!pm_shared_initialized";
        sub_4892a0(v0, "../pm_shared/pm_shared.c", 0xffc, "PM_Init");
    }
    pmove = a0;
    sub_48a820(v0);
    v1 = sub_487c50();
    pm_shared_initialized = 1;
    return v1;
}

