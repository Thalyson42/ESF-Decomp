// EnableBeamJump__15CControlledBeam @0xa7640 size=60
typedef struct st_4a7640_0 {
    char padding_0[20];
    unsigned int field_14;
    unsigned int field_18;
} st_4a7640_0;

typedef struct st_4a7640_1 {
    char padding_0[200];
    struct st_4a7640_0 *field_c8;
    char padding_cc[312];
    unsigned int field_204;
} st_4a7640_1;

extern char StopTouch__13CGuidedAttackP11CBaseEntity;

unsigned int EnableBeamJump__15CControlledBeam(st_4a7640_1 *a0)
{
    st_4a7640_0 *v0;  // ecx
    unsigned int v1;  // eax

    a0->field_204 = 1;
    v0 = a0->field_c8;
    v1 = _INSERT(a0, 0, 0);
    v0->field_14 = v1 | 0xffff0000;
    v0->field_18 = &StopTouch__13CGuidedAttackP11CBaseEntity;
    return v1 | 0xffff0000;
}

