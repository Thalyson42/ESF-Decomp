// _._11CBotManager @0x13dde0 size=240
typedef struct st_53dde0_1 {
    struct st_53dde0_0 *field_0;
    struct st_53dde0_0 *field_4;
} st_53dde0_1;

typedef struct st_53dde0_0 {
    int field_0;
    struct st_53dde0_0 *field_4;
    unsigned int field_8;
} st_53dde0_0;

unsigned int _._11CBotManager(st_53dde0_1 **a0, unsigned int a1)
{
    st_53dde0_0 **v0;  // edx
    int v1;  // eax
    st_53dde0_0 *v2;  // ecx
    st_53dde0_0 *v3;  // eax
    st_53dde0_0 **v4;  // edi
    st_53dde0_0 *iter;  // esi
    st_53dde0_0 *v6;  // eax
    unsigned int v7;  // eax

    if (*a0)
    {
        while (*a0->field_0)
        {
            v0 = *a0;
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
                    __builtin_delete(v2);
                }
            }
            __builtin_delete(v1);
        }
        if (*a0)
        {
            v4 = *a0;
            iter = *v4;
            if (*v4)
            {
                do
                {
                    v6 = iter;
                    iter = iter->field_4;
                    v6->field_4 = NULL;
                    v6->field_8 = 0;
                    __builtin_delete(v6);
                } while (iter);
            }
            v4[1] = NULL;
            *v4 = NULL;
            __builtin_delete(v4);
        }
    }
    v7 = a1;
    if ((char)v7 & 1)
        v7 = __builtin_delete(a0);
    return v7;
}

