// Direction__6CBlood @0xb5570 size=83
typedef struct st_4b5570_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[336];
    char field_15c;
} st_4b5570_1;

typedef struct st_4b5570_0 {
    char padding_0[68];
    float field_44;
    float field_48;
    float field_4c;
    char padding_50[336];
    char field_1a0;
} st_4b5570_0;

unsigned int * Direction__6CBlood(void)
{
    st_4b5570_1 *v2;  // edx
    unsigned int *idx;  // [bp+0x4]
    st_4b5570_0 **v1;  // [bp+0x8]

    if (!(*v1->field_1a0 & 1))
    {
        v2 = &*v1->field_44;
        *(float *)idx = *v1->field_44;
        *(float *)&idx[1] = *(float *)&v2->field_4;
        *(float *)&idx[2] = *(float *)&v2->field_8;
        return idx;
    }
    UTIL_RandomBloodVector(idx);
    return idx;
}

