// PowerStruggleThink__16CExplodingAttack @0xbc400 size=51
typedef struct st_4bc400_1 {
    char padding_0[260];
    float field_104;
} st_4bc400_1;

typedef struct st_4bc400_0 {
    float field_0;
} st_4bc400_0;

extern st_4bc400_0 *gpGlobals;

unsigned int * PowerStruggleThink__16CExplodingAttack(st_4bc400_1 **a0)
{
    *a0->field_104 = (float)(0.5 + *(float *)gpGlobals);
    return gpGlobals;
}

