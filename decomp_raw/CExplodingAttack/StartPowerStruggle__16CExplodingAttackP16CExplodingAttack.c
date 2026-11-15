// StartPowerStruggle__16CExplodingAttackP16CExplodingAttack @0xbb750 size=112
typedef struct st_4bb750_1 {
    char padding_0[260];
    unsigned int field_104;
} st_4bb750_1;

typedef struct st_4bb750_0 {
    char padding_0[684];
    unsigned int field_2ac;
    char padding_2b0[16];
    int field_2c0;
} st_4bb750_0;

typedef struct st_4bb750_2 {
    float field_0;
} st_4bb750_2;

extern st_4bb750_2 *gpGlobals;

unsigned int * StartPowerStruggle__16CExplodingAttackP16CExplodingAttack(st_4bb750_1 **a0, st_4bb750_0 *a1)
{
    int v0;  // esi
    unsigned int *v1;  // eax

    if (!a1->field_2ac)
    {
        CPowerStruggle::CreatePowerStruggle(a0, a1);
    }
    else
    {
        v0 = a1->field_2c0;
        if (v0)
        {
            v1 = CPowerStruggle::IsFull(v0);
            if (v1)
                return v1;
            CPowerStruggle::AddAttack(v0, a0);
        }
    }
    *(float *)&*a0->field_104 = *(float *)gpGlobals;
    return gpGlobals;
}

