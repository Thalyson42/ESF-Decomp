// Clone__13CMultiManager @0x12b6a0 size=155
typedef struct st_52b6a0_1 {
    struct st_52b6a0_0 *field_0;
    char padding_4[256];
    unsigned int field_104;
    char padding_108[8];
    unsigned int field_110;
    char field_114;
    char padding_115[59];
    unsigned int field_150;
} st_52b6a0_1;

typedef struct st_52b6a0_0 {
    unsigned int field_0;
    char field_4;
    char padding_5[414];
    char field_1a3;
    char padding_1a4[100];
    unsigned int field_208;
} st_52b6a0_0;

st_52b6a0_1 * Clone__13CMultiManager(st_52b6a0_1 *a0)
{
    st_52b6a0_1 *v1;  // eax
    st_52b6a0_0 *iter;  // eax
    unsigned int v11;  // ecx
    unsigned int v3;  // edx
    unsigned int *i;  // esi
    unsigned int v5;  // ecx
    unsigned int *node;  // edi
    unsigned int *j;  // eax
    unsigned int v8;  // ecx
    unsigned int *iter1;  // edi
    unsigned int *k;  // esi
    st_52b6a0_1 *v0;  // [bp-0x8]

    v1 = GetClassPtr__H1Z13CMultiManager_PX01_PX01(0);
    v0 = v1;
    iter = v1->field_0;
    v3 = v1->field_0->field_208;
    i = &a0->field_0->field_0;
    for (v5 = 169; v5; i += 1)
    {
        v5 -= 1;
        iter->field_0 = *i;
        iter = &iter->field_4;
    }
    v0->field_0->field_208 = v3;
    v0->field_0->field_1a3 = v0->field_0->field_1a3 | 128;
    v0->field_104 = a0->field_104;
    node = &v0->field_110;
    j = &a0->field_110;
    for (v8 = 16; v8; j += 1)
    {
        v8 -= 1;
        *node = *j;
        node += 1;
    }
    iter1 = &v0->field_150;
    k = &a0->field_150;
    for (v11 = 16; v11; k += 1)
    {
        v11 -= 1;
        *iter1 = *k;
        iter1 += 1;
    }
    return v0;
}

