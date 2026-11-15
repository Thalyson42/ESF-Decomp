// Use__11CGibShooterP11CBaseEntityT18USE_TYPEf @0xb43e0 size=62
typedef struct st_4b43e0_1 {
    struct st_4b43e0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4b43e0_1;

typedef struct st_4b43e0_0 {
    char padding_0[260];
    unsigned int field_104;
} st_4b43e0_0;

typedef struct st_4b43e0_2 {
    float field_0;
} st_4b43e0_2;

extern char ShootThink__11CGibShooter;
extern st_4b43e0_2 *gpGlobals;

short Use__11CGibShooterP11CBaseEntityT18USE_TYPEf(st_4b43e0_1 *a0)
{
    a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a0->field_10 = &ShootThink__11CGibShooter;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

