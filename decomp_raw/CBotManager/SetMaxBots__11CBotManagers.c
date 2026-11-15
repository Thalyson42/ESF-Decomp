// SetMaxBots__11CBotManagers @0x13f6b0 size=75
typedef struct st_53f6b0_0 {
    char padding_0[28];
    unsigned short field_1c;
} st_53f6b0_0;

typedef struct st_53f6b0_2 {
    unsigned int field_0;
} st_53f6b0_2;

typedef struct st_53f6b0_1 {
    char padding_0[20];
    struct st_53f6b0_2 *field_14;
} st_53f6b0_1;

extern char cout;
extern st_53f6b0_1 *g_625f80;

st_53f6b0_0 * SetMaxBots__11CBotManagers(st_53f6b0_0 *a0, unsigned short a1)
{
    if (a1 + 1 > 32)
        return g_625f80->field_14(&cout, "Invalid max_bots argument, should be between -1 and 31\n");
    a0->field_1c = a1;
    return a0;
}

