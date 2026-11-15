// PM_CatagorizeTextureType @0x18e8a0 size=242
typedef struct st_58e8a0_2 {
    char field_0;
    char field_1;
    char field_2;
    char padding_3[53];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[156];
    unsigned int field_e0;
    char padding_e4[12];
    char field_f0;
    char padding_f1[11];
    char field_fc;
    char padding_fd[243];
    char field_1f0;
    char padding_1f1[324551];
    struct st_58e8a0_1 *field_4f5b8;
} st_58e8a0_2;

typedef struct st_58e8a0_1 {
    unsigned int field_0;
} st_58e8a0_1;

typedef struct st_58e8a0_0 {
    char field_0;
    char field_1;
    char field_2;
    char padding_3[53];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[156];
    unsigned int field_e0;
    char padding_e4[12];
    char field_f0;
    char padding_f1[11];
    char field_fc;
    char padding_fd[243];
    char field_1f0;
    char padding_1f1[324551];
    struct st_58e8a0_1 *field_4f5b8;
} st_58e8a0_0;

extern st_58e8a0_0 *pmove;

st_58e8a0_2 * PM_CatagorizeTextureType(void)
{
    st_58e8a0_2 *iter;  // eax
    char v8;  // al
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    float v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v3 = pmove->field_38;
    v4 = pmove->field_3c;
    v5 = pmove->field_40;
    v0 = pmove->field_38;
    v1 = pmove->field_3c;
    v2 = pmove->field_40;
    v2 = (float)(pmove->field_40 - 64.0);
    pmove->field_f0 = 0;
    pmove->field_1f0 = 67;
    iter = pmove->field_4f5b8(pmove->field_e0, &v3, &v0);
    if (!iter)
        return iter;
    if (iter->field_0 == 45 || iter->field_0 == 43)
        iter = &iter->field_2;
    if (iter->field_0 == 123)
    {
        iter = &iter->field_1;
    }
    else if (iter->field_0 == 33)
    {
        iter = &iter->field_1;
    }
    else if (iter->field_0 == 126)
    {
        iter = &iter->field_1;
    }
    else if (iter->field_0 == 32)
    {
        iter = &iter->field_1;
    }
    strcpy@GLIBC_2.0(&pmove->field_f0, iter);
    pmove->field_fc = 0;
    v8 = PM_FindTextureType(&pmove->field_f0);
    pmove->field_1f0 = v8;
    return pmove;
}

