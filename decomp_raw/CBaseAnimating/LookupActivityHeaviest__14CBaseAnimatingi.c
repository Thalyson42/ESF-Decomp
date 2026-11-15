// LookupActivityHeaviest__14CBaseAnimatingi @0x8e570 size=78
typedef struct st_48e570_0 {
    char padding_0[520];
    unsigned int field_208;
} st_48e570_0;

typedef struct st_48e570_1 {
    unsigned int field_0;
} st_48e570_1;

extern st_48e570_1 *g_6168e8;

int LookupActivityHeaviest__14CBaseAnimatingi(st_48e570_0 **a0, int a1)
{
    int v0;  // eax

    v0 = g_6168e8(*a0->field_208);
    return sub_48a0c0(v0, *a0, a1);
}

