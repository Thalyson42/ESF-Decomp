// frame_init @0x1961b4 size=306
typedef struct st_5961b4_0 {
    unsigned int field_0;
    unsigned int field_4;
    int field_8;
    struct st_5961b4_1 *field_c;
    int field_10;
} st_5961b4_0;

typedef struct st_5961b4_1 {
    int field_0;
} st_5961b4_1;

int frame_init(st_5961b4_0 *a0)
{
    unsigned int *v12;  // esi
    unsigned int v13;  // esi
    st_5961b4_0 *v14;  // edx
    unsigned int *v15;  // esi
    st_5961b4_0 *v16;  // edx
    int v0;  // [bp-0x4c]
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x44]
    char *v3;  // [bp-0x38]
    char *v4;  // [bp-0x34]
    int count;  // [bp-0x30]
    unsigned int v6;  // [bp-0x2c]
    unsigned int v7;  // [bp-0x28]
    char v8;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x1c]
    unsigned int v11;  // [bp-0x18]

    sub_5961b0(v0, v1, v2);
    if (a0->field_c)
    {
        v12 = a0->field_c;
        count = 0;
        v3 = &v8;
        if (*(int *)a0->field_c)
        {
            do
            {
                count += count_fdes(*v12);
                v12 += 1;
            } while (*v12);
        }
    }
    else
    {
        count = count_fdes(a0->field_8);
        v3 = &v8;
    }
    a0->field_10 = count;
    v13 = count * 4;
    v8 = malloc@GLIBC_2.0(v13);
    v14 = a0;
    v10 = malloc@GLIBC_2.0(v13);
    v9 = 0;
    v11 = 0;
    v6 = 0xffffffff;
    v7 = 0;
    if (v14->field_c)
    {
        v15 = v14->field_c;
        if (*(int *)v14->field_c)
        {
            v4 = &v7;
            do
            {
                add_fdes(*v15, v3, &v6, v4);
                v15 += 1;
            } while (*v15);
        }
    }
    else
    {
        add_fdes(a0->field_8, v3, &v6, &v7);
    }
    v16 = a0;
    v16->field_c = end_fde_sort(v3, count);
    v16->field_0 = v6;
    v16->field_4 = v7;
    return v7;
}

