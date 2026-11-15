// SetToggleState__8CRotDoori @0xad230 size=107
typedef struct st_4ad230_1 {
    struct st_4ad230_0 *field_0;
    char padding_4[176];
    unsigned int field_b4;
    unsigned int field_b8;
    unsigned int field_bc;
    unsigned int field_c0;
    unsigned int field_c4;
    unsigned int field_c8;
} st_4ad230_1;

typedef struct st_4ad230_0 {
    char padding_0[8];
    char field_8;
    char padding_9[71];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4ad230_0;

int SetToggleState__8CRotDoori(st_4ad230_1 *a0, unsigned int a1)
{
    st_4ad230_0 *v0;  // edx
    unsigned int v1;  // eax

    if (!a1)
    {
        v0 = a0->field_0;
        v0->field_50 = a0->field_c0;
        v0->field_54 = a0->field_c4;
        v1 = a0->field_c8;
    }
    else
    {
        v0 = a0->field_0;
        v0->field_50 = a0->field_b4;
        v0->field_54 = a0->field_b8;
        v1 = a0->field_bc;
    }
    v0->field_58 = v1;
    return sub_48db50(a0->field_0, &a0->field_0->field_8);
}

