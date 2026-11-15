// IsNonBeamAttack__FP7edict_s @0x17ce90 size=474
typedef struct st_57ce90_0 {
    char padding_0[128];
    unsigned int field_80;
} st_57ce90_0;

typedef struct st_57ce90_1 {
    char padding_0[152];
    unsigned int field_98;
} st_57ce90_1;

extern st_57ce90_1 *gpGlobals;

char IsNonBeamAttack__FP7edict_s(st_57ce90_0 *a0)
{
    char v0;  // [bp-0x65]
    char v1;  // [bp-0x64]
    char v2;  // [bp-0x63]

    if (a0 && !(char)IsNull(a0) && a0->field_80)
    {
        v1 = 0;
        memset@GLIBC_2.0(&v2, 0, 79);
        strcpy@GLIBC_2.0(&v1, a0->field_80 + gpGlobals->field_98);
        v0 = 0;
        if (!strcmp@GLIBC_2.0(&v1, "bigbang") || !strcmp@GLIBC_2.0(&v1, "finishingbuster") || !strcmp@GLIBC_2.0(&v1, "Spirit Bomb") || !strcmp@GLIBC_2.0(&v1, "Special Beam Cannon") || !strcmp@GLIBC_2.0(&v1, "Death Ball") || !strcmp@GLIBC_2.0(&v1, "shieldattack") || !strcmp@GLIBC_2.0(&v1, "Kame Torpedo") || !strcmp@GLIBC_2.0(&v1, "Scattering Beam"))
            v0 = 1;
        return v0;
    }
    return 0;
}

