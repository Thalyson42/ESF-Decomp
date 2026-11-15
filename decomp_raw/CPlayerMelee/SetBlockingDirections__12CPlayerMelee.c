// SetBlockingDirections__12CPlayerMelee @0x1056a0 size=160
typedef struct st_5056a0_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[8];
    unsigned int field_10;
} st_5056a0_1;

typedef struct st_5056a0_0 {
    char padding_0[332];
    struct st_5056a0_1 *field_14c;
} st_5056a0_0;

unsigned int SetBlockingDirections__12CPlayerMelee(st_5056a0_0 *a0)
{
    unsigned int v1;  // eax
    unsigned int *v2;  // edx
    unsigned int v0;  // [bp-0x8]

    v0 = 0;
    v1 = sub_48e0d0(a0, &v0);
    v2 = a0->field_14c;
    if (!v2)
    {
        if (v0)
            return sub_48d920(a0, v0);
        return v1;
    }
    else
    {
        if (!v0)
            return sub_48d690(a0, v2);
        if (!v2[4] && v2[1] == v0)
            return sub_48aca0(a0, v2);
        sub_48d690(a0, v2);
        return sub_48d920(a0, v0);
    }
}

