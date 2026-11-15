// NextExeMove__12CPlayerMelee @0x105370 size=189
typedef struct st_505370_1 {
    char padding_0[324];
    unsigned int field_144;
    char padding_148[52];
    struct st_505370_0 *field_17c;
} st_505370_1;

typedef struct st_505370_0 {
    char padding_0[40];
    int field_28;
    char padding_2c[20];
    unsigned int field_40;
    unsigned int field_44;
} st_505370_0;

unsigned int NextExeMove__12CPlayerMelee(st_505370_1 *a0)
{
    unsigned int v0;  // eax
    st_505370_0 *v1;  // eax
    int v2;  // esi
    unsigned int v3;  // eax

    if (!a0->field_17c)
        return CPlayerMelee::NewExeMovePost(a0);
    if (!a0->field_17c->field_40)
    {
        v0 = CPlayerMelee::EmitDamage(a0);
        if (!a0->field_144)
            return v0;
        goto LABEL_5053ff;
    }
    else if (a0->field_17c)
    {
        v1 = a0->field_17c;
        if (v1->field_44)
        {
            v2 = 0;
            if (NULL < v1->field_28)
            {
                do
                {
                    v3 = CPlayerMelee::EmitComboDamage(a0, &v1->padding_0[24 * v2 + 88]);
                    if (!a0->field_144)
                        return v3;
                } while ((v2 += 1, v1 = a0->field_17c, v2 < a0->field_17c->field_28));
            }
        }
LABEL_5053ff:
        if (a0->field_17c)
            a0->field_17c = CPlayerMelee::GetNextExe(a0);
    }
    return CPlayerMelee::NewExeMovePost(a0);
}

