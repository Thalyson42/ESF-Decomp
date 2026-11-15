// __ls__11CBaseOutputd @0x16d590 size=102
typedef struct st_56d590_0 {
    char padding_0[20];
    struct st_56d590_1 *field_14;
} st_56d590_0;

typedef struct st_56d590_1 {
    unsigned int field_0;
} st_56d590_1;

typedef struct st_56d590_2 {
    char padding_0[512];
    struct st_56d590_0 *field_200;
} st_56d590_2;

st_56d590_2 * __ls__11CBaseOutputd(st_56d590_2 *a0, int a1, int a2)
{
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x23]

    v0 = 0;
    memset@GLIBC_2.0(&v1, 0, 24);
    sprintf@GLIBC_2.0(&v0, "%f", a1, a2);
    a0->field_200->field_14(a0, &v0);
    return a0;
}

