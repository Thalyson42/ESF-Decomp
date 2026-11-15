// __10CChatClass @0x144530 size=411
typedef struct st_544530_0 {
    struct st_544530_1 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_544530_0;

typedef struct st_544530_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_544530_1;

typedef struct st_544530_2 {
    char padding_0[840];
    struct st_544530_0 *field_348;
    struct st_544530_1 *field_34c;
    struct st_544530_1 *field_350;
    struct st_544530_1 *field_354;
} st_544530_2;

st_544530_2 * __10CChatClass(st_544530_2 *a0)
{
    unsigned int *v4;  // eax
    unsigned int *v5;  // eax
    unsigned int *v6;  // eax
    unsigned int *v7;  // eax
    char v8;  // dl
    char v9;  // dl
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    char v2;  // [bp-0x9]
    st_544530_0 *v3;  // [bp-0x8]

    v3 = __builtin_new(20);
    v2 = 1;
    v4 = __builtin_new(8);
    *v4 = 0;
    v4[1] = 0;
    v3->field_0 = v4;
    v3->field_4 = 0;
    v3->field_8 = 3;
    v3->field_c = 0;
    v3->field_10 = 0;
    v2 = 0;
    a0->field_348 = v3;
    if (v2)
        __builtin_delete(v3);
    v5 = __builtin_new(8);
    *v5 = 0;
    v5[1] = 0;
    a0->field_34c = v5;
    v6 = __builtin_new(8);
    *v6 = 0;
    v6[1] = 0;
    a0->field_350 = v6;
    v7 = __builtin_new(8);
    *v7 = 0;
    v7[1] = 0;
    a0->field_354 = v7;
    memset@GLIBC_2.0(a0, 0, 840);
    v8 = 0;
    v1 = a0 + 1;
    v0 = &a0[1].padding_0[40];
    do
    {
        v9 = v8;
        v10 = v9 * 4;
        *(unsigned int *)(v10 + v1) = 0;
        *(unsigned int *)(v10 + v0) = 0;
        *(unsigned int *)&a0[1].padding_0[20 + v10] = 0;
        v8 = v9 + 1;
    } while (v9 + 1 <= 4);
    return a0;
}

