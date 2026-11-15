// _._10CChatClass @0x1446d0 size=758
typedef struct st_5446d0_2 {
    struct st_5446d0_0 *field_0;
    struct st_5446d0_0 *field_4;
} st_5446d0_2;

typedef struct st_5446d0_1 {
    char padding_0[840];
    int field_348;
    struct st_5446d0_2 *field_34c;
    struct st_5446d0_2 *field_350;
    struct st_5446d0_2 *field_354;
} st_5446d0_1;

typedef struct st_5446d0_0 {
    unsigned int field_0;
    struct st_5446d0_0 *field_4;
    unsigned int field_8;
} st_5446d0_0;

unsigned int _._10CChatClass(st_5446d0_1 *a0, unsigned int a1)
{
    st_5446d0_0 **v0;  // edx
    unsigned int v1;  // esi
    st_5446d0_0 *v10;  // ecx
    st_5446d0_0 *v11;  // eax
    unsigned int v12;  // eax
    st_5446d0_0 **v13;  // edi
    st_5446d0_0 *iter;  // esi
    st_5446d0_0 *v15;  // eax
    st_5446d0_0 **v16;  // edx
    unsigned int v17;  // esi
    st_5446d0_0 *v18;  // ecx
    st_5446d0_0 *v19;  // eax
    st_5446d0_0 *v2;  // ecx
    unsigned int v20;  // eax
    st_5446d0_0 **v21;  // edi
    st_5446d0_0 *node;  // esi
    st_5446d0_0 *v23;  // eax
    unsigned int v24;  // eax
    st_5446d0_0 *v3;  // eax
    unsigned int v4;  // eax
    st_5446d0_0 **v5;  // edi
    st_5446d0_0 *iter1;  // esi
    st_5446d0_0 *v7;  // eax
    st_5446d0_0 **v8;  // edx
    unsigned int v9;  // esi

    if (a0->field_348)
    {
        if (a0->field_348)
            sub_48c1d0(a0->field_348, 3);
        a0->field_348 = 0;
    }
    if (a0->field_34c)
    {
        while (a0->field_34c->field_0)
        {
            v0 = a0->field_34c;
            if (*v0)
            {
                v1 = *v0->field_0;
                v2 = *v0;
                if (v2)
                {
                    if (v2 == v0[1])
                        v0[1] = v2->field_4;
                    v3 = *v0->field_4;
                    *v0 = v3;
                    if (v3)
                        v3->field_8 = 0;
                    v2->field_4 = NULL;
                    sub_48d4e0(v2);
                }
                v4 = v1;
                if (v4)
                    sub_48c1d0(v4, 3);
            }
        }
        if (a0->field_34c)
        {
            v5 = a0->field_34c;
            iter1 = *v5;
            if (*v5)
            {
                do
                {
                    v7 = iter1;
                    iter1 = iter1->field_4;
                    v7->field_4 = NULL;
                    v7->field_8 = 0;
                    sub_48d4e0(v7);
                } while (iter1);
            }
            v5[1] = NULL;
            *v5 = NULL;
            sub_48d4e0(v5);
        }
        a0->field_34c = NULL;
    }
    if (a0->field_350)
    {
        while (a0->field_350->field_0)
        {
            v8 = a0->field_350;
            if (*v8)
            {
                v9 = *v8->field_0;
                v10 = *v8;
                if (v10)
                {
                    if (v10 == v8[1])
                        v8[1] = v10->field_4;
                    v11 = *v8->field_4;
                    *v8 = v11;
                    if (v11)
                        v11->field_8 = 0;
                    v10->field_4 = NULL;
                    sub_48d4e0(v10);
                }
                v12 = v9;
                if (v12)
                    sub_48c1d0(v12, 3);
            }
        }
        if (a0->field_350)
        {
            v13 = a0->field_350;
            iter = *v13;
            if (*v13)
            {
                do
                {
                    v15 = iter;
                    iter = iter->field_4;
                    v15->field_4 = NULL;
                    v15->field_8 = 0;
                    sub_48d4e0(v15);
                } while (iter);
            }
            v13[1] = NULL;
            *v13 = NULL;
            sub_48d4e0(v13);
        }
        a0->field_350 = NULL;
    }
    if (a0->field_354)
    {
        while (a0->field_354->field_0)
        {
            v16 = a0->field_354;
            if (*v16)
            {
                v17 = *v16->field_0;
                v18 = *v16;
                if (v18)
                {
                    if (v18 == v16[1])
                        v16[1] = v18->field_4;
                    v19 = *v16->field_4;
                    *v16 = v19;
                    if (v19)
                        v19->field_8 = 0;
                    v18->field_4 = NULL;
                    sub_48d4e0(v18);
                }
                v20 = v17;
                if (v20)
                    sub_48c1d0(v20, 3);
            }
        }
        if (a0->field_354)
        {
            v21 = a0->field_354;
            node = *v21;
            if (*v21)
            {
                do
                {
                    v23 = node;
                    node = node->field_4;
                    v23->field_4 = NULL;
                    v23->field_8 = 0;
                    sub_48d4e0(v23);
                } while (node);
            }
            v21[1] = NULL;
            *v21 = NULL;
            sub_48d4e0(v21);
        }
        a0->field_354 = NULL;
    }
    v24 = a1;
    if ((char)v24 & 1)
        v24 = sub_48d4e0(a0);
    return v24;
}

