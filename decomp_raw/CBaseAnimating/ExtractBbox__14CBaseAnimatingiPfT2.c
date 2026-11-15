// ExtractBbox__14CBaseAnimatingiPfT2 @0x8eb00 size=79
typedef struct st_48eb00_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48eb00_0;

typedef struct st_48eb00_1 {
    unsigned int field_0;
} st_48eb00_1;

extern st_48eb00_1 *g_engfuncs.pfnGetModelPtr;

int ExtractBbox__14CBaseAnimatingiPfT2(st_48eb00_0 **a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]

    v2 = a3;
    v1 = a2;
    v0 = a1;
    return ExtractBbox(g_engfuncs.pfnGetModelPtr(*a0->field_208));
}

