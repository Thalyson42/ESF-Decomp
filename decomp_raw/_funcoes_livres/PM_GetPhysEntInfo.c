// PM_GetPhysEntInfo @0x1948a0 size=74
typedef struct st_5948a0_0 {
    char padding_0[588];
    int field_24c;
} st_5948a0_0;

extern st_5948a0_0 *pmove;

unsigned int PM_GetPhysEntInfo(int a0)
{
    if (a0 >= 0 && a0 <= pmove->field_24c)
        return *(int *)&pmove[1].padding_0[80 + 224 * a0];
    return 0xffffffff;
}

