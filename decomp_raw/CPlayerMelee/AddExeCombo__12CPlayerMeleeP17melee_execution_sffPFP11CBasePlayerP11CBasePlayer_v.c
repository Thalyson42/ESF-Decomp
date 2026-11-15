// AddExeCombo__12CPlayerMeleeP17melee_execution_sffPFP11CBasePlayerP11CBasePlayer_v @0x104f70 size=85
typedef struct st_504f70_0 {
    char padding_0[40];
    int field_28;
} st_504f70_0;

typedef struct st_504f70_1 {
    float field_0;
} st_504f70_1;

extern st_504f70_1 *gpGlobals;

unsigned int AddExeCombo__12CPlayerMeleeP17melee_execution_sffPFP11CBasePlayerP11CBasePlayer_v(unsigned int a0, st_504f70_0 *a1, float a2, float a3, unsigned int a4)
{
    int v0;  // eax
    unsigned int v1;  // eax

    if (a1 && a1->field_28 <= 31)
    {
        v0 = a1->field_28;
        a1->field_28 = a1->field_28 + 1;
        v1 = v0 * 24;
        *(unsigned int *)&a1[2].padding_0[16 + v1] = 1;
        *(float *)&a1[2].padding_0[8 + v1] = a2;
        *(float *)&a1[2].padding_0[4 + v1] = a3 + *(float *)gpGlobals;
        *(unsigned int *)&a1[2].padding_0[20 + v1] = a4;
    }
    return v1;
}

