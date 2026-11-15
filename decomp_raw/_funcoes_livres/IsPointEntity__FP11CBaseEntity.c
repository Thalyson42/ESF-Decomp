// IsPointEntity__FP11CBaseEntity @0xb1160 size=174
typedef struct st_4b1160_0 {
    unsigned int field_0;
    char padding_4[176];
    unsigned int field_b4;
} st_4b1160_0;

typedef struct st_4b1160_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4b1160_1;

extern st_4b1160_1 *gpGlobals;

unsigned int IsPointEntity__FP11CBaseEntity(st_4b1160_0 **a0)
{
    if (*a0->field_b4 && sub_488af0(*a0->field_0 + gpGlobals->field_98, "info_target") && sub_488af0(*a0->field_0 + gpGlobals->field_98, "info_landmark") && sub_488af0(*a0->field_0 + gpGlobals->field_98, "path_corner"))
        return 0;
    return 1;
}

