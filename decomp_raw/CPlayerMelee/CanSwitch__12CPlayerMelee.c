// CanSwitch__12CPlayerMelee @0x103410 size=58
typedef struct st_503410_0 {
    char padding_0[196];
    int field_c4;
} st_503410_0;

extern float g_5bd25c;

int CanSwitch__12CPlayerMelee(st_503410_0 *a0)
{
    return (double)a0->field_c4 < g_5bd25c;
}

