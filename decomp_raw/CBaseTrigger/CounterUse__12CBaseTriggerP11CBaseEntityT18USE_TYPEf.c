// CounterUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf @0x12d100 size=358
typedef struct st_52d100_1 {
    struct st_52d100_0 *field_0;
    char padding_4[200];
    int field_cc;
} st_52d100_1;

typedef struct st_52d100_2 {
    unsigned int field_0;
} st_52d100_2;

typedef struct st_52d100_0 {
    char padding_0[416];
    char field_1a0;
} st_52d100_0;

typedef struct st_52d100_3 {
    char padding_0[152];
    unsigned int field_98;
} st_52d100_3;

extern st_52d100_2 *g_6168b4;
extern st_52d100_3 *gpGlobals;

unsigned int CounterUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf(st_52d100_1 *a0, int a1)
{
    unsigned int v1;  // esi
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    st_52d100_2 **v4;  // eax
    int v5;  // eax
    unsigned int v6;  // edx
    unsigned int v0;  // [bp-0x8]

    a0->field_cc = a0->field_cc - 1;
    v1 = a0[1].padding_4;
    v2 = sub_48d960(v1, a1);
    if (a0->field_cc < 0)
        return v2;
    v0 = 0;
    v3 = sub_48d8b0(v1);
    if (v3)
    {
        v4 = sub_489fd0(v1);
        v3 = sub_488af0(*(int *)*v4 + gpGlobals->field_98, "player");
        if (!v3)
        {
            v3 = _INSERT(a0->field_0, 0, a0->field_0->field_1a0 ^ 1);
            v0 = v3 & 1;
        }
    }
    if (!a0->field_cc)
    {
        if (!v0)
            return sub_48b770(a0, sub_488810(a0[1].padding_4));
        g_6168b4(1, "Sequence completed!");
        return sub_48b770(a0, sub_488810(a0[1].padding_4));
    }
    else if (v0)
    {
        v5 = a0->field_cc;
        if (v5 == 2)
        {
            v6 = "Only 2 more to go...";
        }
        else if (v5 <= 2)
        {
            if (v5 != 1)
                goto LABEL_52d203;
            v6 = "Only 1 more to go...";
        }
        else if (v5 == 3)
        {
            v6 = "Only 3 more to go...";
        }
        else
        {
LABEL_52d203:
            v6 = "There are more to go...";
        }
        return g_6168b4(1, v6);
    }
    else
    {
        return v3;
    }
}

