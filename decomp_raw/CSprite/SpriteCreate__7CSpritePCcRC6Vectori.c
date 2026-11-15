// SpriteCreate__7CSpritePCcRC6Vectori @0xb39d0 size=128
typedef struct st_4b39d0_0 {
    unsigned int field_0;
    char padding_4[260];
    unsigned int field_108;
    unsigned int field_10c;
} st_4b39d0_0;

typedef struct st_4b39d0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4b39d0_1;

extern st_4b39d0_1 *gpGlobals;

st_4b39d0_0 ** SpriteCreate__7CSpritePCcRC6Vectori(int a0, int a1, unsigned int a2)
{
    st_4b39d0_0 **v0;  // edi

    v0 = sub_48ad30(0);
    sub_48d860(v0, a0, a1);
    *v0->field_0 = -1 * gpGlobals->field_98 + 5888216;
    *v0->field_10c = 0;
    *v0->field_108 = 8;
    if (a2)
        sub_487b90(v0);
    return v0;
}

