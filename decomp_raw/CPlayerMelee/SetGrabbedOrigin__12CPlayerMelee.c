// SetGrabbedOrigin__12CPlayerMelee @0x10aaa0 size=114
typedef struct st_50aaa0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_50aaa0_0;

typedef struct st_50aaa0_1 {
    char padding_0[296];
    struct st_50aaa0_2 *field_128;
} st_50aaa0_1;

typedef struct st_50aaa0_2 {
    struct st_50aaa0_0 *field_0;
} st_50aaa0_2;

int SetGrabbedOrigin__12CPlayerMelee(st_50aaa0_1 *a0)
{
    unsigned int *v3;  // edx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v0 = 0;
    v1 = 0;
    v2 = 0;
    CPlayerMelee::CanThrow(a0, 80, &v0);
    v3 = *(int *)a0->field_128;
    v3[2] = v0;
    v3[3] = v1;
    v3[4] = v2;
    return UTIL_SetOrigin(*(int *)a0->field_128, &v0);
}

