// DispatchKeyValue__FP7edict_sP14KeyValueData_s @0x9c260 size=101
typedef struct st_49c260_3 {
    char padding_0[124];
    struct st_49c260_2 *field_7c;
} st_49c260_3;

typedef struct st_49c260_0 {
    char padding_0[16];
    struct st_49c260_1 *field_10;
} st_49c260_0;

typedef struct st_49c260_1 {
    unsigned int field_0;
} st_49c260_1;

typedef struct st_49c260_2 {
    char padding_0[96];
    struct st_49c260_0 *field_60;
} st_49c260_2;

unsigned int DispatchKeyValue__FP7edict_sP14KeyValueData_s(st_49c260_3 *a0, unsigned int *a1)
{
    unsigned int v0;  // eax
    st_49c260_2 *v1;  // edx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (!a1)
    {
        return v3;
    }
    else if (a0)
    {
        v0 = EntvarsKeyvalue(a0 + 1, a1);
        if (a1[3])
        {
            return v0;
        }
        else if (*a1)
        {
            v1 = NULL;
            if (a0)
                v1 = a0->field_7c;
            if (!v1)
                return v0;
            v1->field_60->field_10(v1, a1);
            return v0;
        }
        else
        {
            return v0;
        }
    }
    else
    {
        return v2;
    }
}

