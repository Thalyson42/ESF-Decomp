// PrimaryAttack__12CGenericBeam @0xc6030 size=45
typedef struct st_4c6030_0 {
    char padding_0[528];
    char field_210;
} st_4c6030_0;

int PrimaryAttack__12CGenericBeam(st_4c6030_0 *a0)
{
    a0->field_210 = 0;
    return CControlledBeam::PrimaryAttack(a0);
}

