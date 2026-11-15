// SetBoneController__14CBaseAnimatingif @0x8e810 size=78
typedef struct st_48e810_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e810_0;

typedef struct st_48e810_1 {
    unsigned int field_0;
} st_48e810_1;

extern st_48e810_1 *g_6168e8;

int SetBoneController__14CBaseAnimatingif(st_48e810_0 **a0, int a1, int a2)
{
    int v0;  // eax

    v0 = g_6168e8(*a0->field_208);
    return sub_48c2f0(v0, *a0, a1, a2);
}

