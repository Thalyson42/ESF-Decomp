// RemoveWallJump__11CBasePlayer @0xf6f40 size=109
typedef struct st_4f6f40_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4f6f40_0;

typedef struct st_4f6f40_1 {
    unsigned int field_0;
} st_4f6f40_1;

extern st_4f6f40_1 *g_6168dc;

void RemoveWallJump__11CBasePlayer(st_4f6f40_0 **a0)
{
    unsigned int v1;  // esi

    sub_48b090(g_6168dc(*a0->field_208));
    v1 = a0 + 224;
    sub_48b460(v1, sub_487fb0(v1));
    sub_489f10(a0);
    return;
}

