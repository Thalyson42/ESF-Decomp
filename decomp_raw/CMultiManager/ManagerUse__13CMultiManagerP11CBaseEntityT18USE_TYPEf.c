// ManagerUse__13CMultiManagerP11CBaseEntityT18USE_TYPEf @0x12b740 size=183
typedef struct st_52b740_0 {
    void* field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[176];
    char field_d4;
    char padding_d5[51];
    unsigned int field_108;
    unsigned int field_10c;
} st_52b740_0;

typedef struct st_52b740_1 {
    float field_0;
} st_52b740_1;

extern char ManagerThink__13CMultiManager;
extern st_52b740_1 *gpGlobals;

void* ManagerUse__13CMultiManagerP11CBaseEntityT18USE_TYPEf(st_52b740_0 *a0, int a1, int a2, int a3, float a4)
{
    void* v0;  // eax

    if ((int)a0->field_0[416] >= 0 && (char)a0->field_0[416] & 1)
        return sub_4891c0(sub_48d820(a0), a1, a2, a3, a4);
    sub_48d960(&a0->field_d4, a1);
    a0->field_108 = 0;
    *(float *)&a0->field_10c = *(float *)gpGlobals;
    a0->field_1c = 0;
    a0->field_20 = 0;
    a0->field_c = 0xffff0000;
    a0->field_10 = &ManagerThink__13CMultiManager;
    v0 = a0->field_0;
    *(float *)&v0[260] = *(float *)gpGlobals;
    return v0;
}

