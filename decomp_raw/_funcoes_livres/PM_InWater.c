// PM_InWater @0x1911e0 size=44
typedef struct st_5911e0_0 {
    char padding_0[228];
    int field_e4;
} st_5911e0_0;

extern st_5911e0_0 *pmove;

int PM_InWater(void)
{
    return pmove->field_e4 > 1;
}

