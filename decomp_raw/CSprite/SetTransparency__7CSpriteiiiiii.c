// SetTransparency__7CSpriteiiiiii @0xb6ee0 size=95
typedef struct st_4b6ee0_0 {
    char padding_0[328];
    unsigned int field_148;
    float field_14c;
    float field_150;
    float field_154;
    float field_158;
    unsigned int field_15c;
} st_4b6ee0_0;

unsigned int * SetTransparency__7CSpriteiiiiii(st_4b6ee0_0 **a0, unsigned int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
    st_4b6ee0_0 *v1;  // eax
    int v0;  // [bp-0x8]

    *a0->field_148 = a1;
    v0 = a2;
    *a0->field_150 = (float)v0;
    v0 = a3;
    *a0->field_154 = (float)v0;
    *a0->field_158 = (float)a4;
    *a0->field_14c = (float)a5;
    v1 = *a0;
    v1->field_15c = a6;
    return v1;
}

