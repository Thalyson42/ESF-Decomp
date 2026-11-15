// PrimaryAttack__14CChargedAttack @0x9ed70 size=372
typedef struct st_49ed70_3 {
    char padding_0[820];
    unsigned int field_334;
    char padding_338[1052];
    unsigned int field_754;
} st_49ed70_3;

typedef struct st_49ed70_2 {
    char padding_0[96];
    struct st_49ed70_0 *field_60;
    char padding_64[28];
    struct st_49ed70_3 *field_80;
    char padding_84[24];
    float field_9c;
    char padding_a0[36];
    int field_c4;
    unsigned int field_c8;
    unsigned int field_cc;
    int field_d0;
} st_49ed70_2;

typedef struct st_49ed70_0 {
    char padding_0[348];
    struct st_49ed70_1 *field_15c;
    struct st_49ed70_1 *field_160;
    char padding_164[8];
    struct st_49ed70_1 *field_16c;
    char padding_170[4];
    struct st_49ed70_1 *field_174;
} st_49ed70_0;

typedef struct st_49ed70_1 {
    unsigned int field_0;
} st_49ed70_1;

unsigned int PrimaryAttack__14CChargedAttack(double a0, float a1)
{
    st_49ed70_2 *v2;  // esi
    unsigned int *v3;  // eax
    unsigned int v4;  // eax
    st_49ed70_2 *v0;  // [bp-0x3c]

    v2 = (st_49ed70_2 *)a1;
    if (!v2->field_80->field_334)
    {
        v2->field_80->field_334 = 1;
        sub_488e80(v2->field_80, 5);
        sub_488e80(v2->field_80, 6);
        *(float *)&v2->field_80->field_754 = *(float *)&v2->field_cc;
        v2->field_c4 = 0;
        v2->field_60->field_160(v2);
    }
    else if (v2->field_c4 >= (int)v2->field_c8)
    {
        v4 = sub_488640();
        v2->field_9c = (float)(a0 + 0.2);
        return v4;
    }
    else if (!sub_48c980(v2->field_80, v2->field_d0))
    {
        v2->field_60->field_15c(v2);
    }
    else
    {
        if (v2->field_c4 == v2->field_c8 / 3)
        {
            v0 = v2;
            v3 = v2->field_60->field_16c;
        }
        else
        {
            if (v2->field_c4 <= (int)(v2->field_c8 / 3))
                goto LABEL_49ee99;
            v0 = v2;
            v3 = v2->field_60->field_174;
        }
        v3(v0);
LABEL_49ee99:
        v2->field_c4 = v2->field_c4 + 1;
        sub_48c680(v2->field_80, v2->field_c4 * 100 / v2->field_c8);
    }
    v4 = sub_488640();
    v2->field_9c = (float)(a0 + 0.2);
    return v4;
}

