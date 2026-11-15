// Spawn__15CAmbientGeneric @0x11a840 size=400
typedef struct st_51a840_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_51a840_0;

typedef struct st_51a840_1 {
    unsigned int field_0;
} st_51a840_1;

extern char RampThink__15CAmbientGeneric;
extern char ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf;
extern char SUB_Remove__11CBaseEntity;
extern st_51a840_1 *g_engfuncs.pfnAlertMessage;
extern st_51a840_0 *gpGlobals;

unsigned int Spawn__15CAmbientGeneric(float idx)
{
    double v3;  // mm7
    char *v4;  // edx
    unsigned int v5;  // ecx
    char *v6;  // edi
    unsigned int *v7;  // eax
    unsigned int *v9;  // eax
    unsigned int *v11;  // eax
    unsigned int v12;  // eax
    float v0;  // [bp-0x3c]
    float v1;  // [bp-0x34]

    if (*(char *)(*(int *)idx + 416) & 1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 100) = 0;
    }
    else
    {
        if (*(char *)(*(int *)idx + 416) & 2)
        {
            v3 = 2.0;
        }
        else if (!(*(char *)(*(int *)idx + 416) & 4) && *(char *)(*(int *)idx + 416) & 8)
        {
            v3 = 0.800000011920929;
        }
        else
        {
            v3 = 1.25;
        }
        *(float *)(*(unsigned int *)&idx + 100) = (float)v3;
    }
    v4 = gpGlobals->field_98 + *(int *)(*(int *)idx + 468);
    if (*(int *)(*(int *)idx + 468))
    {
        v5 = 0xffffffff;
        do
        {
            v6 = v4;
        } while (v5 && (v5 -= 1, v4 = v6 + 1, *v6));
        if (v5 != 0xfffffffe)
        {
            *(unsigned int *)(*(int *)idx + 268) = 0;
            v7 = *(int *)idx;
            v7[66] = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v7, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &RampThink__15CAmbientGeneric;
            v9 = *(int *)idx;
            v9[65] = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v9, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__15CAmbientGenericP11CBaseEntityT18USE_TYPEf;
            *(unsigned int *)(*(unsigned int *)&idx + 0xcc) = 0;
            if (*(char *)(*(int *)idx + 416) & 32)
                *(unsigned int *)(*(unsigned int *)&idx + 208) = 0;
            else
                *(unsigned int *)(*(unsigned int *)&idx + 208) = 1;
            return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
        }
    }
    v11 = *(int *)idx;
    v1 = *(float *)&v11[4];
    v0 = *(float *)&v11[3];
    g_engfuncs.pfnAlertMessage(4, "EMPTY AMBIENT AT: %f, %f, %f\n", (unsigned int)(*(float *)&v11[2] >> 0));
    *(float *)(*(int *)idx + 260) = (float)(0.1 + gpGlobals->field_0);
    v12 = _INSERT(gpGlobals, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v12 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &SUB_Remove__11CBaseEntity;
    return v12 | 0xffff0000;
}

