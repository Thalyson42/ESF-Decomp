// _._13CBeamJumpTask @0x187040 size=51
typedef struct st_587040_0 {
    char padding_0[20];
    unsigned int field_14;
} st_587040_0;

extern char __vt_13CBeamJumpTask;

int _._13CBeamJumpTask(st_587040_0 *a0, int a1)
{
    a0->field_14 = &__vt_13CBeamJumpTask;
    return _._9CBaseTask(a0, a1);
}

