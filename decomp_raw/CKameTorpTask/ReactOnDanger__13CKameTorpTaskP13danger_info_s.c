// ReactOnDanger__13CKameTorpTaskP13danger_info_s @0x1793c0 size=83
typedef struct st_5793c0_0 {
    char padding_0[24];
    short field_18;
} st_5793c0_0;

typedef struct st_5793c0_1 {
    char padding_0[513];
    char field_201;
} st_5793c0_1;

typedef struct st_5793c0_2 {
    char padding_0[12];
    struct st_5793c0_1 *field_c;
    char padding_10[40];
    unsigned short field_38;
} st_5793c0_2;

int ReactOnDanger__13CKameTorpTaskP13danger_info_s(st_5793c0_2 *a0, st_5793c0_0 *a1)
{
    st_5793c0_1 *v0;  // eax
    unsigned int v2;  // eax

    if ((unsigned short)(a1->field_18 - 100) <= 59)
    {
        a0->field_c->field_201 = a0->field_c->field_201 | 8;
    }
    else if (a1->field_18 <= 59)
    {
        a0->field_38 = 3;
    }
    else
    {
        if (a1->field_18 > 99)
        {
            v0 = a0->field_c;
            v0->field_201 = v0->field_201 | 8;
            return _INSERT(v0, 0, 1);
        }
        a0->field_38 = 1;
    }
    return _INSERT(v2, 0, 0);
}

