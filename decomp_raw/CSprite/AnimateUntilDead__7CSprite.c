// AnimateUntilDead__7CSprite @0xb3ab0 size=100
typedef struct st_4b3ab0_0 {
    float field_0;
} st_4b3ab0_0;

extern st_4b3ab0_0 *gpGlobals;

unsigned int * AnimateUntilDead__7CSprite(float a0)
{
    if (*(float *)gpGlobals <= *(float *)(*(int *)a0 + 484))
    {
        CSprite::AnimateThink(a0);
        *(float *)(*(int *)a0 + 260) = *(float *)gpGlobals;
        return gpGlobals;
    }
    return UTIL_Remove(a0);
}

