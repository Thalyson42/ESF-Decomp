// GetAnimForCombo__12CPlayerMeleeiPc @0x104f20 size=79
typedef struct st_504f20_0 {
    char padding_0[4];
    unsigned int field_4;
} st_504f20_0;

unsigned int GetAnimForCombo__12CPlayerMeleeiPc(unsigned int a0, unsigned int a1, void* a2)
{
    st_504f20_0 *v0;  // eax
    unsigned int v1;  // eax

    *(char *)a2 = 0;
    if (a1 != 1 && a1 == 2)
        v0 = "combo_2";
    else
        v0 = "combo_1";
    *(unsigned int *)a2 = 1651339107;
    v1 = v0->field_4;
    *(unsigned int *)&a2[4] = v1;
    return v1;
}

