// CurrentWPIsValid__4CBot @0x170f90 size=123
typedef struct st_570f90_0 {
    float field_0;
} st_570f90_0;

extern st_570f90_0 *gpGlobals;
extern char waypoints+4;

char CurrentWPIsValid__4CBot(float a0)
{
    if (*(int *)(*(unsigned int *)&a0 + 4104) != 0xffffffff && *(float *)(*(unsigned int *)&a0 + 4100) + 5.0 >= *(float *)gpGlobals)
        return (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 228))(a0, &(&waypoints+4)[16 * *(int *)(*(unsigned int *)&a0 + 4104)]) == 1;
    return 0;
}

