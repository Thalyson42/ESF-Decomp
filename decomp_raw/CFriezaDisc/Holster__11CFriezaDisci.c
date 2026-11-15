// Holster__11CFriezaDisci @0xc0eb0 size=189
typedef struct st_4c0eb0_4 {
    char padding_0[832];
    unsigned int field_340;
    char padding_344[1040];
    unsigned int field_754;
} st_4c0eb0_4;

typedef struct st_4c0eb0_1 {
    unsigned int field_0;
} st_4c0eb0_1;

typedef struct st_4c0eb0_3 {
    char padding_0[128];
    struct st_4c0eb0_4 *field_80;
    char padding_84[336];
    unsigned int field_1d4;
    struct st_4c0eb0_2 *field_1d8;
} st_4c0eb0_3;

typedef struct st_4c0eb0_0 {
    char padding_0[508];
    struct st_4c0eb0_1 *field_1fc;
} st_4c0eb0_0;

typedef struct st_4c0eb0_2 {
    char padding_0[96];
    struct st_4c0eb0_0 *field_60;
} st_4c0eb0_2;

unsigned int * Holster__11CFriezaDisci(st_4c0eb0_3 *a0, int a1)
{
    unsigned int *v0;  // eax

    if (a0->field_1d4 - 1 <= 1)
        CFriezaDisc::Release(a0);
    if (a0->field_1d4 == 1)
        CFriezaDisc::StopControl(a0);
    if (a0->field_1d4 == 3 || !a0->field_1d4 && a0->field_1d8)
    {
        a0->field_1d8->field_60->field_1fc(a0->field_1d8);
        a0->field_80->field_340 = 0;
        a0->field_80->field_754 = 0x3f800000;
    }
    CChargedAttack::Holster(a0, a1);
    v0 = a0->field_80;
    v0[208] = 0;
    return v0;
}

