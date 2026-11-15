// ButtonTouch__11CBaseButtonP11CBaseEntity @0x97290 size=307
typedef struct st_497290_3 {
    struct st_497290_2 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[184];
    char field_d4;
    char padding_d5[43];
    int field_100;
} st_497290_3;

typedef struct st_497290_0 {
    unsigned int field_0;
} st_497290_0;

typedef struct st_497290_2 {
    char padding_0[488];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_497290_2;

typedef struct st_497290_1 {
    char padding_0[152];
    unsigned int field_98;
} st_497290_1;

extern st_497290_1 *gpGlobals;

unsigned int ButtonTouch__11CBaseButtonP11CBaseEntity(st_497290_3 *a0, st_497290_0 **a1)
{
    unsigned int v2;  // eax
    unsigned int v3;  // esi
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]

    v2 = strcmp@GLIBC_2.0(*(int *)*a1 + gpGlobals->field_98, "player");
    if (v2)
        return v2;
    EHANDLE::__as(&a0->field_d4, a1);
    v3 = CBaseButton::ButtonResponseToTouch(a0);
    if (!v3)
    {
        return v3;
    }
    else if (!UTIL_IsMasterTriggered(a0->field_100, a1))
    {
        return PlayLockSounds(a0->field_0, &a0[1].padding_4[8], 1, 1);
    }
    else
    {
        a0->field_14 = 0;
        a0->field_18 = 0;
        if (v3 != 2)
            return CBaseButton::ButtonActivate(a0);
        EMIT_SOUND_DYN(a0->field_0->field_208, 2, a0->field_0->field_1e8 + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
        v1 = 0;
        v0 = 3;
        CBaseDelay::SUB_UseTargets(a0, EHANDLE::__opP11CBaseEntity(&a0->field_d4));
        return CBaseButton::ButtonReturn(a0);
    }
}

