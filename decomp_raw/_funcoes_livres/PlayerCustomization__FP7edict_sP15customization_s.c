// PlayerCustomization__FP7edict_sP15customization_s @0xa1b50 size=164
typedef struct st_4a1b50_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_4a1b50_0;

typedef struct st_4a1b50_1 {
    unsigned int field_0;
} st_4a1b50_1;

extern st_4a1b50_1 *g_engfuncs.pfnAlertMessage;

int PlayerCustomization__FP7edict_sP15customization_s(st_4a1b50_0 *a0, int *a1)
{
    int v0;  // edx
    unsigned int v1;  // edx
    int v2;  // eax

    v0 = (!a0 ? 0 : a0->field_7c);
    if (!v0)
    {
        v1 = "PlayerCustomization:  Couldn't get player!\n";
    }
    else if (!a1)
    {
        v1 = "PlayerCustomization:  NULL customization!\n";
    }
    else
    {
        v2 = a1[0x11];
        if (v2 < 0)
            return g_engfuncs.pfnAlertMessage(1, "PlayerCustomization:  Unknown customization type!\n");
        if (v2 <= 2)
        {
            return v2;
        }
        else if (v2 == 3)
        {
            return CBasePlayer::SetCustomDecalFrames(v0, a1[37]);
        }
        return g_engfuncs.pfnAlertMessage(1, "PlayerCustomization:  Unknown customization type!\n");
    }
    return g_engfuncs.pfnAlertMessage(1, v1);
}

