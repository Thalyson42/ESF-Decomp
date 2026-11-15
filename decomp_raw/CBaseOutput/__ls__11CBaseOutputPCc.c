// __ls__11CBaseOutputPCc @0x16d640 size=53
typedef struct st_56d640_0 {
    char padding_0[20];
    struct st_56d640_1 *field_14;
} st_56d640_0;

typedef struct st_56d640_1 {
    unsigned int field_0;
} st_56d640_1;

typedef struct st_56d640_2 {
    char padding_0[512];
    struct st_56d640_0 *field_200;
} st_56d640_2;

st_56d640_2 * __ls__11CBaseOutputPCc(st_56d640_2 *a0, unsigned int a1)
{
    a0->field_200->field_14(a0, a1);
    return a0;
}

