// CheckSubModelStatus__11CBasePlayer @0xf61c0 size=193
typedef struct st_4f61c0_1 {
    struct st_4f61c0_0 *field_0;
    char padding_4[808];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[48];
    unsigned int field_364;
    char padding_368[540];
    struct st_4f61c0_0 *field_584;
    struct st_4f61c0_0 *field_588;
    char padding_58c[12];
    unsigned int field_598;
    char padding_59c[260];
    unsigned int field_6a0;
    char padding_6a4[204];
    unsigned int field_770;
} st_4f61c0_1;

typedef struct st_4f61c0_0 {
    char padding_0[276];
    struct st_4f61c0_0 *field_114;
} st_4f61c0_0;

typedef struct st_4f61c0_2 {
    float field_0;
} st_4f61c0_2;

extern st_4f61c0_2 *gpGlobals;

st_4f61c0_0 * CheckSubModelStatus__11CBasePlayer(st_4f61c0_1 *a0)
{
    st_4f61c0_0 *v1;  // eax

    if (*(float *)&a0->field_598 != 0.0f)
    {
        if (*(float *)&a0->field_598 > *(float *)gpGlobals)
            goto LABEL_4f621d;
        a0->field_588 = a0->field_584;
        *(float *)&a0->field_598 = 0.0f;
        a0->field_584 = NULL;
    }
    else
    {
LABEL_4f621d:
    }
    if (a0->field_6a0 && (a0->field_330 || a0->field_32c || a0->field_364 || a0->field_770))
    {
        v1 = a0->field_0;
        v1->field_114 = NULL;
    }
    else
    {
        v1 = a0->field_0->field_114;
        if (v1 != a0->field_588)
        {
            v1 = a0->field_588;
            a0->field_0->field_114 = v1;
        }
    }
    return v1;
}

