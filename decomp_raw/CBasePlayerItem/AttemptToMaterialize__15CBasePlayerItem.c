// AttemptToMaterialize__15CBasePlayerItem @0x138130 size=107
typedef struct st_538130_1 {
    unsigned int field_0;
} st_538130_1;

typedef struct st_538130_0 {
    char padding_0[132];
    struct st_538130_1 *field_84;
} st_538130_0;

typedef struct st_538130_3 {
    float field_0;
} st_538130_3;

typedef struct st_538130_2 {
    char padding_0[68];
    struct st_538130_0 *field_44;
} st_538130_2;

extern st_538130_2 *g_pGameRules;
extern st_538130_3 *gpGlobals;

unsigned int * AttemptToMaterialize__15CBasePlayerItem(double a0, float a1)
{
    g_pGameRules->field_44->field_84(g_pGameRules, a1);
    if (a0 != 0.0)
    {
        *(float *)(*(int *)a1 + 260) = (float)(a0 + *(float *)gpGlobals);
        return gpGlobals;
    }
    return CBasePlayerItem::Materialize(a1);
}

