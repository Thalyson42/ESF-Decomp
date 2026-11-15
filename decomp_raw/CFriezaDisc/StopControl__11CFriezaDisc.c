// StopControl__11CFriezaDisc @0xc1160 size=42
typedef struct st_4c1160_0 {
    char padding_0[128];
    struct st_4c1160_1 *field_80;
} st_4c1160_0;

typedef struct st_4c1160_1 {
    char padding_0[828];
    unsigned int field_33c;
    char padding_340[1044];
    unsigned int field_754;
} st_4c1160_1;

unsigned int * StopControl__11CFriezaDisc(st_4c1160_0 *a0)
{
    unsigned int *v0;  // eax

    a0->field_80->field_33c = 0;
    v0 = a0->field_80;
    v0[469] = 0x3f800000;
    return v0;
}

