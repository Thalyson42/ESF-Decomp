// StartTurbo__11CBasePlayer @0xf08f0 size=162
typedef struct st_4f08f0_1 {
    char padding_0[140];
    struct st_4f08f0_2 *field_8c;
} st_4f08f0_1;

typedef struct st_4f08f0_3 {
    struct st_4f08f0_0 *field_0;
    char padding_4[92];
    struct st_4f08f0_1 *field_60;
    char padding_64[704];
    unsigned int field_324;
    unsigned int field_328;
    char padding_32c[8];
    unsigned int field_334;
    char padding_338[8];
    unsigned int field_340;
    char padding_344[32];
    unsigned int field_364;
    char padding_368[20];
    unsigned int field_37c;
    char padding_380[1004];
    struct st_4f08f0_0 *field_76c;
    unsigned int field_770;
} st_4f08f0_3;

typedef struct st_4f08f0_2 {
    unsigned int field_0;
} st_4f08f0_2;

typedef struct st_4f08f0_0 {
    char padding_0[423];
    char field_1a7;
} st_4f08f0_0;

st_4f08f0_0 * StartTurbo__11CBasePlayer(st_4f08f0_3 *a0)
{
    st_4f08f0_0 *v0;  // eax
    st_4f08f0_0 *v1;  // eax
    st_4f08f0_0 *v2;  // eax

    v0 = a0->field_0;
    if (v0->field_1a7 & 4)
    {
        return v0;
    }
    else if (a0->field_364)
    {
        return v0;
    }
    else if (a0->field_324)
    {
        return v0;
    }
    else if (!a0->field_328)
    {
        v1 = a0->field_60->field_8c(a0);
        if (!v1)
        {
            return v1;
        }
        else if (a0->field_334)
        {
            return v1;
        }
        else if (a0->field_340)
        {
            return v1;
        }
        else if (a0->field_770)
        {
            return v1;
        }
        else if (!a0->field_37c)
        {
            a0->field_324 = 1;
            if (a0->field_76c)
                return v1;
            v2 = sub_4884f0(a0);
            a0->field_76c = v2;
            return v2;
        }
        else
        {
            return v1;
        }
    }
    else
    {
        return v0;
    }
}

