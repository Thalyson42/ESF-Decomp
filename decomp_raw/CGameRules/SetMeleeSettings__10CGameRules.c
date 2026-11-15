// SetMeleeSettings__10CGameRules @0xc4cf0 size=141
typedef struct st_4c4cf0_0 {
    char padding_0[60];
    unsigned int field_3c;
} st_4c4cf0_0;

st_4c4cf0_0 * SetMeleeSettings__10CGameRules(st_4c4cf0_0 *a0)
{
    *(float *)&a0->padding_0[8] = 0.4000000059604645f;
    *(float *)&a0->padding_0[12] = 0.699999988079071f;
    *(float *)&a0->padding_0[16] = 1.100000023841858f;
    *(float *)&a0->padding_0[20] = 1.5f;
    *(float *)&a0->padding_0[24] = 0.8500000238418579f;
    *(float *)&a0->padding_0[28] = 0.30000001192092896f;
    *(float *)&a0->padding_0[32] = 0.5f;
    *(float *)&a0->padding_0[36] = 0.8999999761581421f;
    *(float *)&a0->padding_0[40] = 1.350000023841858f;
    *(float *)&a0->padding_0[44] = 0.75f;
    *(float *)&a0->padding_0[48] = 0.20000000298023224f;
    *(float *)&a0->padding_0[52] = 0.4000000059604645f;
    *(float *)&a0->padding_0[56] = 0.699999988079071f;
    a0->field_3c = 0x3f800000;
    *(float *)&a0[1].padding_0[0] = 0.5f;
    return a0;
}

