// ExpandThink__7CSprite @0xb3b80 size=154
typedef struct st_4b3b80_0 {
    float field_0;
} st_4b3b80_0;

extern st_4b3b80_0 *gpGlobals;

unsigned int * ExpandThink__7CSprite(float idx)
{
    float v1;  // 128
    unsigned int idx1;  // eax
    unsigned int index;  // eax

    v1 = *(float *)gpGlobals - *(float *)(*(unsigned int *)&idx + 100);
    idx1 = *(int *)idx;
    *(float *)(idx1 + 324) = v1 * *(float *)(idx1 + 504) + *(float *)(idx1 + 324);
    index = *(int *)idx;
    *(float *)(index + 332) = *(float *)(index + 332) - v1 * *(float *)(index + 352);
    if (0.0 < *(float *)(*(int *)idx + 332))
    {
        *(float *)(*(int *)idx + 260) = (float)(0.1 + *(float *)gpGlobals);
        *(float *)(*(unsigned int *)&idx + 100) = *(float *)gpGlobals;
        return gpGlobals;
    }
    *(float *)(*(int *)idx + 332) = 0.0f;
    return UTIL_Remove(idx);
}

