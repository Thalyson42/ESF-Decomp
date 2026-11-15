// SUB_UseTargets__11CBaseEntityP11CBaseEntity8USE_TYPEf @0x1224c0 size=87
typedef struct st_5224c0_0 {
    char padding_0[456];
    unsigned int field_1c8;
} st_5224c0_0;

typedef struct st_5224c0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_5224c0_1;

extern st_5224c0_1 *gpGlobals;

unsigned int SUB_UseTargets__11CBaseEntityP11CBaseEntity8USE_TYPEf(st_5224c0_0 **a0, int a1, int a2, float a3)
{
    unsigned int v0;  // eax

    if (*a0->field_1c8)
        v0 = sub_48c1b0(*a0->field_1c8 + gpGlobals->field_98, a1, a0, a2, a3);
    return v0;
}

