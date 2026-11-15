// RemoveThink__5CAura @0x8fc50 size=150
typedef struct st_48fc50_1 {
    char padding_0[408];
    unsigned int field_198;
} st_48fc50_1;

typedef struct st_48fc50_0 {
    float field_0;
} st_48fc50_0;

extern st_48fc50_0 *gpGlobals;

unsigned int * RemoveThink__5CAura(float a0)
{
    st_48fc50_1 *v1;  // ecx
    unsigned int idx;  // edx

    if (!*(int *)(*(int *)a0 + 408))
    {
        sub_48dd20(a0);
    }
    else if (!*(int *)((!*(int *)(*(int *)a0 + 408) ? 0 : *(int *)(*(int *)a0 + 408) + 128) + 268))
    {
        sub_48dd20(a0);
    }
    if (*(int *)(*(int *)(*(unsigned int *)&a0 + 680) + 800))
    {
        v1 = *(int *)a0;
        idx = *(int *)*(int *)(*(unsigned int *)&a0 + 680);
        *(int *)&v1->padding_0[80] = *(int *)(idx + 116);
        *(int *)&v1->padding_0[84] = *(int *)(idx + 120);
        *(int *)&v1->padding_0[88] = *(int *)(idx + 124);
    }
    *(float *)(*(int *)a0 + 260) = (float)(0.5 + *(float *)gpGlobals);
    return gpGlobals;
}

