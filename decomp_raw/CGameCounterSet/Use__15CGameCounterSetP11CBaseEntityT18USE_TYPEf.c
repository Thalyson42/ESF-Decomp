// Use__15CGameCounterSetP11CBaseEntityT18USE_TYPEf @0xd0ae0 size=100
typedef struct st_4d0ae0_0 {
    char padding_0[356];
    float field_164;
    char padding_168[56];
    char field_1a0;
} st_4d0ae0_0;

typedef struct st_4d0ae0_1 {
    char padding_0[356];
    unsigned int field_164;
    char padding_168[56];
    char field_1a0;
} st_4d0ae0_1;

st_4d0ae0_1 * Use__15CGameCounterSetP11CBaseEntityT18USE_TYPEf(st_4d0ae0_0 **a0, int a1)
{
    st_4d0ae0_1 *v0;  // eax

    v0 = sub_48aa30(a0, a1);
    if (!v0)
        return v0;
    sub_48df80(a0, a1, 2, *a0->field_164);
    if (!(*a0->field_1a0 & 1))
        return *a0;
    return sub_48cc00(a0);
}

