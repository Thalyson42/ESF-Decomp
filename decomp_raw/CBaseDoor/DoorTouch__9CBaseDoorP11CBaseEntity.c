// DoorTouch__9CBaseDoorP11CBaseEntity @0xac2f0 size=216
typedef struct st_4ac2f0_3 {
    struct st_4ac2f0_2 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[184];
    char field_d4;
    char padding_d5[43];
    int field_100;
} st_4ac2f0_3;

typedef struct st_4ac2f0_0 {
    unsigned int field_0;
} st_4ac2f0_0;

typedef struct st_4ac2f0_2 {
    char padding_0[460];
    unsigned int field_1cc;
} st_4ac2f0_2;

typedef struct st_4ac2f0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4ac2f0_1;

extern st_4ac2f0_1 *gpGlobals;

unsigned int DoorTouch__9CBaseDoorP11CBaseEntity(st_4ac2f0_3 *a0, st_4ac2f0_0 **a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    v0 = strcmp@GLIBC_2.0(*(int *)*a1 + gpGlobals->field_98, "player");
    if (v0)
        return v0;
    if (a0->field_100 && !UTIL_IsMasterTriggered(a0->field_100, a1))
        PlayLockSounds(a0->field_0, a0[1].padding_4, 1, 0);
    if (a0->field_0->field_1cc)
        return PlayLockSounds(a0->field_0, a0[1].padding_4, 1, 0);
    EHANDLE::__as(&a0->field_d4, a1);
    v1 = CBaseDoor::DoorActivate(a0);
    if (!v1)
        return v1;
    a0->field_14 = 0;
    a0->field_18 = 0;
    return v1;
}

