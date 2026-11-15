// SetBodygroup__14CBaseAnimatingii @0x8ea60 size=73
typedef struct st_48ea60_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48ea60_0;

typedef struct st_48ea60_1 {
    unsigned int field_0;
} st_48ea60_1;

extern st_48ea60_1 *g_6168e8;

int SetBodygroup__14CBaseAnimatingii(st_48ea60_0 **a0, unsigned int a1, unsigned int a2)
{
    st_48ea60_0 *v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]

    v2 = a2;
    v1 = a1;
    v0 = *a0;
    return sub_489750(g_6168e8(*a0->field_208));
}

