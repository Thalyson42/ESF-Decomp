// StartSneaking__11CBasePlayer @0xfeda0 size=42
typedef struct st_4feda0_1 {
    char padding_0[2336];
    float field_920;
} st_4feda0_1;

typedef struct st_4feda0_0 {
    float field_0;
} st_4feda0_0;

extern st_4feda0_0 *gpGlobals;

unsigned int * StartSneaking__11CBasePlayer(st_4feda0_1 *a0)
{
    a0->field_920 = (float)(*(float *)gpGlobals - 1.0);
    return gpGlobals;
}

