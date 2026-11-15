// SetMinBots__11CBotManagers @0x13f660 size=75
typedef struct st_53f660_0 {
    char padding_0[26];
    unsigned short field_1a;
} st_53f660_0;

typedef struct st_53f660_2 {
    unsigned int field_0;
} st_53f660_2;

typedef struct st_53f660_1 {
    char padding_0[20];
    struct st_53f660_2 *field_14;
} st_53f660_1;

extern char cout;
extern st_53f660_1 *g_625f80;

st_53f660_0 * SetMinBots__11CBotManagers(st_53f660_0 *a0, unsigned short a1)
{
    if (a1 + 1 > 32)
        return g_625f80->field_14(&cout, "Invalid min_bots argument, should be between -1 and 31\n");
    a0->field_1a = a1;
    return a0;
}

