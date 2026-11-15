// __rethrow @0x1954a4 size=233
typedef struct st_5954a4_4 {
    char padding_0[227452];
    struct st_5954a4_1 *field_3787c;
} st_5954a4_4;

typedef struct st_5954a4_5 {
    char padding_0[227553];
    struct st_5954a4_1 *field_378e1;
} st_5954a4_5;

typedef struct st_5954a4_0 {
    char padding_0[227647];
    struct st_5954a4_1 *field_3793f;
} st_5954a4_0;

typedef struct st_5954a4_1 {
    unsigned int field_0;
} st_5954a4_1;

typedef struct st_5954a4_2 {
    char field_0;
} st_5954a4_2;

typedef struct st_5954a4_3 {
    st_5954a4_2 field_0;
} st_5954a4_3;

unsigned int * __rethrow(unsigned int a0)
{
    st_5954a4_0 *v11;  // ebx
    unsigned int v12;  // ebx
    int v0;  // [bp-0xbc]
    int v1;  // [bp-0xb8]
    int v2;  // [bp-0xb4]
    char *v3;  // [bp-0x9c]
    st_5954a4_4 *v4;  // [bp-0x98]
    st_5954a4_5 *v5;  // [bp-0x94]
    char *v6;  // [bp-0x90], Other Possible Types: st_5954a4_3 **
    unsigned int *v7;  // [bp-0x8c]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x84]
    st_5954a4_4 *v10;  // [bp+0x0], Other Possible Types: int

    sub_5954a0(v0, v1, v2);
    v12 = &v11[2].padding_0[62367];
    v7 = (*(int *)(v12 - 290024))(v0, v1, v2);
    v6 = &v9;
    if (!v7[2])
        sub_48d640();
    v7[3] = a0;
    v5 = v12 - 517577;
    v3 = &v8;
    v4 = v12 - 517476;
    v6 = sub_489620(v5, v6);
    if (!v6)
        sub_48d640();
    *v6 = &a0;
    throw_helper(v7, v10 - 1, v6, v3);
    v10 = v4;
    return v7;
}

