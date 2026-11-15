// Use__10CBreakableP11CBaseEntityT18USE_TYPEf @0xc24b0 size=110
typedef struct st_4c24b0_0 {
    char padding_0[40];
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} st_4c24b0_0;

extern unsigned int g_vecAttackDir;
extern unsigned int g_616784;
extern unsigned int g_616788;
extern st_4c24b0_0 *gpGlobals;

unsigned int Use__10CBreakableP11CBaseEntityT18USE_TYPEf(float a0)
{
    unsigned int v1;  // eax

    v1 = sub_48c7c0(a0);
    if (!v1)
        return v1;
    *(float *)(*(int *)a0 + 84) = *(float *)(*(unsigned int *)&a0 + 120);
    sub_48a800(*(int *)a0 + 80);
    g_vecAttackDir = gpGlobals->field_28;
    g_616784 = gpGlobals->field_2c;
    g_616788 = gpGlobals->field_30;
    return sub_48cb40(a0);
}

