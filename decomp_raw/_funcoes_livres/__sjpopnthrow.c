// __sjpopnthrow @0x194c50 size=230
typedef struct st_594c50_5 {
    char padding_0[229683];
    struct st_594c50_1 *field_38133;
} st_594c50_5;

typedef struct st_594c50_0 {
    char padding_0[229779];
    struct st_594c50_1 *field_38193;
} st_594c50_0;

typedef struct st_594c50_1 {
    unsigned int field_0;
} st_594c50_1;

typedef struct st_594c50_4 {
    char padding_0[4];
    struct st_594c50_3 *field_4;
} st_594c50_4;

typedef struct st_594c50_3 {
    unsigned int field_0;
    struct st_594c50_2 *field_4;
} st_594c50_3;

typedef struct st_594c50_2 {
    unsigned int field_0;
    struct st_594c50_1 *field_4;
    unsigned int field_8;
} st_594c50_2;

void __sjpopnthrow(void)
{
    st_594c50_0 *v10;  // ebx
    int v11;  // esi
    int v12;  // edi
    unsigned int v13;  // ebx
    st_594c50_4 *v14;  // eax
    st_594c50_3 *v15;  // eax
    st_594c50_2 *v16;  // eax
    unsigned int *v17;  // ecx
    unsigned int v18;  // edx
    st_594c50_3 *v0;  // [bp-0x650]
    st_594c50_2 **v1;  // [bp-0x64c]
    st_594c50_3 **v2;  // [bp-0x648]
    st_594c50_3 *v3;  // [bp-0x644], Other Possible Types: char
    unsigned int v4;  // [bp-0x640]
    char *v5;  // [bp-0x63c]
    st_594c50_5 *v6;  // [bp-0x638]
    unsigned int v7;  // [bp-0x634]
    char v8;  // [bp-0x4]

    sub_594c4c(v10, v11, v12);
    v13 = &v10[2].padding_0[60235];
    v14 = (*(int *)(v13 - 290024))(v10, v11, v12);
    v2 = &v14->field_4;
    v15 = v14->field_4;
    v1 = &v15->field_4;
    if (v15->field_4)
    {
        v0 = &v3;
        v4 = 0;
        v3 = v15;
        v5 = &v8;
        v6 = v13 - 519707;
        v7 = &v10;
        *v2 = v0;
        if (*v1)
        {
            do
            {
                v16 = *v1;
                v17 = v16->field_4;
                v18 = v16->field_8;
                *v1 = v16->field_0;
                v17(v18, 2);
            } while (*v1);
        }
        *v2 = v3;
    }
    *v2 = *v2->field_0;
    sub_48a020();
}

