// _._13CWallJumpTask @0x186d00 size=51
typedef struct st_586d00_0 {
    char padding_0[20];
    unsigned int field_14;
} st_586d00_0;

extern char __vt_13CWallJumpTask;

int _._13CWallJumpTask(st_586d00_0 *a0, int a1)
{
    a0->field_14 = &__vt_13CWallJumpTask;
    return _._9CBaseTask(a0, a1);
}

