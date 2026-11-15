// GetAttachment__14CBaseAnimatingiR6VectorT2 @0x8e980 size=69
typedef struct st_48e980_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e980_0;

typedef struct st_48e980_1 {
    unsigned int field_0;
} st_48e980_1;

extern st_48e980_1 *g_616914;

int GetAttachment__14CBaseAnimatingiR6VectorT2(st_48e980_0 **a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    return g_616914(*a0->field_208, a1, a2, a3, v0, v1, v2);
}

