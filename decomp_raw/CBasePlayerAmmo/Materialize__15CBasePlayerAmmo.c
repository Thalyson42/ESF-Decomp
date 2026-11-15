// Materialize__15CBasePlayerAmmo @0x138ed0 size=71
typedef struct st_538ed0_0 {
    char padding_0[280];
    char field_118;
} st_538ed0_0;

typedef struct st_538ed0_1 {
    struct st_538ed0_0 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_538ed0_1;

extern char DefaultTouch__15CBasePlayerAmmoP11CBaseEntity;

short Materialize__15CBasePlayerAmmo(st_538ed0_1 *a0)
{
    st_538ed0_0 *v0;  // eax
    unsigned int v1;  // eax

    v0 = a0->field_0;
    if ((char)v0->field_118 < 0)
    {
        v0->field_118 = v0->field_118 & 127;
        v0 = a0->field_0;
        v0->field_118 = v0->field_118 | 2;
    }
    v1 = _INSERT(v0, 0, 0);
    a0->field_14 = v1 | 0xffff0000;
    a0->field_18 = &DefaultTouch__15CBasePlayerAmmoP11CBaseEntity;
    return v1;
}

