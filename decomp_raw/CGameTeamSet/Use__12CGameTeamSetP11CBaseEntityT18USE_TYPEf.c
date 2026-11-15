// Use__12CGameTeamSetP11CBaseEntityT18USE_TYPEf @0xd03a0 size=113
typedef struct st_4d03a0_0 {
    char padding_0[416];
    char field_1a0;
} st_4d03a0_0;

st_4d03a0_0 * Use__12CGameTeamSetP11CBaseEntityT18USE_TYPEf(st_4d03a0_0 **a0, int a1)
{
    st_4d03a0_0 *v1;  // eax
    float v0;  // [bp-0x20], Other Possible Types: unsigned int

    v1 = sub_48aa30(a0, a1);
    if (!v1)
        return v1;
    if (*a0->field_1a0 & 2)
        v0 = -1.0f;
    else
        v0 = 0;
    sub_48df80(a0, a1, 2);
    if (!(*a0->field_1a0 & 1))
        return *a0;
    return sub_48cc00(a0);
}

