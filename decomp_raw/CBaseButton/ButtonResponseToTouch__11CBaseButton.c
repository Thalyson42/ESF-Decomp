// ButtonResponseToTouch__11CBaseButton @0x97230 size=93
typedef struct st_497230_1 {
    struct st_497230_0 *field_0;
    char padding_4[124];
    unsigned int field_80;
    char padding_84[128];
    unsigned int field_104;
} st_497230_1;

typedef struct st_497230_0 {
    char padding_0[416];
    char field_1a0;
} st_497230_0;

unsigned int ButtonResponseToTouch__11CBaseButton(st_497230_1 *a0)
{
    if (a0->field_80 - 2 > 1)
    {
        if (a0->field_80)
        {
            return 1;
        }
        else if (a0->field_104 || a0->field_0->field_1a0 & 32)
        {
            if (a0->field_80)
            {
                return 1;
            }
            else if (a0->field_0->field_1a0 & 32 && !a0->field_104)
            {
                return 2;
            }
        }
    }
    return 0;
}

