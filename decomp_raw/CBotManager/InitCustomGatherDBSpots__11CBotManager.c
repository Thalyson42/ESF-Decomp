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
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_56b6a0_0 *gpGlobals;
extern unsigned int GatherSpotsForTeamGood;
extern char GatherSpotsForTeamGood+12;
extern unsigned int GatherSpotsForTeamEvil;
extern char GatherSpotsForTeamEvil+12;
extern unsigned int cout;
extern st_56b6a0_1 *cout+512;

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
        *(unsigned int *)((char *)&GatherSpotsForTeamGood + idx + 4) = g_vecZero+4;
        *(unsigned int *)((char *)&GatherSpotsForTeamGood + idx + 8) = g_vecZero+8;
        (&GatherSpotsForTeamGood+12)[idx] = 1;
        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + idx) = g_vecZero;
        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + idx + 4) = g_vecZero+4;
        *(unsigned int *)((char *)&GatherSpotsForTeamEvil + idx + 8) = g_vecZero+8;
        (&GatherSpotsForTeamEvil+12)[idx] = 1;
        i += 1;
    } while (i <= 9);
    v7 = 0;
    memset@GLIBC_2.0(&v8, 0, 31);
    v5 = 0;
    memset@GLIBC_2.0(&v6, 0, 0xff);
    strcpy@GLIBC_2.0(&v7, gpGlobals->field_c + gpGlobals->field_98);
    strcat@GLIBC_2.0(&v7, ".dbg");
    BuildBotFileName(&v5, "dragonball", &v7);
    cout+512->field_14(&cout, "Reading dragonball info file...");
    v12 = fopen@GLIBC_2.1(&v5, "rb");
    if (!v12)
    {
        v13 = cout+512;
        v1 = " file not found, db spawnpoints will be used as gather spots.\n";
        v0 = &cout;
        return v13->field_14(v0, v1);
    }
    fread@GLIBC_2.0(&v2, 36, 1, v12);
    if (v3 != 1.0f || strcmp@GLIBC_2.0(gpGlobals->field_c + gpGlobals->field_98, &v4))
        return fclose@GLIBC_2.1(v12);
    j = 0;
    do
    {
        fread@GLIBC_2.0(&(&GatherSpotsForTeamGood)[4 * j], 16, 1, v12);
        j += 1;
    } while (j <= 9);
    k = 0;
    do
    {
        fread@GLIBC_2.0(&(&GatherSpotsForTeamEvil)[4 * k], 16, 1, v12);
        k += 1;
    } while (k <= 9);
    fclose@GLIBC_2.1(v12);
    return cout+512->field_14(&cout, " Done\n");
    return fclose@GLIBC_2.1(v12);
}

