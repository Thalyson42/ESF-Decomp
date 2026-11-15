// GetBonePosition__14CBaseAnimatingiR6VectorT2 @0x8e930 size=69
typedef struct st_48e930_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e930_0;

typedef struct st_48e930_1 {
    unsigned int field_0;
} st_48e930_1;

extern st_48e930_1 *g_6168f4;

int GetBonePosition__14CBaseAnimatingiR6VectorT2(st_48e930_0 **a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    return g_6168f4(*a0->field_208, a1, a2, a3, v0, v1, v2);
}

