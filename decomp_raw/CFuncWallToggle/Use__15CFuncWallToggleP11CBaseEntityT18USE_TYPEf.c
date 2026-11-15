// Use__15CFuncWallToggleP11CBaseEntityT18USE_TYPEf @0x911e0 size=102
unsigned int Use__15CFuncWallToggleP11CBaseEntityT18USE_TYPEf(int a0, unsigned int a1, unsigned int a2, int a3)
{
    int v0;  // edi
    unsigned int v1;  // eax

    v0 = CFuncWallToggle::IsOn(a0);
    v1 = CBaseEntity::ShouldToggle(a0, a3, v0);
    if (!v1)
        return v1;
    return (!v0 ? CFuncWallToggle::TurnOn(a0) : CFuncWallToggle::TurnOff(a0));
}

