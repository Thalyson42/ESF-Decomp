// PrimaryAttack__11CFriezaDisc @0xc1380 size=114
typedef struct st_4c1380_0 {
    char padding_0[356];
    struct st_4c1380_1 *field_164;
    char padding_168[20];
    struct st_4c1380_1 *field_17c;
} st_4c1380_0;

typedef struct st_4c1380_1 {
    unsigned int field_0;
} st_4c1380_1;

typedef struct st_4c1380_2 {
    char padding_0[96];
    struct st_4c1380_0 *field_60;
    char padding_64[368];
    unsigned int field_1d4;
} st_4c1380_2;

int PrimaryAttack__11CFriezaDisc(st_4c1380_2 *a0)
{
    if (!a0->field_1d4)
    {
        return CChargedAttack::PrimaryAttack(a0);
    }
    else if (a0->field_1d4 == 3)
    {
        a0->field_60->field_164(a0);
        return a0->field_60->field_17c(a0);
    }
    else
    {
        return CFriezaDisc::HandleDiscStatus(a0);
    }
}

