// EmitChargeSound__8CBigBang @0x90ac0 size=51
typedef struct st_490ac0_0 {
    char padding_0[128];
    int field_80;
} st_490ac0_0;

int EmitChargeSound__8CBigBang(st_490ac0_0 *a0)
{
    return sub_48d4f0(a0->field_80, "bigbang_charge.wav");
}

