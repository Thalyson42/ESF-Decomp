// TaskThink__14CRecoverHPTask @0x184390 size=240
typedef struct st_584390_0 {
    char padding_0[136];
    unsigned int field_88;
} st_584390_0;

typedef struct st_584390_4 {
    char padding_0[4];
    unsigned int field_4;
    struct st_584390_1 *field_8;
    struct st_584390_3 *field_c;
} st_584390_4;

typedef struct st_584390_1 {
    struct st_584390_2 *field_0;
    char padding_4[2404];
    struct st_584390_0 *field_968;
} st_584390_1;

typedef struct st_584390_3 {
    char padding_0[512];
    char field_200;
} st_584390_3;

typedef struct st_584390_2 {
    char padding_0[352];
    float field_160;
    char padding_164[252];
    float field_260;
} st_584390_2;

int TaskThink__14CRecoverHPTask(st_584390_4 *a0)
{
    int v3;  // eax
    st_584390_1 *v4;  // edx
    int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a0->field_8->field_0->field_260;
    if (v0 > 199 || (v2 = __fnstcw(), v1 = v2 | 0xc00, v0 = (int)a0->field_8->field_0->field_160, v3 = v0, v3 <= 20))
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)a0->field_8->field_0->field_260;
        v3 = v0;
        if (v3 > 24)
        {
            v4 = a0->field_8;
            if (v4->field_968 && v4->field_968->field_88 != 29)
                sub_48ce10(v4, "weapon_regeneration");
            a0->field_c->field_200 = a0->field_c->field_200 | 1;
            return sub_48d0d0(a0->field_8);
        }
    }
    a0->field_4 = 2;
    return v3;
}

