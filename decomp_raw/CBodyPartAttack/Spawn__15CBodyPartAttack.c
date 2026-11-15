// Spawn__15CBodyPartAttack @0x93cb0 size=69
typedef struct st_493cb0_1 {
    char padding_0[12];
    struct st_493cb0_2 *field_c;
} st_493cb0_1;

typedef struct st_493cb0_2 {
    unsigned int field_0;
} st_493cb0_2;

typedef struct st_493cb0_0 {
    char padding_0[4];
    unsigned int field_4;
} st_493cb0_0;

typedef struct st_493cb0_3 {
    struct st_493cb0_0 *field_0;
    char padding_4[92];
    struct st_493cb0_1 *field_60;
} st_493cb0_3;

typedef struct st_493cb0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_493cb0_4;

extern st_493cb0_4 *gpGlobals;

unsigned int Spawn__15CBodyPartAttack(st_493cb0_3 *a0)
{
    unsigned int v0;  // eax

    a0->field_60->field_c(a0);
    v0 = -1 * gpGlobals->field_98 + 0x5997fd;
    a0->field_0->field_4 = v0;
    return v0;
}

