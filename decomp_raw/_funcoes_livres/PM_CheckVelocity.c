// PM_CheckVelocity @0x18ee80 size=325
typedef struct st_58ee80_2 {
    char padding_0[324848];
    struct st_58ee80_1 *field_4f4f0;
    char padding_4f4f4[112];
    struct st_58ee80_3 *field_4f564;
    struct st_58ee80_3 *field_4f568;
} st_58ee80_2;

typedef struct st_58ee80_3 {
    unsigned int field_0;
} st_58ee80_3;

typedef struct st_58ee80_0 {
    char padding_0[52];
    unsigned int field_34;
} st_58ee80_0;

typedef struct st_58ee80_1 {
    char padding_0[52];
    float field_34;
} st_58ee80_1;

extern char nanmask;
extern st_58ee80_2 *pmove;

st_58ee80_0 * PM_CheckVelocity(void)
{
    int idx;  // edi
    int index;  // edi
    unsigned int v4;  // edi
    st_58ee80_2 *v5;  // edx
    st_58ee80_1 *v6;  // eax
    double v7;  // mm7
    int v0;  // [bp-0x8]

    v0 = 0;
    do
    {
        idx = v0;
        if ((*(int *)&pmove->padding_0[92 + 4 * idx] & *(int *)&nanmask) == *(int *)&nanmask)
        {
            pmove->field_4f568("PM  Got a NaN velocity %i\n", idx);
            *(unsigned int *)&pmove->padding_0[92 + 4 * idx] = 0;
        }
        index = v0;
        if ((*(int *)&pmove->padding_0[56 + 4 * index] & *(int *)&nanmask) == *(int *)&nanmask)
        {
            pmove->field_4f568("PM  Got a NaN origin on %i\n", index);
            *(unsigned int *)&pmove->padding_0[56 + 4 * index] = 0;
        }
        v4 = v0 * 4;
        if (*(float *)&pmove->padding_0[92 + v4] > pmove->field_4f4f0->field_34)
        {
            pmove->field_4f564("PM  Got a velocity too high on %i\n", v0);
            v5 = pmove;
            v6 = pmove->field_4f4f0;
            v7 = v6->field_34;
        }
        else
        {
            v4 = v0 * 4;
            if (-pmove->field_4f4f0->field_34 <= *(float *)&pmove->padding_0[92 + v4])
                continue;
            pmove->field_4f564("PM  Got a velocity too low on %i\n", v0);
            v5 = pmove;
            v6 = pmove->field_4f4f0;
            v7 = -v6->field_34;
        }
        *(float *)&v5->padding_0[92 + v4] = (float)v7;
    } while ((v0 += 1, v0 <= 2));
    return v6;
}

