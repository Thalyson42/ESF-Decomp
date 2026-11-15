// Precache__9CBaseDoor @0xabd70 size=1402
typedef struct st_4abd70_0 {
    struct st_4abd70_1 *field_0;
    char padding_4[257];
    char field_105;
    char field_106;
    char padding_107[1];
    unsigned int field_108;
    unsigned int field_10c;
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[20];
    char field_12c;
    char field_12d;
    char field_12e;
    char field_12f;
} st_4abd70_0;

typedef struct st_4abd70_1 {
    char padding_0[492];
    unsigned int field_1ec;
    unsigned int field_1f0;
} st_4abd70_1;

typedef struct st_4abd70_2 {
    unsigned int field_0;
} st_4abd70_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4abd70_2 *g_6167c4;
extern st_4abd70_2 *g_6168cc;

st_4abd70_0 * Precache__9CBaseDoor(st_4abd70_0 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // edi
    unsigned int v3;  // edi

    if (a0->field_105 <= 10)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_105] - 1473836)]));
    }
    else
    {
        v0 = g_6168cc("common/null.wav");
        a0->field_0->field_1ec = v0;
        if (a0->field_106 <= 8)
        {
            goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_106] - 1473484)]));
        }
        else
        {
            v1 = g_6168cc("common/null.wav");
            a0->field_0->field_1f0 = v1;
            if (a0->field_12c)
            {
                v2 = sub_487cb0(a0->field_12c);
                g_6167c4(v2);
                a0->field_108 = g_6168cc(v2);
            }
            if (a0->field_12e)
            {
                v3 = sub_487cb0(a0->field_12e);
                g_6167c4(v3);
                a0->field_110 = g_6168cc(v3);
            }
            if (a0->field_12d - 1 <= 8)
            {
                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_12d] - 1473040)]));
            }
            else
            {
                a0->field_10c = 0;
                if (a0->field_12f - 1 > 7)
                {
                    a0->field_114 = 0;
                    return a0;
                }
                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_12f] - 1472736)]));
            }
        }
    }
}

