// PM_Move @0x1947a0 size=173
typedef struct st_5947a0_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[173];
    char field_b9;
    char padding_ba[10];
    unsigned int field_c4;
    char padding_c8[20];
    unsigned int field_dc;
    unsigned int field_e0;
} st_5947a0_0;

extern unsigned int pm_shared_initialized;
extern st_5947a0_0 *pmove;

st_5947a0_0 * PM_Move(unsigned int a0, unsigned int a1)
{
    if (!pm_shared_initialized)
        __assert_fail@GLIBC_2.0("pm_shared_initialized", "../pm_shared/pm_shared.c", 4042, "PM_Move");
    pmove = a0;
    PM_PlayerMove(a1 != 0);
    if (pmove->field_e0 != 0xffffffff)
        pmove->field_b9 = pmove->field_b9 | 2;
    else
        pmove->field_b9 = pmove->field_b9 & 253;
    if (!pmove->field_8 && pmove->field_dc == 3)
        pmove->field_c4 = 0x3f800000;
    return pmove;
}

