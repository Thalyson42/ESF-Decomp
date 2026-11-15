// AnimateThink__7CSprite @0xb3a50 size=95
typedef struct st_4b3a50_0 {
    float field_0;
} st_4b3a50_0;

extern st_4b3a50_0 *gpGlobals;

unsigned int * AnimateThink__7CSprite(float a0)
{
    sub_48c200(a0, (*(float *)gpGlobals - *(float *)(*(unsigned int *)&a0 + 100)) * *(float *)(*(int *)a0 + 312));
    *(float *)(*(int *)a0 + 260) = (float)(0.1 + *(float *)gpGlobals);
    *(float *)(*(unsigned int *)&a0 + 100) = *(float *)gpGlobals;
    return gpGlobals;
}

