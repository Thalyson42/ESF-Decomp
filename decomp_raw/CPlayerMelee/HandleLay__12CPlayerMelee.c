// HandleLay__12CPlayerMelee @0x1028d0 size=63
typedef struct st_5028d0_0 {
    char padding_0[24];
    float field_18;
} st_5028d0_0;

typedef struct st_5028d0_1 {
    float field_0;
} st_5028d0_1;

extern st_5028d0_1 *gpGlobals;

unsigned int HandleLay__12CPlayerMelee(st_5028d0_0 *a0)
{
    double v0;  // mm7
    unsigned int v1;  // eax

    v0 = 1.25 + a0->field_18;
    v1 = 0x610000 | (isunordered(v0, *(float *)gpGlobals) ? 0x4500 : v0 == *(float *)gpGlobals ? 0x4000 : v0 < *(float *)gpGlobals ? 0x100 : 0);
    if (v0 < *(float *)gpGlobals)
        a0->field_18 = 0;
    return v1;
}

