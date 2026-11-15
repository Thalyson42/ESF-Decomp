// Think__5CGlow @0xb35e0 size=95
typedef struct st_4b35e0_0 {
    float field_0;
} st_4b35e0_0;

extern st_4b35e0_0 *gpGlobals;

unsigned int * Think__5CGlow(float a0)
{
    CGlow::Animate(a0, (*(float *)gpGlobals - *(float *)(*(unsigned int *)&a0 + 100)) * *(float *)(*(int *)a0 + 312));
    *(float *)(*(int *)a0 + 260) = (float)(0.1 + *(float *)gpGlobals);
    *(float *)(*(unsigned int *)&a0 + 100) = *(float *)gpGlobals;
    return gpGlobals;
}

