// StrikeUse__10CLightningP11CBaseEntityT18USE_TYPEf @0xb10c0 size=158
typedef struct st_4b10c0_2 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[152];
    char field_1a0;
} st_4b10c0_2;

typedef struct st_4b10c0_0 {
    char padding_0[260];
    float field_104;
    char padding_108[152];
    char field_1a0;
} st_4b10c0_0;

typedef struct st_4b10c0_1 {
    struct st_4b10c0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[64];
    int field_64;
} st_4b10c0_1;

typedef struct st_4b10c0_3 {
    float field_0;
} st_4b10c0_3;

extern unsigned int StrikeThink__10CLightning;
extern st_4b10c0_3 *gpGlobals;

st_4b10c0_2 * StrikeUse__10CLightningP11CBaseEntityT18USE_TYPEf(st_4b10c0_1 *a0, unsigned int a1, unsigned int a2, int a3)
{
    st_4b10c0_2 *v0;  // eax

    v0 = CBaseEntity::ShouldToggle(a0, a3, a0->field_64);
    if (v0)
    {
        if (a0->field_64)
        {
            a0->field_64 = 0;
            a0->field_c = 0;
            a0->field_10 = 0;
        }
        else
        {
            a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
            a0->field_10 = &StrikeThink__10CLightning;
            a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
        }
        v0 = a0->field_0;
        if (!(v0->field_1a0 & 2))
        {
            a0->field_1c = 0;
            a0->field_20 = 0;
        }
    }
    return v0;
}

