// EnableChargeSprite__11CFinalFlash @0xbd760 size=145
typedef struct st_4bd760_0 {
    char padding_0[336];
    float field_150;
    float field_154;
    unsigned int field_158;
    unsigned int field_15c;
} st_4bd760_0;

typedef struct st_4bd760_2 {
    char padding_0[128];
    struct st_4bd760_1 *field_80;
    char padding_84[392];
    int field_20c;
} st_4bd760_2;

typedef struct st_4bd760_1 {
    struct st_4bd760_0 *field_0;
    char padding_4[800];
    unsigned int field_324;
} st_4bd760_1;

int EnableChargeSprite__11CFinalFlash(st_4bd760_2 *a0)
{
    st_4bd760_0 *v3;  // edx
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (a0->field_80->field_324)
        return sub_487b90(a0->field_20c);
    *(float *)&a0->field_80->field_0->padding_0[332] = 25.0f;
    a0->field_80->field_0->field_15c = 19;
    v3 = a0->field_80->field_0;
    v0 = 255.0f;
    v1 = 255.0f;
    v2 = 0;
    v3->field_150 = v0;
    v3->field_154 = v1;
    v3->field_158 = v2;
    return sub_487b90(a0->field_20c);
}

