// Activate__9CBotCombo @0x165950 size=127
typedef struct st_565950_0 {
    char padding_0[12];
    struct st_565950_0 *field_c;
} st_565950_0;

typedef struct st_565950_3 {
    struct st_565950_2 *field_0;
    struct st_565950_2 *field_4;
    struct st_565950_0 *field_8;
    char padding_c[4];
    unsigned int field_10;
} st_565950_3;

typedef struct st_565950_2 {
    struct st_565950_0 *field_0;
    struct st_565950_1 *field_4;
} st_565950_2;

typedef struct st_565950_1 {
    char padding_0[8];
    unsigned int field_8;
} st_565950_1;

extern st_565950_2 *gpGlobals;

st_565950_2 * Activate__9CBotCombo(st_565950_3 *a0)
{
    st_565950_0 *v0;  // edx
    st_565950_2 *v1;  // eax
    st_565950_0 *v2;  // edi
    st_565950_2 *v3;  // edx
    st_565950_1 *v4;  // eax

    a0->field_10 = 1;
    if (!a0->field_0)
    {
        v0 = NULL;
    }
    else
    {
        v1 = a0->field_0;
        v2 = v1->field_0;
        v3 = v1;
        if (v3)
        {
            if (v3 == a0->field_4)
                a0->field_4 = v3->field_4;
            v4 = a0->field_0->field_4;
            a0->field_0 = v4;
            if (v4)
                v4->field_8 = 0;
            v3->field_4 = NULL;
            v1 = __builtin_delete(v3);
        }
        v0 = v2;
    }
    a0->field_8 = v0;
    if (v0)
    {
        v1 = gpGlobals;
        *(float *)&v0->field_c = *(float *)&gpGlobals->field_0;
    }
    return v1;
}

