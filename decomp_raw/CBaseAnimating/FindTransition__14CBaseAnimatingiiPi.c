// FindTransition__14CBaseAnimatingiiPi @0x8e9d0 size=118
typedef struct st_48e9d0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e9d0_0;

typedef struct st_48e9d0_1 {
    unsigned int field_0;
} st_48e9d0_1;

extern st_48e9d0_1 *g_6168e8;

unsigned int FindTransition__14CBaseAnimatingiiPi(st_48e9d0_0 **a0, int a1, int a2, int a3)
{
    int v1;  // edx
    unsigned int v2;  // eax
    char v0;  // [bp-0x8], Other Possible Types: unsigned int

    v1 = g_6168e8(*a0->field_208);
    if (a3)
        return sub_48b840(v1, a1, a2, a3);
    v2 = sub_48b840(v1, a1, a2, &v0);
    if (v0 == 1)
        return v2;
    return 0xffffffff;
}

