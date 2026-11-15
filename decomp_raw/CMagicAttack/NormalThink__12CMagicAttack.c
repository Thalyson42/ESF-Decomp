// NormalThink__12CMagicAttack @0xcec60 size=115
typedef struct st_4cec60_0 {
    float field_0;
} st_4cec60_0;

extern st_4cec60_0 *gpGlobals;

unsigned int * NormalThink__12CMagicAttack(float a0)
{
    if ((*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 156))(a0))
    {
        CMagicAttack::DrawBubbles(a0);
        CMagicAttack::AnimateSprite(a0);
        *(float *)(*(int *)a0 + 260) = (float)(0.4 + *(float *)gpGlobals);
        return gpGlobals;
    }
    return (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 508))(a0);
}

