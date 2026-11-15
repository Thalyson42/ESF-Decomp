// ButtonUse__11CBaseButtonP11CBaseEntityT18USE_TYPEf @0x97170 size=183
typedef struct st_497170_1 {
    struct st_497170_0 *field_0;
    char padding_4[124];
    unsigned int field_80;
    char padding_84[80];
    char field_d4;
    char padding_d5[47];
    unsigned int field_104;
} st_497170_1;

typedef struct st_497170_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[71];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_497170_0;

typedef struct st_497170_2 {
    char padding_0[152];
    unsigned int field_98;
} st_497170_2;

extern st_497170_2 *gpGlobals;

unsigned int ButtonUse__11CBaseButtonP11CBaseEntityT18USE_TYPEf(st_497170_1 *a0, int a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    st_497170_0 *v2;  // edx

    v0 = a0->field_80 - 2;
    if (v0 <= 1)
        return v0;
    v1 = sub_48d960(&a0->field_d4, a1);
    if (a0->field_80)
    {
        return sub_48b650(a0);
    }
    else if (!a0->field_104)
    {
        v2 = a0->field_0;
        if (!(v2->field_1a0 & 32))
            return v1;
        sub_489390(v2->field_208, 2, v2->field_1e8 + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
        return sub_48cc60(a0);
    }
    else
    {
        return v1;
    }
}

