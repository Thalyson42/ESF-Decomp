// StopSneaking__11CBasePlayer @0xfedd0 size=46
typedef struct st_4fedd0_1 {
    char padding_0[2336];
    float field_920;
} st_4fedd0_1;

typedef struct st_4fedd0_0 {
    float field_0;
} st_4fedd0_0;

extern st_4fedd0_0 *gpGlobals;

unsigned int * StopSneaking__11CBasePlayer(st_4fedd0_1 *a0)
{
    a0->field_920 = (float)(*(float *)gpGlobals + 30.0);
    return gpGlobals;
}

