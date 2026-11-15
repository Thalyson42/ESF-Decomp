// MultiTouch__12CBaseTriggerP11CBaseEntity @0x12ce30 size=142
typedef struct st_52ce30_1 {
    char padding_0[416];
    char field_1a0;
} st_52ce30_1;

typedef struct st_52ce30_0 {
    unsigned int field_0;
    char padding_4[416];
    char field_1a4;
} st_52ce30_0;

typedef struct st_52ce30_2 {
    char padding_0[152];
    unsigned int field_98;
} st_52ce30_2;

extern st_52ce30_2 *gpGlobals;

st_52ce30_1 * MultiTouch__12CBaseTriggerP11CBaseEntity(st_52ce30_1 **a0, st_52ce30_0 **a1)
{
    st_52ce30_0 *v0;  // esi
    st_52ce30_1 *v1;  // eax

    v0 = *a1;
    if ((!(v0->field_1a4 & 8) || *a0->field_1a0 & 2) && (!(v0->field_1a4 & 32) || !(*a0->field_1a0 & 1)))
    {
        if (*a0->field_1a0 & 4)
        {
            v1 = sub_488af0(v0->field_0 + gpGlobals->field_98, "func_pushable");
            if (v1)
                return v1;
        }
        else
        {
            return *a0;
        }
    }
    return sub_48b770(a0, a1);
}

