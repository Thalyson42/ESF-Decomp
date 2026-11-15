// IsKiBall__FP7edict_s @0x17d070 size=346
typedef struct st_57d070_0 {
    char padding_0[128];
    unsigned int field_80;
} st_57d070_0;

typedef struct st_57d070_1 {
    char padding_0[152];
    unsigned int field_98;
} st_57d070_1;

extern st_57d070_1 *gpGlobals;

char IsKiBall__FP7edict_s(st_57d070_0 *a0)
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
        if (!sub_488af0(&v1, "kiblast") || !sub_488af0(&v1, "scattershot") || !sub_488af0(&v1, "renzoku"))
            v0 = 1;
        return v0;
    }
    return 0;
}

