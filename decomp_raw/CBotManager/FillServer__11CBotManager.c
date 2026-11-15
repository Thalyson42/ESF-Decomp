// FillServer__11CBotManager @0x13ebc0 size=47
typedef struct st_53ebc0_0 {
    char padding_0[144];
    char field_90;
} st_53ebc0_0;

extern st_53ebc0_0 *gpGlobals;

char * FillServer__11CBotManager(char *a0)
{
    a0[20] = 1;
    a0[24] = gpGlobals->field_90 - 1;
    return a0;
}

