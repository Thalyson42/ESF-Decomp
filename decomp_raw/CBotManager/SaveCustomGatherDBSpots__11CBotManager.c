// SaveCustomGatherDBSpots__11CBotManager @0x16b8e0 size=563
typedef struct st_56b8e0_2 {
    char padding_0[20];
    struct st_56b8e0_0 *field_14;
} st_56b8e0_2;

typedef struct st_56b8e0_0 {
    unsigned int field_0;
} st_56b8e0_0;

typedef struct st_56b8e0_3 {
    char padding_0[512];
    struct st_56b8e0_2 *field_200;
} st_56b8e0_3;

typedef struct st_56b8e0_1 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_56b8e0_1;

extern unsigned int g_teamplay;
extern st_56b8e0_0 *g_engfuncs.pfnCVarGetFloat;
extern st_56b8e0_1 *gpGlobals;
extern char GatherSpotsForTeamGood;
extern char GatherSpotsForTeamEvil;
extern st_56b8e0_3 cout;
extern st_56b8e0_2 *cout+512;

double SaveCustomGatherDBSpots__11CBotManager(void)
{
    double v9;  // mm0
    int v10;  // edi
    double v11;  // mm7
    st_56b8e0_3 *v0;  // [bp-0x16c]
    char iter;  // [bp-0x165]
    unsigned int v2;  // [bp-0x164]
    char v3;  // [bp-0x160]
    char v4;  // [bp-0x124]
    char v5;  // [bp-0x123]
    char v6;  // [bp-0x24]
    char v7;  // [bp-0x23]

    if (!g_teamplay)
        return v11;
    g_engfuncs.pfnCVarGetFloat("mp_gamemode");
    if (v9 != 2.0)
        return 2.0;
    v6 = 0;
    memset@GLIBC_2.0(&v7, 0, 31);
    v4 = 0;
    memset@GLIBC_2.0(&v5, 0, 0xff);
    strcpy@GLIBC_2.0(&v6, gpGlobals->field_c + gpGlobals->field_98);
    strcat@GLIBC_2.0(&v6, ".dbg");
    BuildBotFileName(&v4, "dragonball", &v6);
    v0 = &cout.padding_0[0];
    cout+512->field_14(v0, "Saving dragonball info file...");
    v10 = fopen@GLIBC_2.1(&v4, "wb");
    if (!v10)
    {
        v0->field_200->field_14(v0, " couldn't create file!\n");
        return 2.0;
    }
    v2 = 0x3f800000;
    strcpy@GLIBC_2.0(&v3, gpGlobals->field_c + gpGlobals->field_98);
    fwrite@GLIBC_2.0(&v2, 36, 1, v10);
    iter = 0;
    do
    {
        fwrite@GLIBC_2.0(&(&GatherSpotsForTeamGood)[16 * iter], 16, 1, v10);
        iter += 1;
    } while (iter <= 9);
    iter = 0;
    do
    {
        fwrite@GLIBC_2.0(&(&GatherSpotsForTeamEvil)[16 * iter], 16, 1, v10);
        iter += 1;
    } while (iter <= 9);
    fclose@GLIBC_2.1(v10);
    cout+512->field_14(&cout.padding_0[0], " Done\n");
    return 2.0;
}

