// PlayerRelationship__17CHalfLifeTeamplayP11CBaseEntityT1 @0x128810 size=189
typedef struct st_528810_0 {
    char padding_0[160];
    struct st_528810_1 *field_a0;
} st_528810_0;

typedef struct st_528810_3 {
    char padding_0[196];
    struct st_528810_1 *field_c4;
} st_528810_3;

typedef struct st_528810_1 {
    unsigned int field_0;
} st_528810_1;

typedef struct st_528810_4 {
    char padding_0[68];
    struct st_528810_3 *field_44;
} st_528810_4;

typedef struct st_528810_2 {
    char padding_0[96];
    struct st_528810_0 *field_60;
} st_528810_2;

unsigned int PlayerRelationship__17CHalfLifeTeamplayP11CBaseEntityT1(st_528810_4 *a0, unsigned int a1, st_528810_2 *a2)
{
    unsigned int v0;  // [bp-0x38]

    if (a1 && a2 && a2->field_60->field_a0(a2) && *(char *)a0->field_44->field_c4(a0, a1) && *(char *)a0->field_44->field_c4(a0, a2))
    {
        v0 = a0->field_44->field_c4(a0, a2);
        if (!sub_48cac0(a0->field_44->field_c4(a0, a1)))
            return 1;
    }
    return 0;
}

