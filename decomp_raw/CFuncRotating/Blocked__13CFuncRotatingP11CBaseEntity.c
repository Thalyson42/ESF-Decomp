// Blocked__13CFuncRotatingP11CBaseEntity @0x92a10 size=62
typedef struct st_492a10_2 {
    unsigned int field_0;
} st_492a10_2;

typedef struct st_492a10_0 {
    char padding_0[480];
    float field_1e0;
} st_492a10_0;

typedef struct st_492a10_1 {
    char padding_0[52];
    struct st_492a10_2 *field_34;
} st_492a10_1;

typedef struct st_492a10_3 {
    char padding_0[96];
    struct st_492a10_1 *field_60;
} st_492a10_3;

int Blocked__13CFuncRotatingP11CBaseEntity(st_492a10_0 **a0, st_492a10_3 *a1)
{
    st_492a10_0 *v0;  // eax

    v0 = *a0;
    return a1->field_60->field_34(a1, v0, v0, v0->field_1e0, 1);
}

