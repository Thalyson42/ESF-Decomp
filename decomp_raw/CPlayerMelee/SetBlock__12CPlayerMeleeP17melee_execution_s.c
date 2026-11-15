// SetBlock__12CPlayerMeleeP17melee_execution_s @0x104d10 size=159
typedef struct st_504d10_2 {
    char padding_0[192];
    unsigned int field_c0;
    char padding_c4[108];
    struct st_504d10_1 *field_130;
} st_504d10_2;

typedef struct st_504d10_1 {
    char padding_0[332];
    struct st_504d10_0 *field_14c;
} st_504d10_1;

typedef struct st_504d10_0 {
    char padding_0[4];
    int field_4;
    char padding_8[20];
    struct st_504d10_0 *field_1c;
    struct st_504d10_0 *field_20;
} st_504d10_0;

typedef struct st_504d10_3 {
    char padding_0[32];
    int field_20;
    char padding_24[12];
    int field_30;
    char padding_34[32];
    unsigned int field_54;
} st_504d10_3;

unsigned int SetBlock__12CPlayerMeleeP17melee_execution_s(st_504d10_2 *a0, st_504d10_3 *a1)
{
    st_504d10_0 *iter;  // eax
    int v1;  // edx

    iter = a0->field_130->field_14c;
    if (!iter || !a1)
        return 2;
    if (iter->field_1c)
    {
        do
        {
            iter = iter->field_1c;
        } while (iter->field_1c);
    }
    if (a1->field_30 <= 1 || (v1 = 2, 2 > a1->field_30))
    {
LABEL_504d6f:
        if (iter && CPlayerMelee::Block(a0, a1->field_20, iter->field_4))
        {
            if (a1->field_54 == 1)
                return 1;
            a0->field_c0 = a0->field_c0 + 1;
            return 1;
        }
    }
    else if (iter)
    {
        do
        {
            iter = iter->field_20;
            v1 += 1;
        } while (v1 <= a1->field_30 && iter);
        goto LABEL_504d6f;
    }
    return 2;
}

