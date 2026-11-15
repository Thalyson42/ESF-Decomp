// Deploy__14CChargedAttack @0x9eb60 size=63
typedef struct st_49eb60_0 {
    char padding_0[360];
    struct st_49eb60_1 *field_168;
} st_49eb60_0;

typedef struct st_49eb60_1 {
    unsigned int field_0;
} st_49eb60_1;

typedef struct st_49eb60_2 {
    char padding_0[96];
    struct st_49eb60_0 *field_60;
} st_49eb60_2;

int Deploy__14CChargedAttack(st_49eb60_2 *a0)
{
    a0->field_60->field_168(a0);
    return CBasePlayerWeapon::DefaultDeploy(a0, &a0[2].padding_0[12]);
}

