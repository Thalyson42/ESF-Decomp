// Use__20CTriggerChangeTargetP11CBaseEntityT18USE_TYPEf @0x12f210 size=115
typedef struct st_52f210_3 {
    unsigned int field_0;
} st_52f210_3;

typedef struct st_52f210_0 {
    char padding_0[456];
    unsigned int field_1c8;
} st_52f210_0;

typedef struct st_52f210_2 {
    char padding_0[76];
    struct st_52f210_3 *field_4c;
} st_52f210_2;

typedef struct st_52f210_4 {
    struct st_52f210_0 *field_0;
    unsigned int field_4;
    char padding_8[88];
    struct st_52f210_2 *field_60;
} st_52f210_4;

typedef struct st_52f210_1 {
    struct st_52f210_0 *field_0;
    char padding_4[104];
    unsigned int field_6c;
} st_52f210_1;

typedef struct st_52f210_5 {
    char padding_0[152];
    unsigned int field_98;
} st_52f210_5;

extern st_52f210_5 *gpGlobals;

st_52f210_4 * Use__20CTriggerChangeTargetP11CBaseEntityT18USE_TYPEf(st_52f210_1 *a0)
{
    st_52f210_4 *v0;  // ecx
    st_52f210_4 *v1;  // eax

    v0 = sub_48bd10(0, "targetname", a0->field_0->field_1c8 + gpGlobals->field_98);
    if (!v0)
        return v0;
    v0->field_0->field_1c8 = a0->field_6c;
    v1 = v0->field_60->field_4c(v0);
    if (!v1)
        return v1;
    v1->field_4 = 0;
    return v1;
}

