// Precache__11CBaseButton @0x95f60 size=775
typedef struct st_495f60_1 {
    struct st_495f60_0 *field_0;
    char padding_4[268];
    unsigned int field_110;
    unsigned int field_114;
    unsigned int field_118;
    unsigned int field_11c;
    char padding_120[20];
    char field_134;
    char field_135;
    char field_136;
    char field_137;
} st_495f60_1;

typedef struct st_495f60_0 {
    char padding_0[416];
    char field_1a0;
} st_495f60_0;

typedef struct st_495f60_2 {
    unsigned int field_0;
} st_495f60_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_495f60_2 *g_6167c4;
extern st_495f60_2 *g_6168cc;

st_495f60_1 * Precache__11CBaseButton(st_495f60_1 *a0)
{
    unsigned int v0;  // edi
    unsigned int v1;  // edi

    if (a0->field_0->field_1a0 & 64)
    {
        g_6167c4("buttons/spark1.wav");
        g_6167c4("buttons/spark2.wav");
        g_6167c4("buttons/spark3.wav");
        g_6167c4("buttons/spark4.wav");
        g_6167c4("buttons/spark5.wav");
        g_6167c4("buttons/spark6.wav");
    }
    if (a0->field_134)
    {
        v0 = sub_487cb0(a0->field_134);
        g_6167c4(v0);
        a0->field_110 = g_6168cc(v0);
    }
    if (a0->field_136)
    {
        v1 = sub_487cb0(a0->field_136);
        g_6167c4(v1);
        a0->field_118 = g_6168cc(v1);
    }
    if (a0->field_135 - 1 <= 8)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_135] - 1563200)]));
    }
    else
    {
        a0->field_114 = 0;
        if (a0->field_137 - 1 > 7)
        {
            a0->field_11c = 0;
            return a0;
        }
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_137] - 1562944)]));
    }
}

