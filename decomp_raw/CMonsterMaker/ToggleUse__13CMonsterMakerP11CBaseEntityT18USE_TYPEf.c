// ToggleUse__13CMonsterMakerP11CBaseEntityT18USE_TYPEf @0xd3920 size=139
typedef struct st_4d3920_0 {
    char padding_0[260];
    unsigned int field_104;
} st_4d3920_0;

typedef struct st_4d3920_1 {
    struct st_4d3920_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[680];
    int field_2bc;
} st_4d3920_1;

typedef struct st_4d3920_2 {
    float field_0;
} st_4d3920_2;

extern unsigned int MakerThink__13CMonsterMaker;
extern st_4d3920_2 *gpGlobals;

unsigned int * ToggleUse__13CMonsterMakerP11CBaseEntityT18USE_TYPEf(st_4d3920_1 *a0, unsigned int a1, unsigned int a2, int a3)
{
    unsigned int *v0;  // eax

    v0 = sub_48ab90(a0, a3, a0->field_2bc);
    if (!v0)
        return v0;
    if (a0->field_2bc)
    {
        a0->field_2bc = 0;
        a0->field_c = 0;
        a0->field_10 = 0;
    }
    else
    {
        a0->field_2bc = 1;
        a0->field_c = _INSERT(v0, 0, 0) | 0xffff0000;
        a0->field_10 = &MakerThink__13CMonsterMaker;
    }
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    return gpGlobals;
}

