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

    if (a0 && !(char)sub_48b960(a0) && a0->field_80)
    {
        v1 = 0;
        sub_48d0e0(&v2, 0, 79);
        sub_48e110(&v1, a0->field_80 + gpGlobals->field_98);
        v0 = 0;
        if (!sub_488af0(&v1, "blueattack") || !sub_488af0(&v1, "burningattack") || !sub_488af0(&v1, "greenattack") || !sub_488af0(&v1, "purpleattack") || !sub_488af0(&v1, "yellowattack") || !sub_488af0(&v1, "kamehameha") || !sub_488af0(&v1, "gallitgun") || !sub_488af0(&v1, "masenko") || !sub_488af0(&v1, "powerbeam") || !sub_488af0(&v1, "mouthblast") || !sub_488af0(&v1, "finalflash"))
            v0 = 1;
        return v0;
    }
    return 0;
}

