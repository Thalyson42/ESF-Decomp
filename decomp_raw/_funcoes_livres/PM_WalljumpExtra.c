// PM_WalljumpExtra @0x18f1a0 size=51
typedef struct st_58f1a0_0 {
    char padding_0[140];
    float field_8c;
} st_58f1a0_0;

extern st_58f1a0_0 *pmove;

double PM_WalljumpExtra(void)
{
    return (1.0 - pmove->field_8c / 1160.0) * 350.0;
}

