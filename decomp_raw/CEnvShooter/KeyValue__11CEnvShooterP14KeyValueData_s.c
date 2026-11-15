// KeyValue__11CEnvShooterP14KeyValueData_s @0xb4a00 size=532
typedef struct st_4b4a00_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b4a00_0;

typedef struct st_4b4a00_2 {
    char padding_0[184];
    unsigned int field_b8;
} st_4b4a00_2;

typedef struct st_4b4a00_3 {
    struct st_4b4a00_2 *field_0;
    char padding_4[112];
    unsigned int field_74;
} st_4b4a00_3;

typedef struct st_4b4a00_1 {
    unsigned int field_0;
} st_4b4a00_1;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4b4a00_1 *g_6168cc;

st_4b4a00_2 * KeyValue__11CEnvShooterP14KeyValueData_s(st_4b4a00_3 *a0, st_4b4a00_0 *a1)
{
    unsigned int v0;  // eax
    st_4b4a00_2 *v1;  // eax
    st_4b4a00_2 *v2;  // eax

    if (!sub_488af0(a1->field_4, "shootmodel"))
    {
        v0 = g_6168cc(a1->field_8);
        v1 = a0->field_0;
        v1->field_b8 = v0;
        a1->field_c = 1;
        return v1;
    }
    if (sub_488af0(a1->field_4, "shootsounds"))
        return sub_48b570(a0, a1);
    v2 = sub_48b500(a1->field_8, 0, 10, 0);
    a1->field_c = 1;
    if (&v2->padding_0[1] > 0x5)
    {
        a0->field_74 = 9;
        return &v2->padding_0[1];
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&_GLOBAL_OFFSET_TABLE_ + 0x4 * v2 - 1437512)]));
}

