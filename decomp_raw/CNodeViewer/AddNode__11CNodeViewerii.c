// AddNode__11CNodeViewerii @0xe62b0 size=150
typedef struct st_4e62b0_1 {
    struct st_4e62b0_1 *field_0;
} st_4e62b0_1;

typedef struct st_4e62b0_0 {
    char padding_0[108];
    int field_6c;
} st_4e62b0_0;

st_4e62b0_1 ** AddNode__11CNodeViewerii(st_4e62b0_0 *a0, st_4e62b0_1 **a1, st_4e62b0_1 **a2)
{
    int i;  // edx
    st_4e62b0_1 **v3;  // eax
    st_4e62b0_1 **v4;  // eax
    unsigned int v5;  // eax
    st_4e62b0_1 **v6;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    if (a0->field_6c > 127)
    {
        return v6;
    }
    else if (a1 != a2)
    {
        i = 0;
        if (0 < a0->field_6c)
        {
            v1 = a0 + 1;
            v0 = &a0[5].padding_0[64];
            do
            {
                v3 = i * 4;
                if (*(int *)((char *)v3 + v1) == a1 && *(int *)((char *)v3 + v0) == a2)
                    return v3;
                v4 = i * 4;
                if (*(int *)((char *)v4 + v1) == a2 && *(int *)((char *)v4 + v0) == a1)
                    return v4;
                i += 1;
            } while (i < a0->field_6c);
        }
        *(st_4e62b0_1 ***)&a0[1].padding_0[4 * a0->field_6c] = a1;
        v5 = a0->field_6c * 4;
        *(st_4e62b0_1 ***)&a0[5].padding_0[64 + v5] = a2;
        a0->field_6c = a0->field_6c + 1;
        return v5;
    }
    else
    {
        return a2;
    }
}

