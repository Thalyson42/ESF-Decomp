// GetAnimTime__14CBaseAnimatingi @0x8e4b0 size=110
typedef struct st_48e4b0_2 {
    char padding_0[164];
    int field_a4;
    unsigned int field_a8;
} st_48e4b0_2;

typedef struct st_48e4b0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e4b0_0;

typedef struct st_48e4b0_3 {
    char padding_0[32];
    float field_20;
    char padding_24[20];
    int field_38;
} st_48e4b0_3;

typedef struct st_48e4b0_1 {
    unsigned int field_0;
} st_48e4b0_1;

extern st_48e4b0_1 *g_6168e8;

double GetAnimTime__14CBaseAnimatingi(st_48e4b0_0 **a0, unsigned int a1)
{
    st_48e4b0_2 *v0;  // eax
    st_48e4b0_2 *v1;  // edx
    unsigned int v2;  // eax
    st_48e4b0_3 *v3;  // edx

    v0 = g_6168e8(*a0->field_208);
    if (v0 && (int)a1 < v0->field_a4)
    {
        v1 = &v0->padding_0[v0->field_a8];
        v2 = a1 * 176;
        v3 = &v1->padding_0[v2];
        if (&v1->padding_0[v2] && v3->field_38 > 1)
            return (double)v3->field_38 / v3->field_20;
    }
    return 0.0;
}

