// __30CHalfLifeCaptureTheDragonBalls @0x9ae80 size=152
typedef struct st_49ae80_0 {
    float field_0;
} st_49ae80_0;

extern char __vt_30CHalfLifeCaptureTheDragonBalls;
extern st_49ae80_0 *gpGlobals;

float __30CHalfLifeCaptureTheDragonBalls(float idx)
{
    int index;  // eax

    sub_48a710(idx);
    *(char **)(*(unsigned int *)&idx + 0x44) = &__vt_30CHalfLifeCaptureTheDragonBalls;
    *(unsigned int *)(*(unsigned int *)&idx + 612) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 628) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 616) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 664) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 620) = 0;
    *(float *)(*(unsigned int *)&idx + 624) = *(float *)gpGlobals;
    *(unsigned int *)(*(unsigned int *)&idx + 660) = 0;
    index = 0;
    do
    {
        *(unsigned int *)(*(unsigned int *)&idx + 632 + index * 4) = 0;
        index += 1;
    } while (index <= 6);
    return idx;
}

