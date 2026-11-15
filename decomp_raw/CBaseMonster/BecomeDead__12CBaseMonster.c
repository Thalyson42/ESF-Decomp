// BecomeDead__12CBaseMonster @0xa4c30 size=82
typedef struct st_4a4c30_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[84];
    float field_160;
    char padding_164[8];
    unsigned int field_16c;
    char padding_170[64];
    float field_1b0;
} st_4a4c30_0;

unsigned int * BecomeDead__12CBaseMonster(st_4a4c30_0 **a0)
{
    st_4a4c30_0 *v0;  // eax

    *a0->field_16c = 0x3f800000;
    *a0->field_160 = (float)(*a0->field_1b0 * 0.5);
    *a0->field_1b0 = 5.0f;
    v0 = *a0;
    v0->field_108 = 6;
    return v0;
}

