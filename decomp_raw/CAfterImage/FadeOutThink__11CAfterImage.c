// FadeOutThink__11CAfterImage @0xef870 size=130
typedef struct st_4ef870_0 {
    float field_0;
} st_4ef870_0;

extern st_4ef870_0 *gpGlobals;

unsigned int * FadeOutThink__11CAfterImage(float a0)
{
    float v0;  // [bp-0x8]

    v0 = (float)((*(float *)gpGlobals - *(float *)(*(unsigned int *)&a0 + 100)) / 1.5);
    if (0.0 < v0 && 1.0 > v0)
    {
        *(float *)(*(int *)a0 + 332) = (float)((1.0 - v0) * 255.0);
        *(float *)(*(int *)a0 + 260) = (float)(0.06 + *(float *)gpGlobals);
        return gpGlobals;
    }
    return sub_48cc00(a0);
}

