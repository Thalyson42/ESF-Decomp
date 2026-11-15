// Use__11CTestEffectP11CBaseEntityT18USE_TYPEf @0xb5200 size=83
typedef struct st_4b5200_0 {
    char padding_0[260];
    float field_104;
} st_4b5200_0;

typedef struct st_4b5200_1 {
    struct st_4b5200_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[288];
    unsigned int field_134;
} st_4b5200_1;

typedef struct st_4b5200_2 {
    float field_0;
} st_4b5200_2;

extern char TestThink__11CTestEffect;
extern st_4b5200_2 *gpGlobals;

short Use__11CTestEffectP11CBaseEntityT18USE_TYPEf(st_4b5200_1 *a0)
{
    a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a0->field_10 = &TestThink__11CTestEffect;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    *(float *)&a0->field_134 = *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

