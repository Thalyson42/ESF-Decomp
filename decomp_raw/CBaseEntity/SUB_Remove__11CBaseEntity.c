// SUB_Remove__11CBaseEntity @0x1221e0 size=126
typedef struct st_5221e0_0 {
    unsigned int field_0;
} st_5221e0_0;

extern st_5221e0_0 *g_616818;
extern st_5221e0_0 *g_6168b4;

int SUB_Remove__11CBaseEntity(float a0)
{
    sub_48b850(a0);
    if (0.0 < *(float *)(*(int *)a0 + 352))
    {
        *(float *)(*(int *)a0 + 352) = 0.0f;
        g_6168b4(2, "SUB_Remove called on entity with health > 0\n");
    }
    return g_616818(*(int *)(*(int *)a0 + 520));
}

