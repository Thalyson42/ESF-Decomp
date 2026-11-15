// Think__21CStartSwoopComboEntry @0x15c1e0 size=344
typedef struct st_55c1e0_0 {
    char padding_0[264];
    unsigned int field_108;
} st_55c1e0_0;

typedef struct st_55c1e0_1 {
    struct st_55c1e0_0 *field_0;
    char padding_4[1280];
    unsigned int field_504;
    char padding_508[1296];
    short field_a18;
    char padding_a1a[338];
    int field_b6c;
} st_55c1e0_1;

typedef struct st_55c1e0_2 {
    unsigned int field_0;
    struct st_55c1e0_1 *field_4;
    char padding_8[16];
    float field_18;
    int field_1c;
} st_55c1e0_2;

typedef struct st_55c1e0_3 {
    unsigned int field_0;
} st_55c1e0_3;

extern st_55c1e0_3 *gpGlobals;

st_55c1e0_0 * Think__21CStartSwoopComboEntry(st_55c1e0_2 *a0)
{
    unsigned int v0;  // edi
    double v1;  // mm7
    st_55c1e0_0 *v2;  // eax

    if (a0->field_4->field_b6c)
    {
        CBot::ResetMoveSpeed(a0->field_4);
        CBot::SetMoveDir(a0->field_4, a0->field_1c);
        if (a0->field_4->field_0->field_108 == 11)
        {
            if (a0->field_1c == 16)
            {
                v0 = 4;
            }
            else if (a0->field_1c == 8)
            {
                v0 = 5;
            }
            else if (a0->field_1c == 32)
            {
                v0 = 0;
            }
            else if (a0->field_1c == 64)
            {
                v0 = 1;
            }
            else if (a0->field_1c == 2)
            {
                v0 = 2;
            }
            else if (a0->field_1c == 4)
            {
                v0 = 3;
            }
            if (a0->field_4->field_504 != v0 || (CSwoop::GetSwoopTime(&a0->field_4->field_504), v1 <= 0.20000000298023224))
                goto LABEL_55c2b4;
        }
        else
        {
LABEL_55c2b4:
            CBot::AimAtEnemy(a0->field_4, a0->field_4->field_b6c);
            if (a0->field_18 > *(float *)gpGlobals || (CSwoop::GetSwoopTime(&a0->field_4->field_504), a0->field_18 <= 0.20000000298023224f && a0->field_4->field_0->field_108 == 11))
            {
                if (a0->field_4->field_a18 > 159)
                {
                    v2 = a0->field_4->field_0;
                    if (v2->field_108 == 11)
                        return v2;
                }
                else
                {
                    return v2;
                }
            }
        }
    }
    a0->field_0 = 2;
    return v2;
}

