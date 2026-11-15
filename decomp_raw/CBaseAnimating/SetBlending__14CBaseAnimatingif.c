// SetBlending__14CBaseAnimatingif @0x8e8e0 size=78
typedef struct st_48e8e0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e8e0_0;

typedef struct st_48e8e0_1 {
    unsigned int field_0;
} st_48e8e0_1;

extern st_48e8e0_1 *g_6168e8;

int SetBlending__14CBaseAnimatingif(st_48e8e0_0 **a0, int a1, int a2)
{
    int v0;  // eax

    v0 = g_6168e8(*a0->field_208);
    return sub_48bb70(v0, *a0, a1, a2);
}

