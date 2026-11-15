// GrowChargeSprite__10CDeathBall @0xa9410 size=73
typedef struct st_4a9410_1 {
    char padding_0[324];
    float field_144;
} st_4a9410_1;

typedef struct st_4a9410_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4a9410_0;

typedef struct st_4a9410_3 {
    struct st_4a9410_1 *field_0;
} st_4a9410_3;

typedef struct st_4a9410_2 {
    char padding_0[196];
    int field_c4;
    char padding_c8[268];
    struct st_4a9410_3 *field_1d4;
} st_4a9410_2;

st_4a9410_0 * GrowChargeSprite__10CDeathBall(st_4a9410_2 *a0)
{
    st_4a9410_1 *v0;  // eax

    v0 = *(int *)a0->field_1d4;
    v0->field_144 = (float)(((double)a0->field_c4 - 14.0) * 0.4 / (45.0 - 14.0));
    return v0;
}

