// __sjthrow @0x194b34 size=279
typedef struct st_594b34_3 {
    unsigned int field_0;
    struct st_594b34_2 *field_4;
    char padding_8[4];
    unsigned int field_c;
} st_594b34_3;

typedef struct st_594b34_5 {
    char padding_0[229955];
    struct st_594b34_1 *field_38243;
} st_594b34_5;

typedef struct st_594b34_0 {
    char padding_0[230063];
    struct st_594b34_1 *field_382af;
} st_594b34_0;

typedef struct st_594b34_1 {
    unsigned int field_0;
} st_594b34_1;

typedef struct st_594b34_6 {
    struct st_594b34_3 *field_0;
    unsigned int field_4;
} st_594b34_6;

typedef struct st_594b34_2 {
    unsigned int field_0;
    struct st_594b34_1 *field_4;
    unsigned int field_8;
} st_594b34_2;

typedef struct st_594b34_4 {
    char padding_0[4];
    struct st_594b34_3 *field_4;
    unsigned int field_8;
} st_594b34_4;

typedef struct st_594b34_7 {
    struct st_594b34_2 *field_0;
    char padding_4[4];
    unsigned int field_8;
} st_594b34_7;

int __sjthrow(void)
{
    st_594b34_0 *v11;  // ebx
    int v12;  // esi
    int v13;  // edi
    unsigned int v14;  // ebx
    st_594b34_3 *v15;  // eax
    st_594b34_2 *v16;  // eax
    unsigned int *v17;  // ecx
    unsigned int v18;  // edx
    st_594b34_3 *v19;  // eax
    st_594b34_3 *v0;  // [bp-0x654]
    st_594b34_7 *v1;  // [bp-0x650]
    st_594b34_6 *v2;  // [bp-0x64c]
    st_594b34_4 *v3;  // [bp-0x648]
    st_594b34_3 *v4;  // [bp-0x644], Other Possible Types: char
    unsigned int v5;  // [bp-0x640]
    char *v6;  // [bp-0x63c]
    st_594b34_5 *v7;  // [bp-0x638]
    unsigned int v8;  // [bp-0x634]
    char v9;  // [bp-0x4]

    sub_594b30(v11, v12, v13);
    v14 = &v11[2].padding_0[59951];
    v3 = (*(int *)(v14 - 290024))(v11, v12, v13);
    v2 = &v3->field_4;
    v15 = v3->field_4;
    v1 = &v15->field_4;
    if (v15->field_4)
    {
        v0 = &v4;
        v5 = 0;
        v4 = v15;
        v6 = &v9;
        v7 = v14 - 519979;
        v8 = &v11;
        v2->field_0 = v0;
        if (v1->field_0)
        {
            do
            {
                v16 = v1->field_0;
                v17 = v16->field_4;
                v18 = v16->field_8;
                v1->field_0 = v16->field_0;
                v17(v18, 2);
            } while (v1->field_0);
        }
        v2->field_0 = v4;
    }
    if (!v3->field_8 || !v2->field_0->field_0)
        __terminate();
    v19 = v2->field_0;
    v2->field_0 = v19->field_0;
    goto *((void *)(v19->field_c));
}

