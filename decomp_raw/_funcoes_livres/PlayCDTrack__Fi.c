// PlayCDTrack__Fi @0x12c120 size=169
typedef struct st_52c120_0 {
    char padding_0[244];
    struct st_52c120_1 *field_f4;
} st_52c120_0;

typedef struct st_52c120_1 {
    unsigned int field_0;
} st_52c120_1;

extern st_52c120_0 g_engfuncs;
extern st_52c120_1 *g_616864;
extern st_52c120_1 *g_6168e0;

unsigned int PlayCDTrack__Fi(int a0)
{
    unsigned int v2;  // edi
    st_52c120_0 *v0;  // [bp-0x48]
    char v1;  // [bp-0x44]

    v0 = &g_engfuncs.padding_0[0];
    v2 = g_6168e0(1);
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
        return g_616864(v2, "cd pause\n");
    }
    else
    {
        sub_48d990(&v1, "cd play %3d\n", a0);
        return g_616864(v2, &v1);
    }
}

