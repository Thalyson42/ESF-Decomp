// PlayerKilled__17CHalfLifeTeamplayP11CBasePlayerP9entvars_sT2 @0x128730 size=71
typedef struct st_528730_0 {
    char padding_0[92];
    unsigned int field_5c;
} st_528730_0;

int PlayerKilled__17CHalfLifeTeamplayP11CBasePlayerP9entvars_sT2(st_528730_0 *a0, int a1, int a2, int a3)
{
    unsigned int v1;  // eax
    int v0;  // [bp-0x38]

    if (a0->field_5c)
        return v1;
    sub_488a60(a0, a1, a2, a3);
    *(unsigned short *)&v0 = 0;
    return sub_48c940(a0, v0);
}

