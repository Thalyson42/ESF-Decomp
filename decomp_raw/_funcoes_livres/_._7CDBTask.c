// _._7CDBTask @0x185ad0 size=87
typedef struct st_585ad0_0 {
    char padding_0[8];
    struct st_585ad0_1 *field_8;
    char padding_c[8];
    unsigned int field_14;
} st_585ad0_0;

typedef struct st_585ad0_1 {
    char padding_0[2864];
    unsigned int field_b30;
    char padding_b34[1236];
    unsigned int field_1008;
    char padding_100c[24];
    unsigned int field_1024;
} st_585ad0_1;

extern char __vt_7CDBTask;

int _._7CDBTask(st_585ad0_0 *a0, int a1)
{
    unsigned int *v0;  // eax

    a0->field_14 = &__vt_7CDBTask;
    a0->field_8->field_b30 = 0;
    v0 = a0->field_8;
    v0[1033] = 0xffffffff;
    v0[1026] = 0xffffffff;
    return _._9CBaseTask(a0, a1);
}

