// Spawn__5CAura @0x8fb00 size=186
typedef struct st_48fb00_0 {
    unsigned int field_0;
} st_48fb00_0;

extern st_48fb00_0 *g_engfuncs.pfnSetModel;

int Spawn__5CAura(float idx)
{
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    g_engfuncs.pfnSetModel(*(int *)(*(int *)idx + 520), "models/aura.mdl");
    *(unsigned int *)(*(int *)idx + 268) = 0;
    *(unsigned int *)(*(int *)idx + 328) = 5;
    *(float *)(*(int *)idx + 332) = 25.0f;
    *(unsigned int *)(*(int *)idx + 364) = 0;
    memset(*(int *)idx + 296, 0, 12);
    return CBaseAnimating::ResetSequenceInfo(idx);
}

