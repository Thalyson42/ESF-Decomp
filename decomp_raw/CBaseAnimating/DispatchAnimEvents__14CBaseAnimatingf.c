// DispatchAnimEvents__14CBaseAnimatingf @0x8e6f0 size=275
typedef struct st_48e6f0_0 {
    unsigned int field_0;
} st_48e6f0_0;

extern st_48e6f0_0 *g_6168b4;
extern st_48e6f0_0 *g_6168e8;

int DispatchAnimEvents__14CBaseAnimatingf(float idx)
{
    unsigned int index;  // eax
    double v6;  // mm6
    int v7;  // edi
    float v0;  // [bp-0x28]
    float v1;  // [bp-0x24]
    int v2;  // [bp-0x20]
    char v3;  // [bp-0x1c]

    v2 = g_6168e8(*(int *)(*(int *)idx + 520));
    if (!v2)
        return g_6168b4(2, "Gibbed monster is thinking!\n");
    index = *(int *)idx;
    v1 = (*(float *)(*(unsigned int *)&idx + 116) - *(float *)(index + 308)) * *(float *)(*(unsigned int *)&idx + 108) * *(float *)(index + 312) + *(float *)(index + 304);
    v6 = 0.10000000149011612 * *(float *)(*(unsigned int *)&idx + 108) * *(float *)(index + 312) + *(float *)(index + 304);
    v0 = (float)v6;
    *(float *)(*(unsigned int *)&idx + 116) = (float)(0.10000000149011612 + *(float *)(index + 308));
    *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
    if (v6 >= 256.0 || 0.0 >= v0)
        *(unsigned int *)(*(unsigned int *)&idx + 120) = 1;
    v7 = 0;
    while (1)
    {
        v7 = sub_48acc0(v2, *(int *)idx, &v3, v1, v0, v7);
        if (!v7)
            break;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 232))(idx, &v3);
    }
    return v7;
}

