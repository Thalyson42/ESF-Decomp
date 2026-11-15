// __throw_type_match_rtti @0x197068 size=1172
typedef struct st_597068_6 {
    char padding_0[8];
    struct st_597068_2 *field_8;
    unsigned int field_c;
} st_597068_6;

typedef struct st_597068_0 {
    char padding_0[510566];
    char field_7ca66;
    char padding_7ca67[8327];
    int field_7eaee;
    char padding_7eaf2[424];
    int field_7ec9a;
    char padding_7ec9e[24];
    int field_7ecb6;
    char padding_7ecba[12];
    unsigned int field_7ecc6;
    char padding_7ecca[2160];
    unsigned int field_7f53a;
} st_597068_0;

typedef struct st_597068_1 {
    unsigned int field_0;
    int field_4;
} st_597068_1;

typedef struct st_597068_2 {
    char padding_0[4];
    struct st_597068_1 *field_4;
} st_597068_2;

typedef struct st_597068_5 {
    char padding_0[8];
    struct st_597068_2 *field_8;
} st_597068_5;

unsigned int __throw_type_match_rtti(st_597068_2 *a0, st_597068_2 *a1, unsigned int a2)
{
    st_597068_0 *v11;  // ebx
    unsigned int *v12;  // ebx
    st_597068_5 *v21;  // eax
    st_597068_2 *v22;  // edi
    st_597068_6 *v23;  // eax
    unsigned int v24;  // esi
    st_597068_6 *v25;  // eax
    unsigned int v28;  // esi
    unsigned int v29;  // eax
    st_597068_2 *v13;  // edx
    st_597068_5 *v14;  // eax
    st_597068_2 *v15;  // edi
    st_597068_6 *v16;  // eax
    unsigned int v17;  // esi
    st_597068_6 *v18;  // eax
    st_597068_2 *v19;  // edx
    st_597068_5 *v20;  // esi
    int v0;  // [bp-0x3c]
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x34]
    char v3;  // [bp-0x25]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0x18]
    st_597068_2 *v7;  // [bp-0x14]
    unsigned int v8;  // [bp-0x10]
    st_597068_5 *v9;  // [bp-0xc]
    unsigned int v10;  // [bp-0x8]

    sub_597064(v0, v1, v2);
    v12 = &v11->field_7ca66;
    if ((char)type_info::__eq(a0, a1))
        return a2;
    v10 = 0;
    if (a1 && (v13 = __dynamic_cast(a1->field_4->field_4, v12[2082], 1, &a1->padding_0[a1->field_4->field_0], v12[2200], a1), v13))
    {
        a2 = v13->field_4[1].field_4(v13, a0, 1, a2, 0, 0);
        goto LABEL_5974ec;
    }
    if (a1 && (v8 = v12[2200], v9 = __dynamic_cast(a1->field_4->field_4, v12[2741], 1, &a1->padding_0[a1->field_4->field_0], v12[2200], a1), v9 && a0 && (v14 = __dynamic_cast(a0->field_4->field_4, v12[2741], 1, &a0->padding_0[a0->field_4->field_0], v8, a0), v14)))
    {
        v15 = v9->field_8;
        v7 = v14->field_8;
        if (v15 && !(v16 = __dynamic_cast(v15->field_4->field_4, v12[2189], 1, &v15->padding_0[v15->field_4->field_0], v8, v15), !v16))
        {
            v17 = v16->field_c;
            v15 = v16->field_8;
        }
        else
        {
            v17 = 0;
        }
        if (v7 && !(v18 = __dynamic_cast(v7->field_4->field_4, v12[2189], 1, &v7->padding_0[v7->field_4->field_0], v12[2200], v7), !v18))
        {
            v6 = v18->field_c;
            v7 = v18->field_8;
        }
        else
        {
            v6 = 0;
        }
        if ((int)(v17 & 1) <= (int)(v6 & 1) && (int)(v17 & 2) <= (int)(v6 & 2))
        {
            if ((char)type_info::__eq(v7, v15))
            {
LABEL_5974e9:
LABEL_5974ec:
                v10 = a2;
            }
            else if ((char)type_info::__eq(v7, __tfv()) && (!v15 || !__dynamic_cast(v15->field_4->field_4, v12[2196], 1, &v15->padding_0[v15->field_4->field_0], v12[2200], v15)))
            {
                v10 = a2;
            }
            else if (v15 && (v19 = __dynamic_cast(v15->field_4->field_4, v12[2082], 1, &v15->padding_0[v15->field_4->field_0], v12[2200], v15), v19))
            {
                a2 = v19->field_4[1].field_4(v19, v7, 1, a2, 0, 0);
                goto LABEL_5974ec;
            }
            else if (v15 && (v5 = v12[2200], v4 = v12[2741], v20 = __dynamic_cast(v15->field_4->field_4, v12[2741], 1, &v15->padding_0[v15->field_4->field_0], v12[2200], v15), v20 && v7 && (v21 = __dynamic_cast(v7->field_4->field_4, v4, 1, &v7->padding_0[v7->field_4->field_0], v5, v7), v21 = v21, v21)))
            {
                v3 = (char)v6 & 1;
                while (1)
                {
                    v7 = v21->field_8;
                    v22 = v20->field_8;
                    if (v22 && !(v23 = __dynamic_cast(v22->field_4->field_4, v12[2189], 1, &v22->padding_0[v22->field_4->field_0], v12[2200], v22), !v23))
                    {
                        v24 = v23->field_c;
                        v22 = v23->field_8;
                    }
                    else
                    {
                        v24 = 0;
                    }
                    if (v7 && !(v25 = __dynamic_cast(v7->field_4->field_4, v12[2189], 1, &v7->padding_0[v7->field_4->field_0], v12[2200], v7), !v25))
                    {
                        v6 = v25->field_c;
                        v7 = v25->field_8;
                    }
                    else
                    {
                        v6 = 0;
                    }
                    if ((int)(v24 & 1) > (int)(v6 & 1) || (v28 = v24 & 2, v29 = v6 & 2, (int)(v24 & 2) > (int)(v6 & 2) || !v3 && ((int)(v24 & 1) < (int)(v6 & 1) || (int)(v24 & 2) < (int)(v6 & 2))))
                        break;
                    if ((char)type_info::__eq(v7, v22))
                        goto LABEL_5974e9;
                    v21 = (!v7 ? NULL : __dynamic_cast(v7->field_4->field_4, v12[2741], 1, &v7->padding_0[v7->field_4->field_0], v12[2200], v7));
                    v21 = v21;
                    v20 = (!v22 ? NULL : __dynamic_cast(v22->field_4->field_4, v12[2741], 1, &v22->padding_0[v22->field_4->field_0], v12[2200], v22));
                    if (!v21 || !v20)
                        break;
                    if (!((char)v6 & 1))
                        v3 = 0;
                }
            }
        }
    }
    return v10;
}

