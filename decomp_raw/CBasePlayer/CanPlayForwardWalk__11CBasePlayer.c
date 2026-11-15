// CanPlayForwardWalk__11CBasePlayer @0xf4470 size=110
typedef struct st_4f4470_0 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_4f4470_0;

typedef struct st_4f4470_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4f4470_1;

extern st_4f4470_1 *gpGlobals;

int CanPlayForwardWalk__11CBasePlayer(st_4f4470_0 **a0)
{
    unsigned int *v0;  // esi
    unsigned int *v1;  // edx

    UTIL_MakeVectors(&(*a0)[2].padding_0[28]);
    v0 = &*a0->field_20;
    v1 = &gpGlobals->field_28;
    return *a0->field_20 * gpGlobals->field_28 + *(float *)&v0[1] * *(float *)&v1[1] + *(float *)&v0[2] * *(float *)&v1[2] > -1.0f;
}

