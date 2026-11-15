// Use__19CMomentaryRotButtonP11CBaseEntityT18USE_TYPEf @0x98180 size=125
int Use__19CMomentaryRotButtonP11CBaseEntityT18USE_TYPEf(double a0, float a1)
{
    double v1;  // mm7

    CBaseToggle::AxisDelta(*(int *)(*(int *)a1 + 416), *(int *)a1 + 80, *(unsigned int *)&a1 + 272);
    *(float *)(*(int *)a1 + 172) = (float)(v1 / *(float *)(*(unsigned int *)&a1 + 0x88));
    CMomentaryRotButton::UpdateAllButtons(a1, *(float *)(*(int *)a1 + 172), 1);
    return CMomentaryRotButton::UpdateTarget(a1, *(float *)(*(int *)a1 + 172));
}

