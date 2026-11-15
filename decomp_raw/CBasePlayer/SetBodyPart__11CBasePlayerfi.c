// SetBodyPart__11CBasePlayerfi @0xf61a0 size=28
typedef struct st_4f61a0_0 {
    char padding_0[1412];
    unsigned int field_584;
    char padding_588[16];
    float field_598;
} st_4f61a0_0;

st_4f61a0_0 * SetBodyPart__11CBasePlayerfi(st_4f61a0_0 *a0, float a1, unsigned int a2)
{
    a0->field_598 = a1;
    a0->field_584 = a2;
    return a0;
}

