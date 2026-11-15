// PM_Jump @0x192b80 size=701
typedef struct st_592b80_0 {
    char padding_0[172];
    float field_ac;
    char padding_b0[16];
    float field_c0;
    char padding_c4[4];
    char field_c8;
    char padding_c9[3];
    float field_cc;
    unsigned int field_d0;
    unsigned int field_d4;
    char padding_d8[8];
    unsigned int field_e0;
    int field_e4;
    unsigned int field_e8;
    char padding_ec[284];
    unsigned int field_208;
    char padding_20c[283214];
    char field_4545a;
    char padding_4545b[41209];
    struct st_592b80_1 *field_4f554;
    char padding_4f558[48];
    struct st_592b80_1 *field_4f588;
} st_592b80_0;

typedef struct st_592b80_1 {
    unsigned int field_0;
} st_592b80_1;

extern st_592b80_0 *pmove;
extern char _GLOBAL_OFFSET_TABLE_;

int PM_Jump(void)
{
    st_592b80_0 *v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    st_592b80_0 *v7;  // eax
    double v8;  // mm7
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x8]

    v4 = pmove;
    if (pmove->field_208)
        return v6;
    if (!pmove->field_d0)
    {
        if (__strtol_internal@GLIBC_2.0(pmove->field_4f554(&pmove->padding_4545b[40853], "tfc"), 0, 10, 0) == 1 && pmove->field_d4 == 5)
            return v5;
        if (pmove->field_cc != 0.0)
        {
            v2 = pmove->field_4545a;
            pmove->field_cc = (float)(pmove->field_cc - (double)(int)v2);
            v6 = _INSERT(v2, 0, 0);
            if (0.0 <= pmove->field_cc)
                return v6;
            pmove->field_cc = 0.0f;
            return v6;
        }
        else if (0.1 > pmove->field_c0)
        {
            pmove->field_e0 = 0xffffffff;
            *(float *)&pmove->padding_0[100] = 200.0f;
            return v6;
        }
        else
        {
            v7 = pmove;
            if (pmove->field_e4 > 1)
            {
                pmove->field_e0 = 0xffffffff;
                if (pmove->field_e8 == 0xfffffffd)
                {
                    v8 = 100.0;
                }
                else
                {
                    v7 = pmove;
                    if (pmove->field_e8 == 0xfffffffc)
                    {
                        v8 = 80.0;
                    }
                    else
                    {
                        v7 = pmove;
                        v8 = 50.0;
                    }
                }
                *(float *)&v7->padding_0[100] = (float)v8;
                if (0.0 < pmove->field_ac)
                    return v6;
                pmove->field_ac = 1000.0f;
                v1 = 3;
                v0 = 0;
                pmove->field_4f588(v0, v1);
                if (pmove->field_4f588(v0, v1) > 3)
                    return v6;
                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * pmove->field_4f588(v0, v1)] - 527772)]));
            }
            else
            {
                v4 = pmove;
                if (pmove->field_e0 != 0xffffffff)
                {
                    if (!(pmove->field_c8 & 2))
                    {
                        PM_MakeJump();
                        v4 = pmove;
                    }
                    else
                    {
                        return v6;
                    }
                }
            }
        }
    }
    v4->field_c8 = v4->field_c8 | 2;
    return v6;
}

