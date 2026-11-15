// KeyValue__9CBubblingP14KeyValueData_s @0xaf510 size=889
typedef struct st_4af510_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4af510_0;

typedef struct st_4af510_2 {
    char padding_0[504];
    unsigned int field_1f8;
} st_4af510_2;

typedef struct st_4af510_1 {
    char padding_0[504];
    float field_1f8;
} st_4af510_1;

st_4af510_2 * KeyValue__9CBubblingP14KeyValueData_s(st_4af510_1 **a0, st_4af510_0 *a1)
{
    st_4af510_2 *v1;  // eax
    st_4af510_2 *v2;  // eax
    st_4af510_2 *v3;  // eax
    int v4;  // eax
    st_4af510_1 *v5;  // eax
    int v0;  // [bp-0x8]

    if (!sub_488af0(a1->field_4, "density"))
    {
        v1 = sub_48b500(a1->field_8, 0, 10, 0);
        a0[25] = v1;
        a1->field_c = 1;
        return v1;
    }
    else if (!sub_488af0(a1->field_4, "frequency"))
    {
        v2 = sub_48b500(a1->field_8, 0, 10, 0);
        a0[26] = v2;
        a1->field_c = 1;
        return v2;
    }
    else
    {
        v3 = sub_488af0(a1->field_4, "current");
        if (v3)
        {
            a1->field_c = 0;
            return v3;
        }
        v4 = sub_48b500(a1->field_8, 0, 10, 0);
        v5 = *a0;
        v0 = v4;
        v5->field_1f8 = (float)v0;
        a1->field_c = 1;
        return v5;
    }
}

