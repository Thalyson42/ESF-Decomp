// PM_GetVisEntInfo @0x194850 size=74
typedef struct st_594850_0 {
    char padding_0[149332];
    int field_24754;
} st_594850_0;

extern st_594850_0 *pmove;

unsigned int PM_GetVisEntInfo(int a0)
{
    if (a0 >= 0 && a0 <= pmove->field_24754)
        return *(int *)&pmove[1].padding_0[80 + 224 * a0];
    return 0xffffffff;
}

