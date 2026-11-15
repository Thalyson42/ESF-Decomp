// SUB_Remove__11CBaseEntity @0x1221e0 size=126
typedef struct st_5221e0_0 {
    unsigned int field_0;
} st_5221e0_0;

extern st_5221e0_0 *g_engfuncs.pfnRemoveEntity;
extern st_5221e0_0 *g_engfuncs.pfnAlertMessage;

int SUB_Remove__11CBaseEntity(float a0)
{
    CBaseEntity::UpdateOnRemove(a0);
    if (0.0 < *(float *)(*(int *)a0 + 352))
    {
        *(float *)(*(int *)a0 + 352) = 0.0f;
        g_engfuncs.pfnAlertMessage(2, "SUB_Remove called on entity with health > 0\n");
    }
    return g_engfuncs.pfnRemoveEntity(*(int *)(*(int *)a0 + 520));
}

