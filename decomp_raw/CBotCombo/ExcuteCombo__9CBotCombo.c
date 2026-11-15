// ExcuteCombo__9CBotCombo @0x164e90 size=288
typedef struct st_564e90_2 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    struct st_564e90_0 *field_10;
} st_564e90_2;

typedef struct st_564e90_5 {
    struct st_564e90_4 *field_0;
    struct st_564e90_4 *field_4;
    struct st_564e90_2 *field_8;
    int field_c;
    unsigned int field_10;
} st_564e90_5;

typedef struct st_564e90_0 {
    char padding_0[8];
    struct st_564e90_1 *field_8;
    struct st_564e90_1 *field_c;
    struct st_564e90_1 *field_10;
    struct st_564e90_1 *field_14;
} st_564e90_0;

typedef struct st_564e90_1 {
    unsigned int field_0;
} st_564e90_1;

typedef struct st_564e90_4 {
    struct st_564e90_2 *field_0;
    struct st_564e90_3 *field_4;
} st_564e90_4;

typedef struct st_564e90_3 {
    char padding_0[8];
    unsigned int field_8;
} st_564e90_3;

typedef struct st_564e90_6 {
    float field_0;
} st_564e90_6;

extern st_564e90_6 *gpGlobals;

double ExcuteCombo__9CBotCombo(st_564e90_5 *a0)
{
    st_564e90_2 *v0;  // edx
    double v1;  // mm7
    double v2;  // mm7
    st_564e90_2 *v3;  // edx
    st_564e90_2 *v4;  // edx
    st_564e90_2 *v5;  // edi
    st_564e90_4 *v6;  // edx
    st_564e90_3 *v7;  // eax

    if (a0->field_8)
    {
        v0 = a0->field_8;
        if (!v0->field_0)
        {
            v0->field_10->field_14(v0);
            v2 = v1 + *(float *)&a0->field_8->field_c;
            if (v2 > *(float *)gpGlobals)
            {
                CBot::ResetMoveSpeed(a0->field_c);
                return v2;
            }
            a0->field_8->field_10->field_10(a0->field_8);
        }
        a0->field_8->field_10->field_c(a0->field_8);
        v3 = a0->field_8;
        if (v3->field_0 != 2)
            return v2;
        if (v3)
            v3->field_10->field_8(v3, 3);
        a0->field_8 = NULL;
        if (a0->field_0)
        {
            if (!a0->field_0)
            {
                v4 = NULL;
            }
            else
            {
                v5 = a0->field_0->field_0;
                v6 = a0->field_0;
                if (v6)
                {
                    if (v6 == a0->field_4)
                        a0->field_4 = v6->field_4;
                    v7 = a0->field_0->field_4;
                    a0->field_0 = v7;
                    if (v7)
                        v7->field_8 = 0;
                    v6->field_4 = NULL;
                    __builtin_delete(v6);
                }
                v4 = v5;
            }
            a0->field_8 = v4;
            if (v4)
            {
                *(float *)&v4->field_c = *(float *)gpGlobals;
                return v2;
            }
        }
    }
    a0->field_10 = 2;
    return v2;
}

