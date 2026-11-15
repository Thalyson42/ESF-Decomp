// AttackIsBeam__4CBotP13weapon_info_s @0x154b70 size=22
typedef struct st_554b70_0 {
    unsigned int field_0;
    char padding_4[67];
    char field_47;
} st_554b70_0;

char AttackIsBeam__4CBotP13weapon_info_s(unsigned int a0, st_554b70_0 *a1)
{
    return (a1->field_0 == 10 ? 0 : a1->field_47);
}

