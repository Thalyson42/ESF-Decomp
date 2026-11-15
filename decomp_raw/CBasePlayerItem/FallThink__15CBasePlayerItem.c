// FallThink__15CBasePlayerItem @0x137fd0 size=219
typedef struct st_537fd0_0 {
    float field_0;
} st_537fd0_0;

typedef struct st_537fd0_1 {
    unsigned int field_0;
} st_537fd0_1;

extern st_537fd0_1 *g_6168d8;
extern st_537fd0_1 *g_616928;
extern st_537fd0_0 *gpGlobals;

int FallThink__15CBasePlayerItem(float a0)
{
    unsigned int *v1;  // eax
    unsigned int v2;  // edi
    int v3;  // eax

    *(float *)(*(int *)a0 + 260) = (float)(0.1 + *(float *)gpGlobals);
    v1 = *(int *)a0;
    if (!(*((char *)&v1[105] + 1) & 2))
        return v1;
    v2 = 0;
    if (!v1[0x66] || !g_6168d8(v1[0x66]))
        v2 = 1;
    if (!v2)
    {
        v3 = g_616928(0, 29);
        sub_489390(*(int *)(*(int *)a0 + 520), 2, "items/weapondrop1.wav", 0x3f800000, 0.800000011920929f, 0, v3 + 95);
    }
    *(unsigned int *)(*(int *)a0 + 80) = 0;
    *(unsigned int *)(*(int *)a0 + 88) = 0;
    return sub_48e040(a0);
}

