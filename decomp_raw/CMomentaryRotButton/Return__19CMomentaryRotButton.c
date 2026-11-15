// Return__19CMomentaryRotButton @0x98650 size=116
char Return__19CMomentaryRotButton(double a0, float a1)
{
    double v2;  // mm7
    double v3;  // mm7
    float v0;  // [bp-0x8]

    CBaseToggle::AxisDelta(*(int *)(*(int *)a1 + 416), *(int *)a1 + 80, *(unsigned int *)&a1 + 272);
    v3 = v2 / *(float *)(*(unsigned int *)&a1 + 0x88);
    v0 = (float)v3;
    CMomentaryRotButton::UpdateAllButtons(a1, (float)v3, 0);
    return CMomentaryRotButton::UpdateTarget(a1, v0);
}

