// AddToCurAnim__12CPlayerMeleebPc @0x1003b0 size=102
typedef struct st_5003b0_0 {
    char padding_0[644];
    int field_284;
    char padding_288[8];
    unsigned int field_290;
} st_5003b0_0;

st_5003b0_0 * AddToCurAnim__12CPlayerMeleebPc(int a0, char a1, int a2)
{
    st_5003b0_0 *v0;  // esi

    v0 = CPlayerMelee::GetCurrentAnim(a0);
    if (!v0)
        return v0;
    if (v0->field_284 > 15)
        return v0;
    strcpy@GLIBC_2.0(&v0->padding_0[32 * v0->field_284], a2);
    v0->field_290 = a1;
    v0->field_284 = v0->field_284 + 1;
    return v0;
}

