// DefaultDeploy__17CBasePlayerWeaponPc @0x138b10 size=127
typedef struct st_538b10_3 {
    char padding_0[96];
    struct st_538b10_0 *field_60;
    char padding_64[28];
    struct st_538b10_2 *field_80;
    char padding_84[32];
    float field_a4;
} st_538b10_3;

typedef struct st_538b10_0 {
    char padding_0[248];
    struct st_538b10_1 *field_f8;
} st_538b10_0;

typedef struct st_538b10_1 {
    unsigned int field_0;
} st_538b10_1;

typedef struct st_538b10_2 {
    char padding_0[612];
    float field_264;
} st_538b10_2;

double DefaultDeploy__17CBasePlayerWeaponPc(st_538b10_3 *a0, int a1)
{
    double v1;  // mm0
    double v2;  // mm1
    double v3;  // mm7
    unsigned int v0;  // [bp-0x3c]

    if (!a0->field_60->field_f8(a0))
        return v3;
    v0 = &a0->field_80[4].padding_0[12];
    strcpy@GLIBC_2.0(v0, a1);
    UTIL_WeaponTimeBase(v0, a1);
    a0->field_80->field_264 = (float)(v1 + 0.5);
    UTIL_WeaponTimeBase();
    a0->field_a4 = (float)(v2 + 1.0);
    return 0.5;
}

