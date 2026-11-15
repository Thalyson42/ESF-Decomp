// PissedThink__9CShenlong @0x118530 size=115
typedef struct st_518530_0 {
    float field_0;
} st_518530_0;

extern st_518530_0 *gpGlobals;

unsigned int * PissedThink__9CShenlong(float a0)
{
    unsigned int v1;  // eax

    *(unsigned int *)(*(int *)a0 + 300) = 0;
    v1 = sub_48afe0(a0, "talk");
    *(unsigned int *)(*(int *)a0 + 296) = v1;
    *(unsigned int *)(*(int *)a0 + 304) = 0;
    sub_488850(a0);
    *(float *)(*(int *)a0 + 260) = (float)(*(float *)gpGlobals + 15.0);
    return gpGlobals;
}

