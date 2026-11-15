// ScheduleInList__12CBaseMonsterPCcPP10Schedule_ti @0xa9950 size=175
typedef struct st_4a9950_2 {
    char padding_0[16];
    int field_10;
} st_4a9950_2;

typedef struct st_4a9950_0 {
    unsigned int field_0;
} st_4a9950_0;

typedef struct st_4a9950_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4a9950_1;

extern st_4a9950_0 *g_engfuncs.pfnAlertMessage;
extern st_4a9950_1 *gpGlobals;

st_4a9950_2 * ScheduleInList__12CBaseMonsterPCcPP10Schedule_ti(st_4a9950_0 **a0, int a1, st_4a9950_2 **a2, int a3)
{
    int v0;  // esi

    if (!a1)
    {
        g_engfuncs.pfnAlertMessage(1, "%s set to unnamed schedule!\n", *(int *)*a0 + gpGlobals->field_98);
    }
    else
    {
        v0 = 0;
        if (0 < a3)
        {
            do
            {
                if (!a2[v0]->field_10)
                {
                    g_engfuncs.pfnAlertMessage(1, "Unnamed schedule!\n");
                }
                else if (!strcasecmp@GLIBC_2.0(a1, a2[v0]->field_10))
                {
                    return a2[v0];
                }
            } while ((v0 += 1, v0 < a3));
        }
    }
    return NULL;
}

