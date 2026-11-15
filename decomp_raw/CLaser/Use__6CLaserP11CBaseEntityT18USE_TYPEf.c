// Use__6CLaserP11CBaseEntityT18USE_TYPEf @0xb3250 size=102
unsigned int Use__6CLaserP11CBaseEntityT18USE_TYPEf(int a0, unsigned int a1, unsigned int a2, int a3)
{
    int v0;  // edi
    unsigned int v1;  // eax

    v0 = CLaser::IsOn(a0);
    v1 = CBaseEntity::ShouldToggle(a0, a3, v0);
    if (!v1)
        return v1;
    return (!v0 ? CLaser::TurnOn(a0) : CLaser::TurnOff(a0));
}

