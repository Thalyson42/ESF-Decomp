// EmitShootSound__10CPowerBeam @0x10d080 size=51
typedef struct st_50d080_0 {
    char padding_0[128];
    int field_80;
} st_50d080_0;

int EmitShootSound__10CPowerBeam(st_50d080_0 *a0)
{
    return sub_48d4f0(a0->field_80, "powerbeamha.wav");
}

