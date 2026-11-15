// RotateThink__5CRock @0x129720 size=230
typedef struct st_529720_1 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    unsigned int field_28;
    char padding_2c[216];
    float field_104;
    char padding_108[144];
    struct st_529720_0 *field_198;
} st_529720_1;

typedef struct st_529720_0 {
    char padding_0[128];
    char field_80;
    char padding_81[15];
    unsigned int field_90;
    char padding_94[360];
    unsigned int field_1fc;
} st_529720_0;

typedef struct st_529720_2 {
    struct st_529720_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[712];
    unsigned int field_2dc;
    unsigned int field_2e0;
} st_529720_2;

typedef struct st_529720_3 {
    float field_0;
} st_529720_3;

extern char NormalThink__12CMagicAttack;
extern st_529720_3 *gpGlobals;

double RotateThink__5CRock(st_529720_2 *a0)
{
    st_529720_1 *v1;  // eax
    float *v2;  // eax
    float v3;  // 128
    double v4;  // mm7
    double v6;  // mm7
    double v0;  // [bp-0x1c]

    v1 = a0->field_0;
    if (v1->field_198)
    {
        v2 = (!v1->field_198 ? NULL : (struct st_529720_0 *)&v1->field_198->field_80);
        if (v2[4] + v2[95] + 5.0 < *(float *)&a0->field_0->field_10)
            a0->field_0->field_28 = 0;
        v3 = *(float *)gpGlobals - *(float *)&a0->field_2e0 + *(float *)&a0->field_2dc;
        v0 = v3 + v3;
        cos(*(unsigned int *)&v0);
        v4 = v0 * 30.0;
        a0->field_0->field_20 = (float)v4;
        sin(*(unsigned int *)&v0, *(unsigned int *)((void*)&v0 + 4));
        a0->field_0->field_24 = (float)(-v4 * 30.0);
    }
    else
    {
        a0->field_c = _INSERT(v1, 0, 0) | 0xffff0000;
        a0->field_10 = &NormalThink__12CMagicAttack;
    }
    v6 = 0.02 + *(float *)gpGlobals;
    a0->field_0->field_104 = (float)v6;
    return v6;
}

