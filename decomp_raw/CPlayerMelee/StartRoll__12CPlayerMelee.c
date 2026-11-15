// StartRoll__12CPlayerMelee @0x101f10 size=118
typedef struct st_501f10_1 {
    struct st_501f10_0 *field_0;
    char padding_4[1872];
    unsigned int field_754;
} st_501f10_1;

typedef struct st_501f10_0 {
    char padding_0[264];
    unsigned int field_108;
} st_501f10_0;

typedef struct st_501f10_2 {
    unsigned int field_0;
    char padding_4[44];
    unsigned int field_30;
    char padding_34[48];
    unsigned int field_64;
    char padding_68[188];
    struct st_501f10_1 *field_124;
} st_501f10_2;

st_501f10_1 * StartRoll__12CPlayerMelee(st_501f10_2 *a0)
{
    st_501f10_1 *v0;  // eax

    a0->field_124->field_0->field_108 = 4;
    *(float *)&a0->field_124->field_0[1].padding_0[20] = 0.30000001192092896f;
    *(float *)&a0->field_124->field_0[1].padding_0[16] = 0.75f;
    v0 = a0->field_124;
    v0->field_754 = 0;
    a0->field_64 = 2;
    a0->field_30 = 0;
    a0->field_0 = 1;
    return v0;
}

