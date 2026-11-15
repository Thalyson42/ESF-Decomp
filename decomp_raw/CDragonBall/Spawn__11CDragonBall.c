// Spawn__11CDragonBall @0xade50 size=92
typedef struct st_4ade50_0 {
    char padding_0[12];
    struct st_4ade50_1 *field_c;
} st_4ade50_0;

typedef struct st_4ade50_3 {
    unsigned int field_0;
    char padding_4[260];
    unsigned int field_108;
    unsigned int field_10c;
} st_4ade50_3;

typedef struct st_4ade50_1 {
    unsigned int field_0;
} st_4ade50_1;

typedef struct st_4ade50_2 {
    struct st_4ade50_3 *field_0;
    char padding_4[92];
    struct st_4ade50_0 *field_60;
} st_4ade50_2;

typedef struct st_4ade50_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4ade50_4;

extern st_4ade50_4 *gpGlobals;

unsigned int Spawn__11CDragonBall(st_4ade50_2 *a0)
{
    unsigned int v0;  // eax

    a0->field_60->field_c(a0);
    a0->field_0->field_108 = 10;
    a0->field_0->field_10c = 1;
    v0 = -1 * gpGlobals->field_98 + 5886860;
    a0->field_0->field_0 = v0;
    return v0;
}

