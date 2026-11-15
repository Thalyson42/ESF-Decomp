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

    if (a0 && !(char)sub_48b960(a0) && a0->field_80)
    {
        v1 = 0;
        sub_48d0e0(&v2, 0, 79);
        sub_48e110(&v1, a0->field_80 + gpGlobals->field_98);
        v0 = 0;
        if (!sub_488af0(&v1, "bigbang") || !sub_488af0(&v1, "finishingbuster") || !sub_488af0(&v1, "Spirit Bomb") || !sub_488af0(&v1, "Special Beam Cannon") || !sub_488af0(&v1, "Death Ball") || !sub_488af0(&v1, "shieldattack") || !sub_488af0(&v1, "Kame Torpedo") || !sub_488af0(&v1, "Scattering Beam"))
            v0 = 1;
        return v0;
    }
    return 0;
}

