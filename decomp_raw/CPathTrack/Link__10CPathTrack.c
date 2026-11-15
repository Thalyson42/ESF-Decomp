// Link__10CPathTrack @0xe6db0 size=357
typedef struct st_4e6db0_0 {
    char padding_0[456];
    unsigned int field_1c8;
} st_4e6db0_0;

typedef struct st_4e6db0_1 {
    struct st_4e6db0_0 *field_0;
    char padding_4[100];
    unsigned int field_68;
    struct st_4e6db0_0 *field_6c;
    char padding_70[4];
    struct st_4e6db0_0 *field_74;
} st_4e6db0_1;

typedef struct st_4e6db0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4e6db0_2;

typedef struct st_4e6db0_3 {
    unsigned int field_0;
} st_4e6db0_3;

extern st_4e6db0_3 *g_6167f8;
extern st_4e6db0_3 *g_6168b4;
extern st_4e6db0_3 *g_6168d8;
extern st_4e6db0_2 *gpGlobals;

st_4e6db0_0 * Link__10CPathTrack(st_4e6db0_1 *a0)
{
    st_4e6db0_0 *v2;  // eax
    int v3;  // esi
    st_4e6db0_0 *v4;  // eax
    st_4e6db0_0 *v5;  // esi
    st_4e6db0_0 *v6;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v2 = a0->field_0;
    if (v2->field_1c8)
    {
        v3 = g_6167f8(0, "targetname", gpGlobals->field_98 + v2->field_1c8);
        v1 = 0;
        if (!v3 || !g_6168d8(v3))
            v1 = 1;
        if (!v1)
        {
            v2 = sub_48a5e0(v3);
            a0->field_6c = v2;
            if (!v2)
                goto LABEL_4e6e89;
            v2 = sub_48ce40(v2, a0);
        }
        else
        {
            v2 = g_6168b4(1, "Dead end link %s\n", a0->field_0->field_1c8 + gpGlobals->field_98);
        }
    }
LABEL_4e6e89:
    if (!a0->field_68)
        return v2;
    v4 = g_6167f8(0, "targetname", a0->field_68 + gpGlobals->field_98);
    v5 = v4;
    v0 = 0;
    if (!v5 || (v4 = g_6168d8(v5), !v4))
        v0 = 1;
    if (v0)
        return v4;
    v6 = sub_48a5e0(v5);
    a0->field_74 = v6;
    if (!v6)
        return v6;
    return sub_48ce40(v6, a0);
}

