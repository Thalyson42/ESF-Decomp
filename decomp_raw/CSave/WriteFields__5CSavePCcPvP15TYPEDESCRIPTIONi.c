// WriteFields__5CSavePCcPvP15TYPEDESCRIPTIONi @0x135dd0 size=1060
typedef struct st_535dd0_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    short field_c;
} st_535dd0_0;

typedef struct st_535dd0_1 {
    unsigned int field_0;
} st_535dd0_1;

extern unsigned int gSizes[4];
extern char _GLOBAL_OFFSET_TABLE_;
extern st_535dd0_1 *g_engfuncs.pfnAlertMessage;

unsigned int WriteFields__5CSavePCcPvP15TYPEDESCRIPTIONi(int a0, int a1, unsigned int a2, unsigned int *a3, int a4)
{
    unsigned int v3;  // esi
    st_535dd0_0 *v4;  // edi
    int v0;  // [bp-0x110]
    int iter;  // [bp-0x10c]
    unsigned int v2;  // [bp-0x108]

    v3 = 0;
    iter = 0;
    if (0 < a4)
    {
        do
        {
            if (CSave::DataEmpty(a0, a2 + a3[2 + 4 * iter], gSizes[a3[4 * iter]] * (short)a3[3 + 4 * iter]))
                v3 += 1;
        } while ((iter += 1, iter < a4));
    }
    v2 = a4 - v3;
    CSave::WriteInt(a0, a1, &v2, 1);
    iter = 0;
    if (iter >= a4)
        return 1;
    while (1)
    {
        v4 = &a3[4 * iter];
        v0 = a2 + v4->field_8;
        if (!CSave::DataEmpty(a0, v0, gSizes[v4->field_0] * v4->field_c))
        {
            if (v4->field_0 <= 0x11)
                goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v4->field_0] - 908268)]));
            else
                g_engfuncs.pfnAlertMessage(4, "Bad field type\n");
        }
        iter += 1;
        if (iter >= a4)
            return 1;
    }
}

