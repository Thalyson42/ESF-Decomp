// RemoveAllWeapons__11CBasePlayeri @0xf3890 size=435
typedef struct st_4f3890_3 {
    char padding_0[96];
    struct st_4f3890_2 *field_60;
    char padding_64[32];
    unsigned int field_84;
    unsigned int field_88;
} st_4f3890_3;

typedef struct st_4f3890_4 {
    struct st_4f3890_5 *field_0;
    char padding_4[92];
    struct st_4f3890_0 *field_60;
    char padding_64[2268];
    struct st_4f3890_3 *field_940;
    char padding_944[36];
    struct st_4f3890_3 *field_968;
    char padding_96c[4];
    unsigned int field_970;
} st_4f3890_4;

typedef struct st_4f3890_2 {
    char padding_0[260];
    struct st_4f3890_1 *field_104;
    char padding_108[12];
    struct st_4f3890_1 *field_114;
} st_4f3890_2;

typedef struct st_4f3890_1 {
    unsigned int field_0;
} st_4f3890_1;

typedef struct st_4f3890_0 {
    char padding_0[516];
    struct st_4f3890_1 *field_204;
} st_4f3890_0;

typedef struct st_4f3890_5 {
    char padding_0[188];
    unsigned int field_bc;
    unsigned int field_c0;
    char padding_c4[164];
    unsigned int field_168;
    char padding_16c[156];
    unsigned int field_208;
} st_4f3890_5;

extern unsigned int gmsgCurWeapon;
extern unsigned int gmsgWeaponUpdate;
extern st_4f3890_1 *g_engfuncs.pfnMessageBegin;
extern st_4f3890_1 *g_engfuncs.pfnMessageEnd;
extern st_4f3890_1 *g_engfuncs.pfnWriteByte;
extern st_4f3890_1 *g_engfuncs.pfnWriteChar;

int RemoveAllWeapons__11CBasePlayeri(st_4f3890_4 *a0, unsigned int a1)
{
    st_4f3890_3 *v3;  // eax
    st_4f3890_3 *v4;  // eax
    unsigned int i;  // esi
    unsigned int v0;  // [bp-0x3c]
    st_4f3890_3 **v1;  // [bp-0xc]
    int idx;  // [bp-0x8]

    if (a0->field_968)
    {
        a0->field_968->field_60->field_104(a0->field_968, 0);
        a0->field_968 = NULL;
    }
    a0->field_970 = 0;
    idx = 0;
    v1 = &a0->field_940;
    do
    {
        v3 = v1[idx];
        a0->field_968 = v3;
        if (v3)
        {
            do
            {
                g_engfuncs.pfnMessageBegin(1, gmsgWeaponUpdate, 0, a0->field_0->field_208);
                v0 = -a0->field_968->field_88;
                g_engfuncs.pfnWriteChar(v0);
                g_engfuncs.pfnMessageEnd(v0);
                v4 = a0->field_968;
                i = v4->field_84;
                v4->field_60->field_114(v4);
                a0->field_968 = i;
            } while (i);
        }
    } while ((v1[idx] = 0, idx += 1, idx <= 9));
    a0->field_968 = NULL;
    a0->field_0->field_bc = 0;
    a0->field_0->field_c0 = 0;
    if (a1)
        a0->field_0->field_168 = 0;
    a0->field_60->field_204(a0);
    g_engfuncs.pfnMessageBegin(1, gmsgCurWeapon, 0, a0->field_0->field_208);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteByte(0);
    g_engfuncs.pfnWriteByte(0);
    return g_engfuncs.pfnMessageEnd(0);
}

