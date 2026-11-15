// DisableChargeSprite__11CFinalFlash @0xbd700 size=85
typedef struct st_4bd700_0 {
    char padding_0[348];
    unsigned int field_15c;
} st_4bd700_0;

typedef struct st_4bd700_2 {
    struct st_4bd700_0 *field_0;
} st_4bd700_2;

typedef struct st_4bd700_1 {
    char padding_0[128];
    struct st_4bd700_2 *field_80;
    char padding_84[392];
    int field_20c;
} st_4bd700_1;

st_4bd700_0 * DisableChargeSprite__11CFinalFlash(st_4bd700_1 *a0)
{
    st_4bd700_0 *v0;  // eax

    CSprite::TurnOff(a0->field_20c);
    *(unsigned int *)(*(int *)a0->field_80 + 348) = 0;
    v0 = *(int *)a0->field_80;
    *(float *)&v0->padding_0[332] = 254.0f;
    return v0;
}

