// TaskThink__12CBlindedTask @0x183ef0 size=229
typedef struct st_583ef0_1 {
    char padding_0[836];
    unsigned int field_344;
    char padding_348[1716];
    char field_9fc;
    char padding_9fd[7];
    struct st_583ef0_0 *field_a04;
} st_583ef0_1;

typedef struct st_583ef0_0 {
    char padding_0[38];
    short field_26;
} st_583ef0_0;

typedef struct st_583ef0_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_583ef0_1 *field_8;
} st_583ef0_2;

typedef struct st_583ef0_3 {
    unsigned int field_0;
} st_583ef0_3;

extern st_583ef0_3 *g_616928;

st_583ef0_1 * TaskThink__12CBlindedTask(st_583ef0_2 *a0)
{
    st_583ef0_1 *v1;  // eax
    unsigned int v2;  // eax
    st_583ef0_1 *v3;  // eax
    st_583ef0_1 *v4;  // eax
    st_583ef0_1 *v5;  // eax
    unsigned int v0;  // [bp-0x28]

    v1 = a0->field_8;
    if (!v1->field_344)
    {
        a0->field_4 = 2;
        return v1;
    }
    sub_488e30(a0->field_8, 8);
    v2 = g_616928(0, 2);
    if (v2)
    {
        if (v2 != 1)
            goto LABEL_583f71;
        v0 = 4;
    }
    else
    {
        v0 = 2;
    }
    sub_488e30(a0->field_8);
LABEL_583f71:
    v3 = g_616928(1, 1000);
    if (v3 > 0x27)
    {
        return v3;
    }
    else if (a0->field_8->field_9fc <= 2)
    {
        v4 = g_616928(1, 100);
        v5 = a0->field_8->field_a04->field_26;
        if (v4 >= v5)
            return v5;
        return sub_488180(a0->field_8);
    }
    else
    {
        return a0->field_8;
    }
}

