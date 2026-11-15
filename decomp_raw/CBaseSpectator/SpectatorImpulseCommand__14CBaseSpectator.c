// SpectatorImpulseCommand__14CBaseSpectator @0x120290 size=328
typedef struct st_520290_1 {
    char padding_0[136];
    char field_88;
    char padding_89[71];
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
} st_520290_1;

typedef struct st_520290_0 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[68];
    unsigned int field_a0;
    char padding_a4[224];
    unsigned int field_184;
} st_520290_0;

typedef struct st_520290_2 {
    unsigned int field_0;
} st_520290_2;

extern st_520290_1 *pGoal.651;
extern st_520290_2 *g_engfuncs.pfnFindEntityByString;
extern st_520290_2 *g_engfuncs.pfnAlertMessage;
extern st_520290_2 *g_engfuncs.pfnEntOffsetOfPEntity;

unsigned int * SpectatorImpulseCommand__14CBaseSpectator(st_520290_0 **a0)
{
    st_520290_1 *v2;  // esi
    unsigned int i;  // edi
    unsigned int *v4;  // ecx
    unsigned int *v5;  // eax
    unsigned int v0;  // [bp-0xc]
    st_520290_1 *v1;  // [bp-0x8]

    if (*a0->field_184 == 1)
    {
        v1 = pGoal.651;
        v2 = pGoal.651;
        v0 = 0;
        do
        {
            v2 = g_engfuncs.pfnFindEntityByString(v2, "classname", "info_player_deathmatch");
            if (v2 == v1)
            {
                g_engfuncs.pfnAlertMessage(1, "Could not find a spawn spot.\n");
                goto LABEL_52032a;
            }
            i = 0;
            if (!v2 || !g_engfuncs.pfnEntOffsetOfPEntity(v2))
                i = 1;
        } while (i);
        v0 = 1;
LABEL_52032a:
        if (v0)
        {
            pGoal.651 = v2;
            UTIL_SetOrigin(*a0, &v2->field_88);
            v4 = *a0;
            v4[20] = pGoal.651->field_d0;
            v4[21] = pGoal.651->field_d4;
            v4[22] = pGoal.651->field_d8;
            *a0->field_a0 = 0;
        }
    }
    else
    {
        g_engfuncs.pfnAlertMessage(1, "Unknown spectator impulse\n");
    }
    v5 = *a0;
    v5[97] = 0;
    return v5;
}

