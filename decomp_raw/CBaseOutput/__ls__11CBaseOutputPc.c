// __ls__11CBaseOutputPc @0x16d600 size=53
typedef struct st_56d600_0 {
    char padding_0[20];
    struct st_56d600_1 *field_14;
} st_56d600_0;

typedef struct st_56d600_1 {
    unsigned int field_0;
} st_56d600_1;

typedef struct st_56d600_2 {
    char padding_0[512];
    struct st_56d600_0 *field_200;
} st_56d600_2;

st_56d600_2 * __ls__11CBaseOutputPc(st_56d600_2 *a0, unsigned int a1)
{
    a0->field_200->field_14(a0, a1);
    return a0;
}

