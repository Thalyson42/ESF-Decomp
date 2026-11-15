// GrowChargeSprite__11CSpiritBomb @0x121cb0 size=55
typedef struct st_521cb0_2 {
    char padding_0[196];
    int field_c4;
    char padding_c8[12];
    struct st_521cb0_3 *field_d4;
} st_521cb0_2;

typedef struct st_521cb0_1 {
    char padding_0[324];
    float field_144;
} st_521cb0_1;

typedef struct st_521cb0_0 {
    char padding_0[324];
    unsigned int field_144;
} st_521cb0_0;

typedef struct st_521cb0_3 {
    struct st_521cb0_1 *field_0;
} st_521cb0_3;

st_521cb0_0 * GrowChargeSprite__11CSpiritBomb(st_521cb0_2 *a0)
{
    st_521cb0_1 *v0;  // eax

    v0 = *(int *)a0->field_d4;
    v0->field_144 = (float)((double)a0->field_c4 * 0.0007);
    return v0;
}

