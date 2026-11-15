// AddMove__12CPlayerMeleeiiie @0x103220 size=217
typedef struct st_503220_2 {
    char padding_0[60];
    unsigned int field_3c;
    struct st_503220_0 *field_40;
} st_503220_2;

typedef struct st_503220_0 {
    char padding_0[72];
    struct st_503220_1 *field_48;
} st_503220_0;

typedef struct st_503220_1 {
    int field_0;
    unsigned int field_4;
    char padding_8[4];
    char field_c;
    char padding_d[59];
    unsigned int field_48;
    struct st_503220_0 *field_4c;
} st_503220_1;

st_503220_1 ** AddMove__12CPlayerMeleeiiie(st_503220_1 **a0, unsigned int idx, unsigned int a2, int a3, uint128_t a4, unsigned int a5)
{
    st_503220_1 *v3;  // ecx
    int *v4;  // edi
    unsigned int *v5;  // esi
    unsigned int v6;  // edi
    st_503220_0 **v7;  // ecx
    st_503220_1 **v8;  // edx
    st_503220_1 *v9;  // esi
    st_503220_1 **v10;  // eax
    st_503220_2 *v0;  // [bp-0x10]
    st_503220_1 *v1;  // [bp-0xc]
    int i;  // [bp-0x8]

    if (a3 <= 0)
        return v10;
    v1 = __builtin_new(80);
    v1->field_0 = a3;
    v3 = v1;
    v3->field_4 = a2;
    v3->field_4c = NULL;
    v3->field_48 = 0;
    v4 = &a4;
    i = 0;
    if (i < a3)
    {
        v0 = &v3->field_c;
        do
        {
            v5 = i * 8;
            v6 = v4 + 1;
            *(int *)(v5 + v0) = *(int *)(v6 - 4);
            v4 = v6 + 4;
            *(unsigned int *)(v5 + v1 + 8) = CPlayerMelee::DirectionsToFlags(a0, *(int *)((char *)v4 - 4));
            i += 1;
        } while (i < a3);
    }
    v7 = idx * 4;
    v8 = a0 + 84;
    if (*(int *)(v7 + v8))
    {
        v9 = v1;
        *(st_503220_1 **)(*(int *)(v7 + v8) + 72) = v9;
        v9->field_4c = *(int *)(v7 + v8);
    }
    a0[84 + idx] = v1;
    return a0 + 84;
}

