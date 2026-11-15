// WriteFunction__5CSavePCcPCii @0x1359f0 size=118
typedef struct st_5359f0_0 {
    unsigned int field_0;
} st_5359f0_0;

extern st_5359f0_0 *g_engfuncs.pfnAlertMessage;
extern st_5359f0_0 *g_engfuncs.pfnNameForFunction;

int WriteFunction__5CSavePCcPCii(int a0, int a1, unsigned int *a2)
{
    char *v1;  // eax
    int v2;  // ecx
    char *v3;  // edi
    char *v0;  // [bp-0x20]

    v1 = g_engfuncs.pfnNameForFunction(*a2);
    if (!v1)
        return g_engfuncs.pfnAlertMessage(4, "Invalid function pointer in entity!");
    v0 = v1;
    v2 = -0x1;
    do
    {
        v3 = v1;
    } while (v2 && (v2 -= 1, v1 = v3 + 1, *v3));
    return CSave::BufferField(a0, a1, ~v2);
}

