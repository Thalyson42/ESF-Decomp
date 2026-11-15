// InitCustomGatherDBSpots__11CBotManager @0x16b6a0 size=575
typedef struct st_56b6a0_1 {
    char padding_0[20];
    struct st_56b6a0_2 *field_14;
} st_56b6a0_1;

typedef struct st_56b6a0_2 {
    unsigned int field_0;
} st_56b6a0_2;

typedef struct st_56b6a0_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_56b6a0_0;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_56b6a0_0 *gpGlobals;
extern unsigned int GatherSpotsForTeamGood;
extern char g_625c4c;
extern unsigned int GatherSpotsForTeamEvil;
extern char g_625cec;
extern unsigned int cout;
extern st_56b6a0_1 *g_625f80;

int InitCustomGatherDBSpots__11CBotManager(void)
{
    int i;  // edi
    unsigned int idx;  // edx
    int v12;  // esi
    st_56b6a0_1 *v13;  // edx
    int j;  // edi
    int k;  // edi
    unsigned int v0;  // [bp-0x18c]
    unsigned int v1;  // [bp-0x188]
    char v2;  // [bp-0x164]
    float v3;  // [bp-0x164]
    char v4;  // [bp-0x160]
    char v5;  // [bp-0x124]
    char v6;  // [bp-0x123]
    char v7;  // [bp-0x24]
    char v8;  // [bp-0x23]

    i = 0;
    do
    {
        idx = i * 16;
        *(unsigned int *)((char *)&GatherSpotsForTeamGood + idx) = g_vecZero;
        *(unsigned int *)((char *)&GatherSpotsForTeamGood + idx + 4) = g_616790;
        *(unsigned int *)((char *)&GatherSpotsForTeamGood + idx + 8) = g_616794;
        (&g_625c4c)[idx] = 1;
        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + idx) = g_vecZero;
        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + idx + 4) = g_616790;
        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + idx + 8) = g_616794;
        (&g_625cec)[idx] = 1;
        i += 1;
    } while (i <= 9);
    v7 = 0;
    sub_48d0e0(&v8, 0, 31);
    v5 = 0;
    sub_48d0e0(&v6, 0, 0xff);
    sub_48e110(&v7, gpGlobals->field_c + gpGlobals->field_98);
    sub_48c150(&v7, ".dbg");
    sub_489050(&v5, "dragonball", &v7);
    g_625f80->field_14(&cout, "Reading dragonball info file...");
    v12 = sub_48d440(&v5, "rb");
    if (!v12)
    {
        v13 = g_625f80;
        v1 = " file not found, db spawnpoints will be used as gather spots.\n";
        v0 = &cout;
        return v13->field_14(v0, v1);
    }
    sub_48a160(&v2, 36, 1, v12);
    if (v3 != 1.0f || sub_488af0(gpGlobals->field_c + gpGlobals->field_98, &v4))
        return sub_48c560(v12);
    j = 0;
    do
    {
        sub_48a160(&(&GatherSpotsForTeamGood)[4 * j], 16, 1, v12);
        j += 1;
    } while (j <= 9);
    k = 0;
    do
    {
        sub_48a160(&(&GatherSpotsForTeamEvil)[4 * k], 16, 1, v12);
        k += 1;
    } while (k <= 9);
    sub_48c560(v12);
    return g_625f80->field_14(&cout, " Done\n");
    return sub_48c560(v12);
}

