// CheckCreater__12CPlayerMelee @0x101f90 size=101
typedef struct st_501f90_1 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[240];
    struct st_501f90_2 *field_124;
} st_501f90_1;

typedef struct st_501f90_2 {
    struct st_501f90_0 *field_0;
} st_501f90_2;

typedef struct st_501f90_0 {
    char padding_0[421];
    char field_1a5;
} st_501f90_0;

st_501f90_0 * CheckCreater__12CPlayerMelee(st_501f90_1 *a0)
{
    st_501f90_0 *v0;  // eax

    if (*(char *)(*(int *)a0->field_124 + 421) & 2)
    {
        if (!a0->field_30)
        {
            a0->field_30 = 1;
            return CPlayerMelee::MakeCreater(a0);
        }
    }
    else
    {
        if (!a0->field_30)
            return *(int *)a0->field_124;
    }
    v0 = *(int *)a0->field_124;
    if (!(v0->field_1a5 & 2))
        a0->field_30 = 0;
    return v0;
}

