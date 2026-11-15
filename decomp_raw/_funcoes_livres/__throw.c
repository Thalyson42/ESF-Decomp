// __throw @0x1953b8 size=229
typedef struct st_5953b8_3 {
    char padding_0[227694];
    struct st_5953b8_1 *field_3796e;
} st_5953b8_3;

typedef struct st_5953b8_4 {
    char padding_0[227801];
    struct st_5953b8_1 *field_379d9;
} st_5953b8_4;

typedef struct st_5953b8_0 {
    char padding_0[227883];
    struct st_5953b8_1 *field_37a2b;
} st_5953b8_0;

typedef struct st_5953b8_1 {
    unsigned int field_0;
} st_5953b8_1;

typedef struct st_5953b8_5 {
    char field_0;
} st_5953b8_5;

typedef struct st_5953b8_2 {
    char padding_0[8];
    unsigned int field_8;
} st_5953b8_2;

st_5953b8_2 * __throw(void)
{
    st_5953b8_0 *v12;  // ebx
    unsigned int v13;  // ebx
    int v0;  // [bp-0xbc]
    int v1;  // [bp-0xb8]
    int v2;  // [bp-0xb4]
    st_5953b8_3 *v3;  // [bp-0x9c]
    st_5953b8_4 *v4;  // [bp-0x98]
    char *v5;  // [bp-0x94]
    char *v6;  // [bp-0x90], Other Possible Types: st_5953b8_5 **
    st_5953b8_2 *v7;  // [bp-0x8c]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x84]
    st_5953b8_3 *v10;  // [bp+0x0], Other Possible Types: int
    unsigned int v11;  // [bp+0x4]

    sub_5953b4(v0, v1, v2);
    v13 = &v12[2].padding_0[62131];
    v7 = (*(int *)(v13 - 290024))(v0, v1, v2);
    v4 = v13 - 517825;
    v6 = &v9;
    v5 = &v8;
    v3 = v13 - 517718;
    if (!v7->field_8)
        sub_48d640();
    v6 = sub_489620(v4, v6);
    if (!v6)
        sub_48d640();
    *v6 = &v11;
    throw_helper(v7, v10 - 1, v6, v5);
    v10 = v3;
    return v7;
}

