// Spawn__7CLadder @0x12e640 size=102
typedef struct st_52e640_0 {
    char padding_0[12];
    struct st_52e640_1 *field_c;
} st_52e640_0;

typedef struct st_52e640_1 {
    unsigned int field_0;
} st_52e640_1;

typedef struct st_52e640_3 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    char padding_10c[252];
    unsigned int field_208;
} st_52e640_3;

typedef struct st_52e640_2 {
    struct st_52e640_3 *field_0;
    char padding_4[92];
    struct st_52e640_0 *field_60;
} st_52e640_2;

typedef struct st_52e640_4 {
    char padding_0[152];
    unsigned int field_98;
} st_52e640_4;

extern st_52e640_1 *g_6167c8;
extern st_52e640_4 *gpGlobals;

unsigned int * Spawn__7CLadder(st_52e640_2 *a0)
{
    unsigned int *v0;  // eax

    a0->field_60->field_c(a0);
    g_6167c8(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    v0 = a0->field_0;
    v0[66] = 7;
    return v0;
}

