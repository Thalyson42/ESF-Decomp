// TaskThink__12CPowerUpTask @0x1825c0 size=125
typedef struct st_5825c0_0 {
    char padding_0[608];
    float field_260;
} st_5825c0_0;

typedef struct st_5825c0_1 {
    struct st_5825c0_0 *field_0;
    char padding_4[812];
    unsigned int field_330;
} st_5825c0_1;

typedef struct st_5825c0_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5825c0_1 *field_8;
} st_5825c0_2;

st_5825c0_1 * TaskThink__12CPowerUpTask(st_5825c0_2 *a0)
{
    st_5825c0_1 *v3;  // eax
    int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)a0->field_8->field_0->field_260;
    if (v0 > 989)
    {
        a0->field_4 = 2;
        return v0;
    }
    CBot::ResetMoveSpeed(a0->field_8);
    v3 = a0->field_8;
    if (v3->field_330)
        return v3;
    return CBasePlayer::StartPowerUp(v3);
}

