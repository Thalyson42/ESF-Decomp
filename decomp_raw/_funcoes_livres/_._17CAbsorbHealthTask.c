// _._17CAbsorbHealthTask @0x1861e0 size=92
typedef struct st_5861e0_0 {
    char padding_0[12];
    struct st_5861e0_1 *field_c;
    char padding_10[4];
    unsigned int field_14;
} st_5861e0_0;

typedef struct st_5861e0_1 {
    char padding_0[456];
    unsigned int field_1c8;
    char padding_1cc[16];
    unsigned int field_1dc;
} st_5861e0_1;

extern char __vt_17CAbsorbHealthTask;

int _._17CAbsorbHealthTask(st_5861e0_0 *a0, int a1)
{
    a0->field_14 = &__vt_17CAbsorbHealthTask;
    a0->field_c->field_1dc = 0;
    a0->field_c->field_1c8 = 2;
    *(float *)&a0->field_c->padding_1cc[0] = 255.0f;
    return _._9CBaseTask(a0, a1);
}

