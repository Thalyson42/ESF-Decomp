// PlayCDTrack__Fi @0x12c120 size=169
typedef struct st_52c120_0 {
    char padding_0[244];
    struct st_52c120_1 *field_f4;
} st_52c120_0;

typedef struct st_52c120_1 {
    unsigned int field_0;
} st_52c120_1;

extern st_52c120_0 g_engfuncs;
extern st_52c120_1 *g_engfuncs.pfnClientCommand;
extern st_52c120_1 *g_engfuncs.pfnPEntityOfEntIndex;

unsigned int PlayCDTrack__Fi(int a0)
{
    unsigned int v2;  // edi
    st_52c120_0 *v0;  // [bp-0x48]
    char v1;  // [bp-0x44]

    v0 = &g_engfuncs.padding_0[0];
    v2 = g_engfuncs.pfnPEntityOfEntIndex(1);
    if (!v2)
    {
        return v2;
    }
    else if ((unsigned int)(a0 + 1) > 31)
    {
        return v0->field_f4(1, "TriggerCDAudio - Track %d out of range\n");
    }
    else if (a0 == -0x1)
    {
        return g_engfuncs.pfnClientCommand(v2, "cd pause\n");
    }
    else
    {
        sprintf@GLIBC_2.0(&v1, "cd play %3d\n", a0);
        return g_engfuncs.pfnClientCommand(v2, &v1);
    }
}

