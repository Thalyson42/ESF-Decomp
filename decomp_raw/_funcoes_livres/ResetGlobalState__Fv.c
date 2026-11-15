// ResetGlobalState__Fv @0x13a210 size=53
extern unsigned int gInitHUD;
extern int gGlobalState;

unsigned int * ResetGlobalState__Fv(void)
{
    CGlobalState::ClearStates(&gGlobalState);
    gInitHUD = 1;
    return &gInitHUD;
}

