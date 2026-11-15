// _._14CDrainEntsTask @0x152cf0 size=331
typedef struct st_552cf0_1 {
    struct st_552cf0_2 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_552cf0_1;

typedef struct st_552cf0_4 {
    char padding_0[12];
    struct st_552cf0_5 *field_c;
    char padding_10[4];
    unsigned int field_14;
    char padding_18[4];
    struct st_552cf0_6 *field_1c;
} st_552cf0_4;

typedef struct st_552cf0_2 {
    struct st_552cf0_0 *field_0;
} st_552cf0_2;

typedef struct st_552cf0_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_552cf0_0;

typedef struct st_552cf0_5 {
    char padding_0[456];
    unsigned int field_1c8;
    char padding_1cc[16];
    unsigned int field_1dc;
} st_552cf0_5;

typedef struct st_552cf0_6 {
    struct st_552cf0_3 *field_0;
    struct st_552cf0_3 *field_4;
} st_552cf0_6;

typedef struct st_552cf0_3 {
    struct st_552cf0_1 *field_0;
    struct st_552cf0_3 *field_4;
    unsigned int field_8;
} st_552cf0_3;

extern char __vt_14CDrainEntsTask;

int _._14CDrainEntsTask(st_552cf0_4 *a0, int a1)
{
    st_552cf0_3 **v0;  // edx
    st_552cf0_1 *v1;  // esi
    st_552cf0_3 *v2;  // ecx
    st_552cf0_3 *v3;  // eax
    unsigned int *v4;  // edx
    st_552cf0_3 **v5;  // edi
    st_552cf0_3 *iter;  // esi
    st_552cf0_3 *v7;  // eax

    a0->field_14 = &__vt_14CDrainEntsTask;
    a0->field_c->field_1dc = 0;
    a0->field_c->field_1c8 = 2;
    *(float *)&a0->field_c->padding_1cc[0] = 255.0f;
    if (!a0->field_1c)
        return _._9CBaseTask(a0, a1);
    while (a0->field_1c->field_0)
    {
        v0 = a0->field_1c;
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
                __builtin_delete(v2);
            }
            if (v1)
            {
                if (!(char)IsNull(v1->field_0))
                {
                    v4 = *(int *)v1->field_0;
                    v4[8] = v1->field_4;
                    v4[9] = v1->field_8;
                    v4[10] = v1->field_c;
                }
                __builtin_delete(v1);
            }
        }
    }
    if (a0->field_1c)
    {
        v5 = a0->field_1c;
        iter = *v5;
        if (*v5)
        {
            do
            {
                v7 = iter;
                iter = iter->field_4;
                v7->field_4 = NULL;
                v7->field_8 = 0;
                __builtin_delete(v7);
            } while (iter);
        }
        v5[1] = NULL;
        *v5 = NULL;
        __builtin_delete(v5);
    }
    return _._9CBaseTask(a0, a1);
}

