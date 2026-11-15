// IsBeamAttack__FP7edict_s @0x17cc60 size=554
typedef struct st_57cc60_0 {
    char padding_0[128];
    unsigned int field_80;
} st_57cc60_0;

typedef struct st_57cc60_1 {
    char padding_0[152];
    unsigned int field_98;
} st_57cc60_1;

extern st_57cc60_1 *gpGlobals;

char IsBeamAttack__FP7edict_s(st_57cc60_0 *a0)
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
        if (!strcmp@GLIBC_2.0(&v1, "blueattack") || !strcmp@GLIBC_2.0(&v1, "burningattack") || !strcmp@GLIBC_2.0(&v1, "greenattack") || !strcmp@GLIBC_2.0(&v1, "purpleattack") || !strcmp@GLIBC_2.0(&v1, "yellowattack") || !strcmp@GLIBC_2.0(&v1, "kamehameha") || !strcmp@GLIBC_2.0(&v1, "gallitgun") || !strcmp@GLIBC_2.0(&v1, "masenko") || !strcmp@GLIBC_2.0(&v1, "powerbeam") || !strcmp@GLIBC_2.0(&v1, "mouthblast") || !strcmp@GLIBC_2.0(&v1, "finalflash"))
            v0 = 1;
        return v0;
    }
    return 0;
}

