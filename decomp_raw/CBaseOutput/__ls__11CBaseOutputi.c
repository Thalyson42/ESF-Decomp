// __ls__11CBaseOutputi @0x16d4b0 size=103
typedef struct st_56d4b0_0 {
    char padding_0[20];
    struct st_56d4b0_1 *field_14;
} st_56d4b0_0;

typedef struct st_56d4b0_1 {
    unsigned int field_0;
} st_56d4b0_1;

typedef struct st_56d4b0_2 {
    char padding_0[512];
    struct st_56d4b0_0 *field_200;
} st_56d4b0_2;

st_56d4b0_2 * __ls__11CBaseOutputi(st_56d4b0_2 *a0, int a1)
{
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x23]

    v0 = 0;
    sub_48d0e0(&v1, 0, 24);
    sub_48d990(&v0, "%d", a1);
    a0->field_200->field_14(a0, &v0);
    return a0;
}

