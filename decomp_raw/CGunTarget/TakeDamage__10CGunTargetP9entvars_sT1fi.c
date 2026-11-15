// TakeDamage__10CGunTargetP9entvars_sT1fi @0xee300 size=158
typedef struct st_4ee300_1 {
    char padding_0[308];
    struct st_4ee300_2 *field_134;
} st_4ee300_1;

typedef struct st_4ee300_2 {
    unsigned int field_0;
} st_4ee300_2;

typedef struct st_4ee300_0 {
    char padding_0[352];
    float field_160;
    char padding_164[112];
    unsigned int field_1d4;
} st_4ee300_0;

typedef struct st_4ee300_3 {
    struct st_4ee300_0 *field_0;
    char padding_4[92];
    struct st_4ee300_1 *field_60;
} st_4ee300_3;

typedef struct st_4ee300_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4ee300_4;

extern st_4ee300_4 *gpGlobals;

unsigned int TakeDamage__10CGunTargetP9entvars_sT1fi(st_4ee300_3 *a0, unsigned int a1, unsigned int a2, float a3)
{
    st_4ee300_0 *v0;  // edx

    v0 = a0->field_0;
    if (0.0 < v0->field_160)
    {
        v0->field_160 = v0->field_160 - a3;
        if (0.0 >= a0->field_0->field_160)
        {
            a0->field_0->field_160 = 0.0f;
            a0->field_60->field_134(a0);
            if (!a0->field_0->field_1d4)
                return 0;
            FireTargets(a0->field_0->field_1d4 + gpGlobals->field_98, a0, a0, 3, 0);
            return 0;
        }
    }
    return 0;
}

