// EmitChargeSound__16CFinishingBuster @0xbed50 size=51
typedef struct st_4bed50_0 {
    char padding_0[128];
    int field_80;
} st_4bed50_0;

int EmitChargeSound__16CFinishingBuster(st_4bed50_0 *a0)
{
    return sub_48d4f0(a0->field_80, "buster_charge.wav");
}

