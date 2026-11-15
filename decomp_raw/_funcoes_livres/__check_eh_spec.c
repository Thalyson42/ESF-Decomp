// __check_eh_spec @0x1958e0 size=464
typedef struct st_5958e0_1 {
    unsigned int field_0;
} st_5958e0_1;

typedef struct st_5958e0_0 {
    char padding_0[4];
    struct st_5958e0_1 *field_4;
} st_5958e0_0;

typedef struct st_5958e0_3 {
    char padding_0[10172];
    struct st_5958e0_0 *field_27bc;
} st_5958e0_3;

typedef struct st_5958e0_2 {
    char padding_0[1033088];
    char field_fc380;
    char padding_fc381[10171];
    struct st_5958e0_0 *field_feb3c;
    char padding_feb40[92];
    unsigned int field_feb9c;
    char padding_feba0[328];
    struct st_5958e0_0 *field_fece8;
} st_5958e0_2;

void __check_eh_spec(st_5958e0_0 **a0, int *a1)
{
    st_5958e0_2 *v5;  // ebx
    int v6;  // esi
    int v7;  // edi
    int *v8;  // edi
    st_5958e0_0 **v9;  // esi
    st_5958e0_3 *iter;  // ebx
    int *v11;  // eax
    st_5958e0_0 **v12;  // esi
    st_5958e0_0 **node;  // esi
    st_5958e0_0 **v0;  // [bp-0x6c]
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x2c]
    int *v3;  // [bp-0x28]
    st_5958e0_0 *v4;  // [bp-0x24]

    sub_5958dc(v5, v6, v7);
    v8 = *(int *)sub_4895f0(v5, v6, v7);
    v9 = NULL;
    if (0 < a0)
    {
        do
        {
            if (sub_48a8d0(*(int *)((char *)a1 + 0x4 * v9), v8[3], v8[2]))
            {
                sub_489150();
                sub_48a220();
            }
        } while ((v9 = (char *)v9 + 1, v9 < a0));
    }
    sub_488d10();
    sub_48a220();
    sub_5958dc();
    iter = &v5->field_fc380;
    v11 = sub_48b3e0();
    v3 = v11;
    if (v8 != v11)
    {
        v12 = NULL;
        v8 = v11;
        if (0 < a0)
        {
            do
            {
                if (sub_48a8d0(*(int *)((char *)a1 + 0x4 * v12), v3[3], v3[2]))
                {
                    sub_489150();
                    sub_48a220();
                }
            } while ((v12 = (char *)v12 + 1, v8 = v11, v12 < a0));
        }
    }
    v2 = sub_488250();
    node = NULL;
    if (NULL >= a0)
        goto LABEL_595a3f;
    do
    {
        if (sub_48a8d0(*(int *)((char *)a1 + 0x4 * node), v2, v8[2]))
        {
            v4 = *(int *)&iter[1].padding_0[424];
            v4 = iter->field_27bc;
            node = sub_48df10(4);
            *node = *(int *)&iter[1].padding_0[424];
            *node = iter->field_27bc;
LABEL_595a06:
            v4 = iter->field_27bc;
            v4 = *(int *)&iter[1].padding_0[424];
            v1 = *node->field_4(*(int *)&iter[1].padding_0[92]);
            v0 = node;
            sub_488580(v0, v1);
            sub_48a220(v0, v1);
        }
    } while ((node = (char *)node + 1, node < a0));
LABEL_595a3f:
    sub_48a720();
    sub_48a220();
    sub_5958dc();
    iter = &iter[50].padding_0[7431];
    v4 = iter->field_27bc;
    v4 = *(int *)&iter[1].padding_0[424];
    sub_48a220();
    goto LABEL_595a06;
}

