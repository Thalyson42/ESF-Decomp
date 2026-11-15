// DefaultDeploy__17CBasePlayerWeaponPcT1iT1ii @0x138bc0 size=219
typedef struct st_538bc0_4 {
    char padding_0[96];
    struct st_538bc0_0 *field_60;
    char padding_64[28];
    struct st_538bc0_2 *field_80;
    char padding_84[32];
    float field_a4;
} st_538bc0_4;

typedef struct st_538bc0_3 {
    char padding_0[188];
    unsigned int field_bc;
    unsigned int field_c0;
} st_538bc0_3;

typedef struct st_538bc0_0 {
    char padding_0[248];
    struct st_538bc0_1 *field_f8;
    char padding_fc[64];
    struct st_538bc0_1 *field_13c;
} st_538bc0_0;

typedef struct st_538bc0_1 {
    unsigned int field_0;
} st_538bc0_1;

typedef struct st_538bc0_2 {
    struct st_538bc0_3 *field_0;
    char padding_4[608];
    float field_264;
} st_538bc0_2;

typedef struct st_538bc0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_538bc0_5;

extern st_538bc0_5 *gpGlobals;

double DefaultDeploy__17CBasePlayerWeaponPcT1iT1ii(st_538bc0_4 *a0, unsigned int a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5, unsigned int a6)
{
    double v0;  // mm0
    double v1;  // mm1
    double v2;  // mm7

    if (!a0->field_60->field_f8(a0))
        return v2;
    a0->field_80->field_0->field_bc = a1 - gpGlobals->field_98;
    a0->field_80->field_0->field_c0 = a2 - gpGlobals->field_98;
    strcpy@GLIBC_2.0(&a0->field_80[4].padding_4[8], a4);
    a0->field_60->field_13c(a0, a3, a5, a6);
    UTIL_WeaponTimeBase();
    a0->field_80->field_264 = (float)(v0 + 0.5);
    UTIL_WeaponTimeBase();
    a0->field_a4 = (float)(v1 + 1.0);
    return 0.5;
}

