// GoToDB__7CDBTask @0x16c6d0 size=275
typedef struct st_56c6d0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_56c6d0_0;

typedef struct st_56c6d0_2 {
    struct st_56c6d0_0 *field_0;
} st_56c6d0_2;

typedef struct st_56c6d0_1 {
    char padding_0[2864];
    struct st_56c6d0_2 *field_b30;
    char padding_b34[1236];
    unsigned int field_1008;
    char padding_100c[24];
    unsigned int field_1024;
} st_56c6d0_1;

int GoToDB__7CDBTask(float idx)
{
    unsigned int v10;  // eax
    st_56c6d0_1 *v11;  // edx
    st_56c6d0_1 *v12;  // esi
    unsigned int *v13;  // edx
    st_56c6d0_1 *v14;  // eax
    unsigned int v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x5c]
    char v3;  // [bp-0x44], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x24]
    unsigned int v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]

    v10 = sub_48b140(*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2864));
    if (!(char)v10)
    {
        v10 = sub_488740();
        if (!(char)v10)
        {
            v10 = sub_48e050();
            if ((char)v10)
            {
                v11 = *(int *)(*(unsigned int *)&idx + 8);
                if ((*(int *)(*(int *)&v11->padding_0[96] + 228))(v11, *(int *)v11->field_b30 + 8))
                {
                    v12 = *(int *)(*(unsigned int *)&idx + 8);
                    v13 = *(int *)v12->field_b30 + 8;
                    *(float *)&v6 = *(float *)(*(int *)v12->field_b30 + 8);
                    *(float *)&v7 = *(float *)&v13[1];
                    *(float *)&v8 = *(float *)&v13[2];
                    *(float *)&v0 = *(float *)(*(int *)v12->field_b30 + 8);
                    *(float *)&v1 = *(float *)&v13[1];
                    *(float *)&v2 = *(float *)&v13[2];
                    sub_48a170(&v3, v12, &v0);
                    *(unsigned int *)&v12->padding_b34[220] = v3;
                    *(unsigned int *)&v12->padding_b34[224] = v4;
                    *(unsigned int *)&v12->padding_b34[228] = v5;
                    v14 = *(int *)(*(unsigned int *)&idx + 8);
                    if (v14->field_1008 == 0xffffffff)
                        return _INSERT(v14, 0, 1);
                    v14->field_1008 = 0xffffffff;
                    return _INSERT(v14, 0, 1);
                }
                else
                {
                    v10 = *(int *)(*(unsigned int *)&idx + 8);
                    if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 4132) != 0xffffffff)
                        return sub_48bf80(idx);
                }
            }
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return _INSERT(v10, 0, 0);
}

