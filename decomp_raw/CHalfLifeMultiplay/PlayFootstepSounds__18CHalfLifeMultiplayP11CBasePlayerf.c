// PlayFootstepSounds__18CHalfLifeMultiplayP11CBasePlayerf @0xddb10 size=156
typedef struct st_4ddb10_0 {
    char padding_0[12];
    float field_c;
} st_4ddb10_0;

typedef struct st_4ddb10_1 {
    char padding_0[32];
    float field_20;
    float field_24;
} st_4ddb10_1;

extern st_4ddb10_0 *g_footsteps;

unsigned int PlayFootstepSounds__18CHalfLifeMultiplayP11CBasePlayerf(unsigned int a0, st_4ddb10_1 **a1)
{
    double v1;  // mm7
    double v2;  // mm6
    float v0;  // [bp-0x18]

    if (g_footsteps && g_footsteps->field_c == 0.0f)
        return 0;
    if (!sub_48d140(a1))
    {
        v1 = *a1->field_20 * *a1->field_20 + *a1->field_24 * *a1->field_24;
        v2 = sqrt(v1);
        if (isnan(v2))
            sub_487dc0(*(unsigned int *)&v1);
        else
            v1 = v2;
        v0 = (float)v1;
        if (v0 <= 220.0f)
            return 0;
    }
    return 1;
}

