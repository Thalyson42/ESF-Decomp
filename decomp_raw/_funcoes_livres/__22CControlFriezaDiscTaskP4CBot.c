// __22CControlFriezaDiscTaskP4CBot @0x159f30 size=186
typedef struct st_559f30_0 {
    unsigned int field_0;
} st_559f30_0;

extern char __vt_22CControlFriezaDiscTask;
extern st_559f30_0 *g_61692c;

unsigned int * __22CControlFriezaDiscTaskP4CBot(double a0, unsigned int *a1, int a2)
{
    sub_48ce80(a1, a2);
    a1[5] = &__vt_22CControlFriezaDiscTask;
    a1[6] = 0;
    *(float *)&a1[7] = *(float *)a1;
    g_61692c(10.0f, 22.0f);
    *(float *)&a1[8] = 10.0f;
    *(float *)&a1[9] = *(float *)a1 + *(float *)&a1[8];
    return a1;
}

