// GetDamage__12CPlayerMelee @0x104860 size=151
typedef struct st_504860_1 {
    char padding_0[380];
    struct st_504860_0 *field_17c;
} st_504860_1;

typedef struct st_504860_0 {
    char padding_0[32];
    char field_20;
    char field_21;
    char padding_22[46];
    int field_50;
} st_504860_0;

double GetDamage__12CPlayerMelee(st_504860_1 *a0)
{
    int v0;  // eax
    int v1;  // eax

    if (a0->field_17c->field_20 & 1)
    {
        v0 = a0->field_17c->field_50;
        if (v0 == 1)
            return 5.0;
        if (v0 <= 1)
        {
            if (!v0)
                return 3.0;
        }
        else
        {
            if (v0 == 2)
                return 7.0;
        }
    }
    else if (a0->field_17c->field_21 & 8)
    {
        v1 = a0->field_17c->field_50;
        if (v1 == 1)
        {
            return 6.0;
        }
        else if (v1 <= 1)
        {
            if (!v1)
                return 4.0;
        }
        else
        {
            if (v1 == 2)
                return 8.0;
        }
    }
    return 0.0;
}

