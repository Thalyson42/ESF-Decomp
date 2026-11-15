// Deploy__11CSpiritBomb @0x120cc0 size=103
typedef struct st_520cc0_2 {
    char padding_0[96];
    struct st_520cc0_0 *field_60;
    char padding_64[100];
    unsigned int field_c8;
    unsigned int field_cc;
    unsigned int field_d0;
    char padding_d4[4];
    unsigned int field_d8;
} st_520cc0_2;

typedef struct st_520cc0_0 {
    char padding_0[348];
    struct st_520cc0_1 *field_15c;
} st_520cc0_0;

typedef struct st_520cc0_1 {
    unsigned int field_0;
} st_520cc0_1;

int Deploy__11CSpiritBomb(st_520cc0_2 *a0)
{
    a0->field_cc = 0;
    a0->field_d0 = 0;
    a0->field_d8 = 0;
    a0->field_c8 = 0;
    a0->field_60->field_15c(a0);
    return CBasePlayerWeapon::DefaultDeploy(a0, "spiritbomb");
}

