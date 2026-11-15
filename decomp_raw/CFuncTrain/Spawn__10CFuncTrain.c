// Spawn__10CFuncTrain @0xea430 size=333
typedef struct st_4ea430_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4ea430_1;

typedef struct st_4ea430_0 {
    unsigned int field_0;
} st_4ea430_0;

extern st_4ea430_0 *g_engfuncs.pfnSetModel;
extern st_4ea430_0 *g_engfuncs.pfnAlertMessage;
extern st_4ea430_1 *gpGlobals;

char Spawn__10CFuncTrain(float idx)
{
    unsigned int *v1;  // edx

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    if (*(float *)(*(int *)idx + 504) == 0.0f)
        *(float *)(*(int *)idx + 504) = 100.0f;
    if (!*(int *)(*(int *)idx + 456))
        g_engfuncs.pfnAlertMessage(1, "FuncTrain with no target");
    if (*(float *)(*(int *)idx + 480) == 0.0f)
        *(float *)(*(int *)idx + 480) = 2.0f;
    *(unsigned int *)(*(int *)idx + 264) = 7;
    if (*(char *)(*(int *)idx + 416) & 8)
        *(unsigned int *)(*(int *)idx + 268) = 0;
    else
        *(unsigned int *)(*(int *)idx + 268) = 4;
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    v1 = *(int *)idx;
    UTIL_SetSize(v1, v1 + 55, v1 + 58);
    UTIL_SetOrigin(*(int *)idx, *(int *)idx + 8);
    *(unsigned int *)(*(unsigned int *)&idx + 276) = 0;
    if (*(float *)(*(unsigned int *)&idx + 264) == 0.0f)
        *(float *)(*(unsigned int *)&idx + 264) = 0.8500000238418579f;
    return 0;
}

