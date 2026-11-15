// PM_PlayerMove @0x193880 size=1596
typedef struct st_593880_1 {
    unsigned int field_0;
} st_593880_1;

typedef struct st_593880_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[8];
    float field_10;
    char field_14;
    char padding_15[11];
    char field_20;
    char padding_21[11];
    char field_2c;
    char padding_2d[23];
    char field_44;
    char padding_45[23];
    char field_5c;
    char padding_5d[7];
    float field_64;
    char padding_68[52];
    unsigned int field_9c;
    char padding_a0[27];
    char field_bb;
    char padding_bc[20];
    unsigned int field_d0;
    char padding_d4[4];
    unsigned int field_d8;
    unsigned int field_dc;
    unsigned int field_e0;
    unsigned int field_e4;
    char padding_e8[4];
    unsigned int field_ec;
    char padding_f0[268];
    int field_1fc;
    char padding_200[283226];
    char field_4545a;
    char padding_4545b[27];
    char field_45476;
    char padding_45477[21];
    unsigned int field_4548c;
    char padding_45490[41172];
    struct st_593880_1 *field_4f564;
} st_593880_0;

extern st_593880_0 *pmove;
extern unsigned int g_onladder;
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int PM_PlayerMove(unsigned int a0)
{
    int v4;  // edi
    unsigned int v5;  // eax
    int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x8]

    v4 = 0;
    pmove->field_4 = a0;
    PM_CheckParamters(v0, v1, v2);
    pmove->field_4548c = 0;
    v3 = pmove->field_4545a;
    pmove->field_10 = (float)((double)(int)v3 * 0.001);
    PM_ReduceTimers(v0, v1, v2);
    AngleVectors(&pmove->field_44, &pmove->field_14, &pmove->field_20, &pmove->field_2c);
    if (!pmove->field_d8 && pmove->field_1fc <= 0)
    {
        if (pmove->field_dc != 8 && pmove->field_dc)
        {
            v5 = PM_CheckStuck();
            if (v5)
                return v5;
        }
        PM_CatagorizePosition();
        pmove->field_ec = pmove->field_e4;
        if (pmove->field_e0 == 0xffffffff)
            *(float *)&pmove->field_9c = -pmove->field_64;
        g_onladder = 0;
        if (!pmove->field_d0 && !(pmove->field_bb & 1))
        {
            v4 = PM_Ladder();
            if (v4)
                g_onladder = 1;
        }
        PM_UpdateStepSound();
        if (!pmove->field_d0 && !(pmove->field_bb & 1))
        {
            if (v4)
            {
                PM_LadderMove(v4);
            }
            else if (pmove->field_dc != 3 && pmove->field_dc != 8 && pmove->field_dc != 14 && pmove->field_dc != 2 && pmove->field_dc != 15 && pmove->field_dc != 11)
            {
                pmove->field_dc = 3;
            }
        }
        if (pmove->field_e0 != 0xffffffff && pmove->field_45476 & 32)
            VectorScale(&pmove->field_5c, 0.30000001192092896f, &pmove->field_5c);
        if (pmove->field_dc > 15)
            return pmove->field_4f564("Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n", pmove->field_dc, pmove->field_4);
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * pmove->field_dc] - 524380)]));
    }
    PM_SpectatorMove();
    return PM_CatagorizePosition();
}

