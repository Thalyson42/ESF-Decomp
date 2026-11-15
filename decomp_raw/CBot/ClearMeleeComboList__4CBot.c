// ClearMeleeComboList__4CBot @0x155d70 size=240
typedef struct st_555d70_1 {
    char padding_0[2956];
    struct st_555d70_2 *field_b8c;
} st_555d70_1;

typedef struct st_555d70_2 {
    struct st_555d70_0 *field_0;
    struct st_555d70_0 *field_4;
} st_555d70_2;

typedef struct st_555d70_0 {
    int field_0;
    struct st_555d70_0 *field_4;
    unsigned int field_8;
} st_555d70_0;

st_555d70_1 * ClearMeleeComboList__4CBot(st_555d70_1 *a0)
{
    st_555d70_0 **v0;  // edx
    int v1;  // eax
    st_555d70_0 *v2;  // ecx
    st_555d70_0 *v3;  // eax
    st_555d70_1 *v4;  // eax
    st_555d70_0 **v5;  // edi
    st_555d70_0 *iter;  // esi
    st_555d70_0 *v7;  // eax

    if (!a0->field_b8c)
        return a0;
    while (a0->field_b8c->field_0)
    {
        v0 = a0->field_b8c;
        if (!*v0)
        {
            v1 = 0;
        }
        else
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
        }
        sub_48d4e0(v1);
    }
    v4 = a0;
    if (v4->field_b8c)
    {
        v5 = v4->field_b8c;
        iter = *v5;
        if (*v5)
        {
            do
            {
                v7 = iter;
                iter = iter->field_4;
                v7->field_4 = NULL;
                v7->field_8 = 0;
                sub_48d4e0(v7);
            } while (iter);
        }
        v5[1] = NULL;
        *v5 = NULL;
        v4 = sub_48d4e0(v5);
    }
    a0->field_b8c = NULL;
    return v4;
}

