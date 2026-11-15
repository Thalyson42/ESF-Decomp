// PowerStruggleThink__13CGuidedAttack @0xc78f0 size=51
typedef struct st_4c78f0_1 {
    char padding_0[260];
    float field_104;
} st_4c78f0_1;

typedef struct st_4c78f0_0 {
    float field_0;
} st_4c78f0_0;

extern st_4c78f0_0 *gpGlobals;

unsigned int * PowerStruggleThink__13CGuidedAttack(st_4c78f0_1 **a0)
{
    *a0->field_104 = (float)(0.2 + *(float *)gpGlobals);
    return gpGlobals;
}

