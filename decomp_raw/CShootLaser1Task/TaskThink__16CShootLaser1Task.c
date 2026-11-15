// TaskThink__16CShootLaser1Task @0x186000 size=242
typedef struct st_586000_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_586000_1 *field_8;
    struct st_586000_3 *field_c;
    struct st_586000_4 *field_10;
    char padding_14[4];
    float field_18;
} st_586000_2;

typedef struct st_586000_1 {
    char padding_0[588];
    int field_24c;
    char padding_250[2404];
    float field_bb4;
} st_586000_1;

typedef struct st_586000_4 {
    struct st_586000_0 *field_0;
} st_586000_4;

typedef struct st_586000_0 {
    char padding_0[421];
    char field_1a5;
} st_586000_0;

typedef struct st_586000_3 {
    char padding_0[480];
    float field_1e0;
    char padding_1e4[252];
    float field_2e0;
} st_586000_3;

typedef struct st_586000_5 {
    unsigned int field_0;
} st_586000_5;

extern st_586000_5 *gpGlobals;

st_586000_0 * TaskThink__16CShootLaser1Task(st_586000_2 *a0)
{
    st_586000_0 *v0;  // eax

    if (a0->field_10 && a0->field_18 >= *(float *)gpGlobals && (double)a0->field_8->field_24c > a0->field_c->field_1e0 && 150.0 <= a0->field_c->field_2e0)
    {
        if (!(char)sub_48bf70(a0->field_8, a0->field_10))
        {
            v0 = *(int *)a0->field_10;
            v0->field_1a5 = v0->field_1a5 & 239;
        }
        else
        {
            sub_48d0d0(a0->field_8);
            *(char *)(*(int *)a0->field_10 + 421) = *(char *)(*(int *)a0->field_10 + 421) | 16;
            sub_4888e0(a0->field_8, a0->field_10);
            if (a0->field_8->field_bb4 > *(float *)gpGlobals)
                return v0;
            a0->field_8->field_bb4 = (float)(0.1 + *(float *)gpGlobals);
            return v0;
        }
    }
    a0->field_4 = 2;
    return v0;
}

