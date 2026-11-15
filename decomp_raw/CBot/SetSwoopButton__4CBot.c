// SetSwoopButton__4CBot @0x1716f0 size=150
typedef struct st_5716f0_1 {
    struct st_5716f0_0 *field_0;
    char padding_4[1280];
    unsigned int field_504;
} st_5716f0_1;

typedef struct st_5716f0_0 {
    char padding_0[264];
    unsigned int field_108;
} st_5716f0_0;

extern char _GLOBAL_OFFSET_TABLE_;

st_5716f0_0 * SetSwoopButton__4CBot(st_5716f0_1 *a0)
{
    st_5716f0_1 *v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    int v2;  // [bp+0x0]

    if (a0->field_0->field_108 != 11)
    {
        return a0->field_0;
    }
    else if (a0->field_504 <= 5)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_504] - 664492)]));
    }
    else
    {
        v1 = 16;
        v0 = a0;
        return sub_488e30(v2);
    }
}

