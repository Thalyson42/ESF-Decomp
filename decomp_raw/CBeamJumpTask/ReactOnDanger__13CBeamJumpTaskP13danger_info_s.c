// ReactOnDanger__13CBeamJumpTaskP13danger_info_s @0x179420 size=143
typedef struct st_579420_2 {
    char padding_0[8];
    struct st_579420_0 *field_8;
    struct st_579420_1 *field_c;
} st_579420_2;

typedef struct st_579420_0 {
    char padding_0[828];
    unsigned int field_33c;
    char padding_340[912];
    int field_6d0;
} st_579420_0;

typedef struct st_579420_3 {
    char padding_0[24];
    short field_18;
} st_579420_3;

typedef struct st_579420_1 {
    char padding_0[392];
    unsigned int field_188;
    char padding_18c[117];
    char field_201;
    char padding_202[138];
    unsigned int field_28c;
} st_579420_1;

char ReactOnDanger__13CBeamJumpTaskP13danger_info_s(st_579420_2 *a0, st_579420_3 *a1)
{
    if ((!a0->field_8->field_33c || a0->field_c->field_188 != 15) && a1->field_18 > 159)
    {
        if (a0->field_8->field_6d0 <= 0)
        {
            a0->field_c->field_201 = a0->field_c->field_201 | 8;
        }
        else if (a0->field_c->field_28c == 7)
        {
            sub_48ce10(a0->field_8, "weapon_sword");
        }
        else
        {
            sub_48ce10(a0->field_8, "weapon_melee");
        }
        return 1;
    }
    return 0;
}

