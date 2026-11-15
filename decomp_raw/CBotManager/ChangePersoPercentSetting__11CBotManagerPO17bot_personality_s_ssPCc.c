// ChangePersoPercentSetting__11CBotManagerPO17bot_personality_s_ssPCc @0x13e580 size=312
typedef struct st_53e580_1 {
    char padding_0[20];
    struct st_53e580_0 *field_14;
} st_53e580_1;

typedef struct st_53e580_0 {
    unsigned int field_0;
} st_53e580_0;

extern st_53e580_0 *g_616928;
extern char cout;
extern st_53e580_1 *g_625f80;

int ChangePersoPercentSetting__11CBotManagerPO17bot_personality_s_ssPCc(unsigned int a0, unsigned int a1, short a2, unsigned int a3)
{
    short v2;  // di
    char v3;  // cl
    char v4;  // cl
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x23]

    v2 = a2;
    if (v2 == -0x1)
        v2 = g_616928(0, 100);
    if ((unsigned short)v2 > 100)
        return g_625f80->field_14(&cout, "Wrong value! Should be between -1 and 100\n");
    v3 = 0;
    do
    {
        v4 = v3;
        *(short *)(a1 + a0 + v4 * 60 + 3407) = v2;
        v3 = v4 + 1;
    } while (v4 + 1 <= 8);
    g_625f80->field_14(&cout, "The personality setting ");
    g_625f80->field_14(&cout, a3);
    g_625f80->field_14(&cout, " is now for each personality ");
    v0 = 0;
    sub_48d0e0(&v1, 0, 24);
    sub_48d990(&v0, "%d", v2);
    g_625f80->field_14(&cout, &v0);
    return g_625f80->field_14(&cout, "\n");
}

