// ChangeBotBoolSetting__11CBotManagerRbsPCc @0x13e4d0 size=174
typedef struct st_53e4d0_1 {
    unsigned int field_0;
} st_53e4d0_1;

typedef struct st_53e4d0_0 {
    char padding_0[20];
    struct st_53e4d0_1 *field_14;
} st_53e4d0_0;

extern char cout;
extern st_53e4d0_0 *cout+512;

int ChangeBotBoolSetting__11CBotManagerRbsPCc(unsigned int a0, char *a1, unsigned short a2, unsigned int a3)
{
    switch (a2)
    {
    case 1:
        *a1 = 1;
        break;
    case 0:
        *a1 = 0;
        break;
    case 65535:
        *a1 = *a1 != 1;
        break;
    default:
        goto LABEL_53e510;
    }
LABEL_53e510:
    if (!*a1)
    {
        cout+512->field_14(&cout, a3);
        return cout+512->field_14(&cout, " is now DISABLED\n");
    }
    cout+512->field_14(&cout, a3);
    return cout+512->field_14(&cout, " is now ENABLED\n");
}

