// CineThink__12CCineMonster @0x115440 size=212
typedef struct st_515440_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_515440_0;

typedef struct st_515440_1 {
    unsigned int field_0;
} st_515440_1;

extern st_515440_1 *g_6168b4;
extern st_515440_0 *gpGlobals;

unsigned int * CineThink__12CCineMonster(float a0)
{
    if (!sub_48b1e0(a0))
    {
        sub_48a100(a0);
        g_6168b4(2, "script \"%s\" can\'t find monster \"%s\"\n", *(int *)(*(int *)a0 + 460) + gpGlobals->field_98, *(int *)(*(unsigned int *)&a0 + 688) + gpGlobals->field_98);
        *(float *)(*(int *)a0 + 260) = (float)(1.0 + gpGlobals->field_0);
        return gpGlobals;
    }
    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 504))(a0);
    return g_6168b4(2, "script \"%s\" using monster \"%s\"\n", *(int *)(*(int *)a0 + 460) + gpGlobals->field_98, *(int *)(*(unsigned int *)&a0 + 688) + gpGlobals->field_98);
}

