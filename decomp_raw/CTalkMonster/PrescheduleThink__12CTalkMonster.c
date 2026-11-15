// PrescheduleThink__12CTalkMonster @0x126fe0 size=26
typedef struct st_526fe0_0 {
    char padding_0[262];
    char field_106;
    char field_107;
} st_526fe0_0;

st_526fe0_0 * PrescheduleThink__12CTalkMonster(st_526fe0_0 *a0)
{
    if (!(a0->field_106 & 32))
        a0->field_107 = a0->field_107 | 32;
    return a0;
}

