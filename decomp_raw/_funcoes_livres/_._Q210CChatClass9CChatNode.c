// _._Q210CChatClass9CChatNode @0x143e80 size=291
typedef struct st_543e80_2 {
    struct st_543e80_0 *field_0;
    struct st_543e80_0 *field_4;
} st_543e80_2;

typedef struct st_543e80_0 {
    unsigned int field_0;
    struct st_543e80_0 *field_4;
    unsigned int field_8;
} st_543e80_0;

unsigned int _._Q210CChatClass9CChatNode(st_543e80_2 *a0, unsigned int a1)
{
    char *v0;  // eax
    st_543e80_0 **v1;  // edx
    unsigned int v2;  // esi
    st_543e80_0 *v3;  // ecx
    st_543e80_0 *v4;  // eax
    unsigned int v5;  // eax
    st_543e80_0 **v6;  // edi
    st_543e80_0 *iter;  // esi
    st_543e80_0 *v8;  // eax
    unsigned int v9;  // eax

    if (a0->field_4)
    {
        v0 = a0->field_4;
        if (*v0)
        {
            if (v0)
                __builtin_vec_delete(v0);
            a0->field_4 = NULL;
        }
    }
    if (a0->field_0)
    {
        while (a0->field_0->field_0)
        {
            v1 = a0->field_0;
            if (*v1)
            {
                v2 = *v1->field_0;
                v3 = *v1;
                if (v3)
                {
                    if (v3 == v1[1])
                        v1[1] = v3->field_4;
                    v4 = *v1->field_4;
                    *v1 = v4;
                    if (v4)
                        v4->field_8 = 0;
                    v3->field_4 = NULL;
                    __builtin_delete(v3);
                }
                v5 = v2;
                if (v5)
                    _._Q210CChatClass13CChatSentence(v5, 3);
            }
        }
        if (a0->field_0)
        {
            v6 = a0->field_0;
            iter = *v6;
            if (*v6)
            {
                do
                {
                    v8 = iter;
                    iter = iter->field_4;
                    v8->field_4 = NULL;
                    v8->field_8 = 0;
                    __builtin_delete(v8);
                } while (iter);
            }
            v6[1] = NULL;
            *v6 = NULL;
            __builtin_delete(v6);
        }
        a0->field_0 = NULL;
    }
    v9 = a1;
    if ((char)v9 & 1)
        v9 = __builtin_delete(a0);
    return v9;
}

