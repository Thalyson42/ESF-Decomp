// GiveNamedItem__11CBasePlayerPCc @0xfc1b0 size=223
typedef struct st_4fc1b0_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    int field_208;
} st_4fc1b0_3;

typedef struct st_4fc1b0_2 {
    char padding_0[128];
    char field_80;
    char padding_81[7];
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[399];
    char field_223;
} st_4fc1b0_2;

typedef struct st_4fc1b0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4fc1b0_0;

typedef struct st_4fc1b0_1 {
    unsigned int field_0;
} st_4fc1b0_1;

extern st_4fc1b0_1 *g_61681c;
extern st_4fc1b0_1 *g_6168b4;
extern st_4fc1b0_1 *g_6168d8;
extern st_4fc1b0_0 *gpGlobals;

int GiveNamedItem__11CBasePlayerPCc(st_4fc1b0_3 **a0, unsigned int a1)
{
    st_4fc1b0_2 *v1;  // esi
    unsigned int *v2;  // ecx
    st_4fc1b0_3 *v3;  // edx
    unsigned int v0;  // [bp-0x8]

    v1 = g_61681c(a1 - gpGlobals->field_98);
    v0 = 0;
    if (!v1 || !g_6168d8(v1))
        v0 = 1;
    if (!v0)
    {
        v2 = (!v1 ? NULL : (struct st_4fc1b0_2 *)&v1->field_80);
        v3 = *a0;
        v2[2] = v3->field_8;
        v2[3] = v3->field_c;
        v2[4] = v3->field_10;
        v1->field_223 = v1->field_223 | 64;
        sub_488ec0(v1);
        return sub_4899f0(v1, *a0->field_208);
    }
    return g_6168b4(1, "NULL Ent in GiveNamedItem!\n");
}

