// Think__7CShower @0xb9d70 size=129
typedef struct st_4b9d70_0 {
    float field_0;
} st_4b9d70_0;

extern st_4b9d70_0 *gpGlobals;

int Think__7CShower(float a0)
{
    unsigned int idx;  // eax

    sub_48a3b0(*(int *)a0 + 8);
    *(float *)(*(int *)a0 + 504) = (float)(*(float *)(*(int *)a0 + 504) - 0.1);
    if (0.0 < *(float *)(*(int *)a0 + 504))
        *(float *)(*(int *)a0 + 260) = (float)(0.1 + *(float *)gpGlobals);
    else
        sub_48cc00(a0);
    idx = *(int *)a0;
    *(char *)(idx + 421) = *(char *)(idx + 421) & 253;
    return idx;
}

