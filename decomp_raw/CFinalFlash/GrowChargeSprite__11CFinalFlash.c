// GrowChargeSprite__11CFinalFlash @0xbd800 size=61
typedef struct st_4bd800_1 {
    char padding_0[324];
    float field_144;
} st_4bd800_1;

typedef struct st_4bd800_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4bd800_0;

typedef struct st_4bd800_3 {
    struct st_4bd800_1 *field_0;
} st_4bd800_3;

typedef struct st_4bd800_2 {
    char padding_0[216];
    int field_d8;
    char padding_dc[304];
    struct st_4bd800_3 *field_20c;
} st_4bd800_2;

st_4bd800_0 * GrowChargeSprite__11CFinalFlash(st_4bd800_2 *a0)
{
    st_4bd800_1 *v0;  // eax

    v0 = *(int *)a0->field_20c;
    v0->field_144 = (float)((double)a0->field_d8 / 42.0 * 0.5);
    return v0;
}

