// Use__12CRevertSavedP11CBaseEntityT18USE_TYPEf @0xfe930 size=151
typedef struct st_4fe930_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[68];
    unsigned int field_14c;
    char field_150;
    char padding_151[135];
    unsigned int field_1d8;
    unsigned int field_1dc;
} st_4fe930_0;

typedef struct st_4fe930_1 {
    struct st_4fe930_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[80];
    unsigned int field_64;
} st_4fe930_1;

typedef struct st_4fe930_2 {
    float field_0;
} st_4fe930_2;

extern char MessageThink__12CRevertSaved;
extern st_4fe930_2 *gpGlobals;

unsigned int Use__12CRevertSavedP11CBaseEntityT18USE_TYPEf(st_4fe930_1 *a0)
{
    st_4fe930_0 *v3;  // edx
    unsigned int v4;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v3 = a0->field_0;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)&v3->field_14c;
    UTIL_ScreenFadeAll(&v3->field_150, *(float *)&v3->field_1d8, *(float *)&v3->field_1dc, v0, 1);
    *(float *)&a0->field_0->field_104 = *(float *)&a0->field_64 + *(float *)gpGlobals;
    v4 = _INSERT(gpGlobals, 0, 0);
    a0->field_c = v4 | 0xffff0000;
    a0->field_10 = &MessageThink__12CRevertSaved;
    return v4 | 0xffff0000;
}

