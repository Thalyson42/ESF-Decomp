// DamageDecal__FP11CBaseEntityi @0x137440 size=76
typedef struct st_537440_1 {
    unsigned int field_0;
} st_537440_1;

typedef struct st_537440_2 {
    char padding_0[96];
    struct st_537440_0 *field_60;
} st_537440_2;

typedef struct st_537440_0 {
    char padding_0[116];
    struct st_537440_1 *field_74;
} st_537440_0;

extern st_537440_1 *g_engfuncs.pfnRandomLong;

int DamageDecal__FP11CBaseEntityi(st_537440_2 *a0, unsigned int v0)
{
    st_537440_2 *v1;  // ecx
    unsigned int *v2;  // eax

    v1 = a0;
    if (v1)
    {
        v2 = v1->field_60->field_74;
    }
    else
    {
        v0 = 4;
        v1 = NULL;
        v2 = g_engfuncs.pfnRandomLong;
    }
    return v2(v1, v0);
}

