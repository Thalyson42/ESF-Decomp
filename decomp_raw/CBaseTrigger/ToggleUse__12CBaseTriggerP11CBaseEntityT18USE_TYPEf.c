// ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf @0x12ca30 size=98
typedef struct st_52ca30_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_52ca30_0;

typedef struct st_52ca30_1 {
    char padding_0[8];
    float field_8;
} st_52ca30_1;

extern st_52ca30_1 *gpGlobals;

int ToggleUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf(st_52ca30_0 **a0)
{
    if (!*a0->field_10c)
    {
        *a0->field_10c = 1;
        gpGlobals->field_8 = (float)(1.0 + gpGlobals->field_8);
    }
    else
    {
        *a0->field_10c = 0;
    }
    return sub_48db50(*a0, &*a0->padding_0[8]);
}

