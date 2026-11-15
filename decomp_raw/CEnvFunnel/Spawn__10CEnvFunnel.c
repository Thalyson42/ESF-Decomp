// Spawn__10CEnvFunnel @0xb6970 size=68
typedef struct st_4b6970_0 {
    char padding_0[12];
    struct st_4b6970_1 *field_c;
} st_4b6970_0;

typedef struct st_4b6970_3 {
    char padding_0[268];
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
} st_4b6970_3;

typedef struct st_4b6970_1 {
    unsigned int field_0;
} st_4b6970_1;

typedef struct st_4b6970_2 {
    struct st_4b6970_3 *field_0;
    char padding_4[92];
    struct st_4b6970_0 *field_60;
} st_4b6970_2;

unsigned int * Spawn__10CEnvFunnel(st_4b6970_2 *a0)
{
    unsigned int *v0;  // eax

    a0->field_60->field_c(a0);
    a0->field_0->field_10c = 0;
    v0 = a0->field_0;
    v0[70] = 128;
    return v0;
}

