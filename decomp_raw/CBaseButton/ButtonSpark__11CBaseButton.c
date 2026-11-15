// ButtonSpark__11CBaseButton @0x970e0 size=129
typedef struct st_4970e0_1 {
    struct st_4970e0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4970e0_1;

typedef struct st_4970e0_0 {
    char padding_0[260];
    float field_104;
} st_4970e0_0;

typedef struct st_4970e0_3 {
    float field_0;
} st_4970e0_3;

typedef struct st_4970e0_2 {
    unsigned int field_0;
} st_4970e0_2;

extern st_4970e0_2 *g_engfuncs.pfnRandomFloat;
extern st_4970e0_3 *gpGlobals;

int ButtonSpark__11CBaseButton(double a0, st_4970e0_1 *a1)
{
    a1->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a1->field_10 = ButtonSpark__11CBaseButton;
    g_engfuncs.pfnRandomFloat(0, 1.5f);
    a1->field_0->field_104 = (float)(a0 + 0.1 + *(float *)gpGlobals);
    return DoSpark(a1->field_0, &a1->field_0->padding_0[220]);
}

