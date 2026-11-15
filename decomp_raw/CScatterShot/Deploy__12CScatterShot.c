// Deploy__12CScatterShot @0x111260 size=55
typedef struct st_511260_0 {
    char padding_0[228];
    unsigned int field_e4;
} st_511260_0;

int Deploy__12CScatterShot(st_511260_0 *a0)
{
    a0->field_e4 = 0;
    return CBasePlayerWeapon::DefaultDeploy(a0, "scattershot");
}

