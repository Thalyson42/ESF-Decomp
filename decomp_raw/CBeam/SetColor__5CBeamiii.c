// SetColor__5CBeamiii @0xb71d0 size=68
typedef struct st_4b71d0_0 {
    char padding_0[336];
    float field_150;
    float field_154;
    float field_158;
} st_4b71d0_0;

unsigned int * SetColor__5CBeamiii(st_4b71d0_0 **a0, int a1, int a2, int a3)
{
    float *v1;  // eax
    int v0;  // [bp-0x8]

    v0 = a1;
    *a0->field_150 = (float)v0;
    v0 = a2;
    *a0->field_154 = (float)v0;
    v1 = *a0;
    v0 = a3;
    v1[86] = (float)v0;
    return v1;
}

