// _._13CTeleportTask @0x182780 size=77
typedef struct st_582780_0 {
    char padding_0[8];
    struct st_582780_1 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_582780_0;

typedef struct st_582780_1 {
    char padding_0[2824];
    unsigned int field_b08;
    unsigned int field_b0c;
} st_582780_1;

extern char __vt_13CTeleportTask;

int _._13CTeleportTask(st_582780_0 *a0, int a1)
{
    a0->field_14 = &__vt_13CTeleportTask;
    a0->field_8->field_b0c = 0;
    a0->field_8->field_b08 = 0;
    return _._9CBaseTask(a0, a1);
}

