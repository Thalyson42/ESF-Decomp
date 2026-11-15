// ReadField__8CRestorePvP15TYPEDESCRIPTIONiiiPcT1 @0x1363d0 size=1032
typedef struct st_5363d0_0 {
    char padding_0[1324];
    unsigned int field_52c;
    char padding_530[20];
    unsigned int field_544;
    unsigned int field_548;
    unsigned int field_54c;
    float field_550;
} st_5363d0_0;

typedef struct st_5363d0_2 {
    unsigned int field_0;
    int field_4;
    char padding_8[4];
    short field_c;
    char field_e;
} st_5363d0_2;

typedef struct st_5363d0_1 {
    struct st_5363d0_0 *field_0;
    unsigned int field_4;
} st_5363d0_1;

typedef struct st_5363d0_3 {
    unsigned int field_0;
} st_5363d0_3;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_5363d0_3 *g_6168b4;

unsigned int ReadField__8CRestorePvP15TYPEDESCRIPTIONiiiPcT1(st_5363d0_1 *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6, unsigned int a7)
{
    st_5363d0_0 *v10;  // edx
    unsigned int v11;  // esi
    float v0;  // [bp-0x54], Other Possible Types: unsigned int
    st_5363d0_2 *v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c]
    unsigned int v7;  // [bp-0x24]
    unsigned int v8;  // [bp-0x20]
    unsigned int v9;  // [bp-0x1c]

    v0 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = v4;
    v8 = v5;
    v9 = v6;
    if (a0->field_0)
    {
        v10 = a0->field_0;
        v0 = v10->field_550;
        if (v10->field_52c)
        {
            v7 = v10->field_544;
            v8 = v10->field_548;
            v9 = v10->field_54c;
        }
    }
    v11 = 0;
    if (0 < (int)a3)
    {
        do
        {
            v2 = (a4 + v11) % a3;
            v1 = v2 * 16 + a2;
            if (!sub_48cac0(v1->field_4, a6))
            {
                if (!a0->field_4 || !(v1->field_e & 1))
                {
                    v3 = 0;
                    if (v1->field_c > 0)
                    {
                        do
                        {
                            if (v1->field_0 <= 0x11)
                                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v1->field_0] - 906716)]));
                        } while ((g_6168b4(4, "Bad field type\n"), v3 += 1, (int)v3 < v1->field_c));
                    }
                }
                return v2;
            }
        } while ((v11 += 1, (int)v11 < (int)a3));
    }
    return 0xffffffff;
}

