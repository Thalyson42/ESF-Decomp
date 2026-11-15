// RandomTargetname__5CBeamPCc @0xb01b0 size=101
typedef struct st_4b01b0_0 {
    unsigned int field_0;
} st_4b01b0_0;

extern st_4b01b0_0 *g_616928;

int RandomTargetname__5CBeamPCc(unsigned int a0, int a1)
{
    unsigned int v1;  // edi
    int v2;  // esi
    int v0;  // [bp-0x8]

    v1 = 0;
    v0 = 0;
    v2 = 0;
    while (1)
    {
        v2 = sub_48cce0(v2, a1);
        if (!v2)
            break;
        v1 += 1;
        if ((int)g_616928(0, v1 - 1) <= 0)
            v0 = v2;
    }
    return v0;
}

