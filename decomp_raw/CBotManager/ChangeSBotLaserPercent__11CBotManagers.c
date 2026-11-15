// ChangeSBotLaserPercent__11CBotManagers @0x13ea60 size=219
typedef struct st_53ea60_1 {
    char padding_0[20];
    struct st_53ea60_0 *field_14;
} st_53ea60_1;

typedef struct st_53ea60_0 {
    unsigned int field_0;
} st_53ea60_0;

extern st_53ea60_0 *g_engfuncs.pfnRandomLong;
extern char cout;
extern st_53ea60_1 *cout+512;

int ChangeSBotLaserPercent__11CBotManagers(unsigned int a0, short a1)
{
    short v2;  // si
    char v3;  // dl
    short v4;  // si
    char v5;  // dl
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x23]

    v2 = a1;
    if (v2 == -0x1)
        v2 = g_engfuncs.pfnRandomLong(1, 100);
    v3 = 0;
    v4 = v2;
    do
    {
        v5 = v3;
        *(short *)(v5 * 16 + a0 + 4304) = v4;
        v3 = v5 + 1;
    } while (v5 + 1 <= 2);
    cout+512->field_14(&cout, "Super bot laser percent for EVERY superbot is now: ");
    v0 = 0;
    memset@GLIBC_2.0(&v1, 0, 24);
    sprintf@GLIBC_2.0(&v0, "%d", v4);
    cout+512->field_14(&cout, &v0);
    return cout+512->field_14(&cout, "\n");
}

