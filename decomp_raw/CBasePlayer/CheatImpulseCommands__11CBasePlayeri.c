// CheatImpulseCommands__11CBasePlayeri @0xfc710 size=2113
extern char _GLOBAL_OFFSET_TABLE_;
extern float g_flWeaponCheat;

unsigned int CheatImpulseCommands__11CBasePlayeri(unsigned int a0, unsigned int a1)
{
    if (g_flWeaponCheat != 0.0f && a1 - 76 <= 127)
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a1] - 1143980)]));
    return a1 - 76;
}

