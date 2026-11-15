// GetEyePosition__FPvPf @0x8f000 size=88
typedef struct st_48f000_0 {
    unsigned int field_0;
} st_48f000_0;

extern st_48f000_0 *g_engfuncs.pfnAlertMessage;

float * GetEyePosition__FPvPf(float *a0, unsigned int *a1)
{
    if (a0)
    {
        *(float *)a1 = a0[19];
        *(float *)&a1[1] = a0[20];
        *(float *)&a1[2] = a0[21];
        return a0;
    }
    return g_engfuncs.pfnAlertMessage(1, "GetEyePosition() Can't get pstudiohdr ptr!\n");
}

