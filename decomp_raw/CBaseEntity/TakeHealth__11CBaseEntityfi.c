// TakeHealth__11CBaseEntityfi @0x9ce70 size=112
typedef struct st_49ce70_0 {
    char padding_0[352];
    float field_160;
    char padding_164[8];
    float field_16c;
    char padding_170[64];
    float field_1b0;
} st_49ce70_0;

unsigned int TakeHealth__11CBaseEntityfi(st_49ce70_0 **a0, float a1)
{
    float *v0;  // edx

    if (*a0->field_16c != 0.0f && *a0->field_160 < *a0->field_1b0)
    {
        *a0->field_160 = a1 + *a0->field_160;
        v0 = *a0;
        if (v0[88] <= v0[108])
            return 1;
        v0[88] = v0[108];
        return 1;
    }
    return 0;
}

