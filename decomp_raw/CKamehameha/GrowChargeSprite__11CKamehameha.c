// GrowChargeSprite__11CKamehameha @0xc9990 size=55
typedef struct st_4c9990_1 {
    char padding_0[324];
    float field_144;
} st_4c9990_1;

typedef struct st_4c9990_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4c9990_0;

typedef struct st_4c9990_3 {
    struct st_4c9990_1 *field_0;
} st_4c9990_3;

typedef struct st_4c9990_2 {
    char padding_0[216];
    int field_d8;
    char padding_dc[304];
    struct st_4c9990_3 *field_20c;
} st_4c9990_2;

st_4c9990_0 * GrowChargeSprite__11CKamehameha(st_4c9990_2 *a0)
{
    st_4c9990_1 *v0;  // eax

    v0 = *(int *)a0->field_20c;
    v0->field_144 = (float)((double)a0->field_d8 * 0.015);
    return v0;
}

