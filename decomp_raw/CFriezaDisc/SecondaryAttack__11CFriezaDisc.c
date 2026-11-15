// SecondaryAttack__11CFriezaDisc @0xc1400 size=114
typedef struct st_4c1400_1 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
} st_4c1400_1;

typedef struct st_4c1400_2 {
    char padding_0[128];
    struct st_4c1400_0 *field_80;
    char padding_84[336];
    unsigned int field_1d4;
    struct st_4c1400_1 *field_1d8;
} st_4c1400_2;

typedef struct st_4c1400_0 {
    char padding_0[832];
    unsigned int field_340;
} st_4c1400_0;

extern char HomeThink__17CFriezaDiscAttack;

st_4c1400_0 * SecondaryAttack__11CFriezaDisc(st_4c1400_2 *a0)
{
    st_4c1400_1 *v0;  // eax
    st_4c1400_0 *v2;  // eax

    if (a0->field_1d4 != 1)
        return CFriezaDisc::HandleDiscStatus(a0);
    CFriezaDisc::StopControl(a0);
    v0 = a0->field_1d8;
    v0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    v0->field_10 = &HomeThink__17CFriezaDiscAttack;
    a0->field_1d4 = 2;
    v2 = a0->field_80;
    v2->field_340 = 1;
    return v2;
}

