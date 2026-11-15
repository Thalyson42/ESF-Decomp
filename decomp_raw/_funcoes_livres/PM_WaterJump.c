// PM_WaterJump @0x192420 size=193
typedef struct st_592420_0 {
    char padding_0[92];
    unsigned int field_5c;
    unsigned int field_60;
    char padding_64[4];
    unsigned int field_68;
    unsigned int field_6c;
    char padding_70[73];
    char field_b9;
    char padding_ba[18];
    unsigned int field_cc;
    char padding_d0[20];
    unsigned int field_e4;
    char padding_e8[283506];
    char field_4545a;
} st_592420_0;

typedef struct st_592420_1 {
    char padding_0[92];
    unsigned int field_5c;
    unsigned int field_60;
    char padding_64[4];
    unsigned int field_68;
    unsigned int field_6c;
    char padding_70[73];
    char field_b9;
    char padding_ba[18];
    float field_cc;
    char padding_d0[20];
    unsigned int field_e4;
    char padding_e8[283506];
    char field_4545a;
} st_592420_1;

extern st_592420_1 *pmove;

st_592420_0 * PM_WaterJump(void)
{
    unsigned int v0;  // [bp-0x8]

    if (10000.0 < pmove->field_cc)
        pmove->field_cc = 10000.0f;
    if (pmove->field_cc != 0.0f)
    {
        v0 = pmove->field_4545a;
        pmove->field_cc = (float)(pmove->field_cc - (double)(int)v0);
        if (0.0 > pmove->field_cc || !pmove->field_e4)
        {
            pmove->field_cc = 0;
            pmove->field_b9 = pmove->field_b9 & 247;
        }
        *(float *)&pmove->field_5c = *(float *)&pmove->field_68;
        *(float *)&pmove->field_60 = *(float *)&pmove->field_6c;
    }
    return pmove;
}

