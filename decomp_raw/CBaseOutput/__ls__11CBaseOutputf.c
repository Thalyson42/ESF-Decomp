// __ls__11CBaseOutputf @0x16d520 size=105
typedef struct st_56d520_0 {
    char padding_0[20];
    struct st_56d520_1 *field_14;
} st_56d520_0;

typedef struct st_56d520_1 {
    unsigned int field_0;
} st_56d520_1;

typedef struct st_56d520_2 {
    char padding_0[512];
    struct st_56d520_0 *field_200;
} st_56d520_2;

st_56d520_2 * __ls__11CBaseOutputf(st_56d520_2 *a0, float a1)
{
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x23]

    v0 = 0;
    sub_48d0e0(&v1, 0, 24);
    sub_48d990(&v0, "%f", (unsigned int)(a1 >> 0));
    a0->field_200->field_14(a0, &v0);
    return a0;
}

