// Spawn__6CCandy @0x99cb0 size=92
typedef struct st_499cb0_0 {
    char padding_0[12];
    struct st_499cb0_1 *field_c;
} st_499cb0_0;

typedef struct st_499cb0_3 {
    unsigned int field_0;
    char padding_4[260];
    unsigned int field_108;
    unsigned int field_10c;
} st_499cb0_3;

typedef struct st_499cb0_1 {
    unsigned int field_0;
} st_499cb0_1;

typedef struct st_499cb0_2 {
    struct st_499cb0_3 *field_0;
    char padding_4[92];
    struct st_499cb0_0 *field_60;
} st_499cb0_2;

typedef struct st_499cb0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_499cb0_4;

extern st_499cb0_4 *gpGlobals;

unsigned int Spawn__6CCandy(st_499cb0_2 *a0)
{
    unsigned int v0;  // eax

    a0->field_60->field_c(a0);
    a0->field_0->field_108 = 5;
    a0->field_0->field_10c = 1;
    v0 = -1 * gpGlobals->field_98 + 5874777;
    a0->field_0->field_0 = v0;
    return v0;
}

