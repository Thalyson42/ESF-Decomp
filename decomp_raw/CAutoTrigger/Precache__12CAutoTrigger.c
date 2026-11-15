// Precache__12CAutoTrigger @0x12acd0 size=51
typedef struct st_52acd0_1 {
    char padding_0[260];
    float field_104;
} st_52acd0_1;

typedef struct st_52acd0_0 {
    float field_0;
} st_52acd0_0;

extern st_52acd0_0 *gpGlobals;

unsigned int * Precache__12CAutoTrigger(st_52acd0_1 **a0)
{
    *a0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return gpGlobals;
}

